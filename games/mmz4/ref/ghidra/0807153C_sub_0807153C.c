// sub_0807153C at 0x0807153C (thumb)

undefined4 sub_0807153C(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  short asStack_20 [4];
  short asStack_18 [4];
  
  sub_08128B5C(asStack_20,&DAT_0812925a,6);
  sub_08128B5C(asStack_18,&DAT_08129260,6);
  bVar1 = *(byte *)(param_1 + 0xc3);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_080735E0(param_1,5);
    *(int *)(param_1 + 0x60) = -(int)asStack_20[bVar1];
    *(int *)(param_1 + 0x68) = (int)asStack_18[bVar1];
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
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar2 = sub_08073704(param_1);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
      *(int *)(param_1 + 0x60) = iVar2;
      if (0x700 < iVar2) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
    }
    else {
      sub_080738E8(param_1);
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
  }
  else {
    sub_08073984(param_1);
  }
  iVar2 = FUN_081288bc(-*(int *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
  if (iVar2 + 1 < 0x11) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

