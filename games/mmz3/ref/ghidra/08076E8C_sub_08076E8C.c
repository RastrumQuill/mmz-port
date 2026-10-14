// sub_08076E8C at 0x08076E8C (thumb)

undefined8 sub_08076E8C(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x54) + param_2;
    *(int *)(param_1 + 0x54) = iVar1;
    if (param_2 < 0) {
      iVar1 = sub_08009F80(iVar1 + -0x200,*(int *)(param_1 + 0x58) + -0x800);
      if (0 < iVar1) {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar1;
        uVar2 = 1;
        goto LAB_08076eea;
      }
    }
    else {
      iVar1 = sub_08009E14(iVar1 + 0x200,*(int *)(param_1 + 0x58) + -0x800);
      if (iVar1 < 0) {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar1;
        uVar2 = 2;
        goto LAB_08076eea;
      }
    }
  }
  uVar2 = 0;
LAB_08076eea:
  return CONCAT44(in_lr,uVar2);
}

