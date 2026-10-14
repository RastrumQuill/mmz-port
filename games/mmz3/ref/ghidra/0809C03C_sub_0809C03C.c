// sub_0809C03C at 0x0809C03C (thumb)

undefined4 sub_0809C03C(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      if ((*(byte *)(*(int *)(*(int *)(param_1 + 0x28) + 0x18) + 9) & 0x80) == 0) {
        return in_lr;
      }
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08017700(param_1,*(undefined2 *)(param_1 + 0xb4));
    *(undefined *)(param_1 + 0x12) = 0x1e;
    if (*(int *)(param_1 + 0x5c) < 1) {
      iVar3 = *(int *)(param_1 + 0x28);
      iVar2 = *(int *)(iVar3 + 0x54);
      iVar4 = -0xc00;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x28);
      iVar2 = *(int *)(iVar3 + 0x54);
      iVar4 = 0xc00;
    }
    *(int *)(param_1 + 100) = iVar2 + iVar4;
    *(undefined4 *)(param_1 + 0x60) = 0x80;
    *(int *)(param_1 + 0x68) = *(int *)(iVar3 + 0x58) + 0x600;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x54) + ((*(int *)(param_1 + 100) - *(int *)(param_1 + 0x54)) * 0x10 >> 8)
  ;
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x58) +
       ((*(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x58)) * 0x10 >> 8);
  sub_080177F4(param_1);
  return in_lr;
}

