// sub_080B1200 at 0x080B1200 (thumb)

undefined4 sub_080B1200(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar2;
  iVar3 = *(int *)(param_1 + 0xbc);
  if (iVar3 < 0x1000) {
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    iVar3 = iVar3 + iVar2;
    *(int *)(param_1 + 0xbc) = iVar3;
    if (0xfff < iVar3) {
      iVar2 = *(int *)(param_1 + 0xb8) * -0x100;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xff;
      }
      *(int *)(param_1 + 0xb8) = iVar2 >> 8;
    }
  }
  sVar1 = sub_08007C7C(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 0xb4),
                       *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0xb8));
  if (sVar1 == 0) {
    *(undefined *)(param_1 + 0xd) = 1;
    iVar2 = *(int *)(param_1 + 0x5c) * -0x100;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar2 >> 8;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x60);
    *(char *)(param_1 + 0xc1) = *(char *)(param_1 + 0xc1) + '\x01';
  }
  return in_lr;
}

