// sub_08073290 at 0x08073290 (thumb)

undefined8 sub_08073290(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  iVar3 = *(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54);
  iVar4 = *(int *)(DAT_0202f5c0 + 0x58) - (*(int *)(param_1 + 0x58) + 0xc00);
  iVar1 = sub_080FE124((iVar3 >> 2) * (iVar3 >> 2) + (iVar4 >> 2) * (iVar4 >> 2));
  uVar5 = (uint)(iVar1 << 0x10) >> 0xe;
  if (uVar5 != 0) {
    iVar3 = FUN_080fe2f8(iVar3 * 0x100,uVar5);
    iVar4 = FUN_080fe2f8(iVar4 * 0x100,uVar5);
  }
  if (iVar3 < 1) {
    iVar1 = iVar4;
    if (iVar4 < 0) {
      iVar1 = -iVar4;
    }
    if (iVar1 < 0xed) {
      iVar1 = iVar4;
      if (iVar4 < 0) {
        iVar1 = -iVar4;
      }
      uVar2 = 6;
      if ((0x60 < iVar1) && (uVar2 = 7, 0 < iVar4)) {
        uVar2 = 5;
      }
      goto LAB_08073334;
    }
  }
  else {
    iVar1 = iVar4;
    if (iVar4 < 0) {
      iVar1 = -iVar4;
    }
    if (iVar1 < 0xed) {
      iVar1 = iVar4;
      if (iVar4 < 0) {
        iVar1 = -iVar4;
      }
      uVar2 = 2;
      if ((0x60 < iVar1) && (uVar2 = 1, 0 < iVar4)) {
        uVar2 = 3;
      }
      goto LAB_08073334;
    }
  }
  uVar2 = 0;
  if (0 < iVar4) {
    uVar2 = 4;
  }
LAB_08073334:
  return CONCAT44(in_lr,uVar2);
}

