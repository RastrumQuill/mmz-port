// sub_08072A50 at 0x08072A50 (thumb)

undefined4 sub_08072A50(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_080735E0(param_1,5);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       (&DAT_088595cc)
                       [*(ushort *)(&DAT_088596c8 + (uint)*(byte *)(param_1 + 0xb8) * 2)]) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb8) * 4 +
                                       *(int *)(&DAT_088596c0 + (uint)*(byte *)(param_1 + 0xb9) * 4)
                                       ) + (int)*(char *)(param_1 + 0x71)) * 0x18);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    if (*(char *)(param_1 + 0xf) == '\x01') {
      sub_08002B10(0x126);
      *(undefined4 *)(param_1 + 0x68) = 0x20;
      iVar2 = *(int *)(param_1 + 0xcc) + 0x6800;
      *(int *)(param_1 + 0x5c) = iVar2;
      iVar3 = *(int *)(param_1 + 0xd0) + 0x3000;
      *(int *)(param_1 + 0x60) = iVar3;
      *(int *)(param_1 + 100) = iVar2 - *(int *)(param_1 + 0x54);
      iVar3 = *(int *)(param_1 + 0x58) - iVar3;
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      FUN_081288bc(iVar3 << 1,0x20);
      sVar1 = sub_081284F8();
      if (sVar1 == 0) {
        sVar1 = 1;
      }
      *(char *)(param_1 + 0x13) = (char)sVar1;
      *(char *)(param_1 + 0x12) = (char)sVar1;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
    cVar4 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar4;
    iVar3 = FUN_081288bc((uint)*(byte *)(param_1 + 0x12) * *(int *)(param_1 + 100),
                         *(undefined *)(param_1 + 0x13));
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x5c) - iVar3;
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x60) +
         ((int)((uint)*(byte *)(param_1 + 0x12) * *(int *)(param_1 + 0x68) *
               (uint)*(byte *)(param_1 + 0x12)) >> 1);
    if (cVar4 == '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  else {
    sub_08073984(param_1);
  }
  return in_lr;
}

