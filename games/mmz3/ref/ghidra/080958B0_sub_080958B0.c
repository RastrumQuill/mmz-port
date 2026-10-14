// sub_080958B0 at 0x080958B0 (thumb)

undefined8 sub_080958B0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  uVar3 = 0;
  iVar1 = sub_08009B28(*(int *)(param_1 + 0x54) + 0xa00,*(undefined4 *)(param_1 + 0x58));
  iVar2 = sub_0800A104(*(int *)(param_1 + 0x54) + -0xa00,*(undefined4 *)(param_1 + 0x58));
  if (iVar1 < iVar2) {
    if ((-1 < iVar1) || (iVar1 < -0x3ff)) goto LAB_08095902;
    iVar1 = *(int *)(param_1 + 0x58) + iVar1;
  }
  else {
    if ((-1 < iVar2) || (iVar2 < -0x3ff)) goto LAB_08095902;
    iVar1 = *(int *)(param_1 + 0x58) + iVar2;
  }
  *(int *)(param_1 + 0x58) = iVar1;
  uVar3 = 1;
LAB_08095902:
  return CONCAT44(in_lr,uVar3);
}

