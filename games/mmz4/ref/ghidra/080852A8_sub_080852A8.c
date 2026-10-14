// sub_080852A8 at 0x080852A8 (thumb)

void sub_080852A8(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_3 != 0) {
    iVar1 = *(int *)(param_1 + 0x58) + param_3;
    *(int *)(param_1 + 0x58) = iVar1;
    if (param_3 < 0) {
      iVar1 = sub_08007F8C(*(undefined4 *)(param_1 + 0x54),iVar1 + -0x1000);
      if (iVar1 < 1) goto LAB_080852e6;
    }
    else {
      iVar1 = sub_08007DB4(*(undefined4 *)(param_1 + 0x54));
      if (-1 < iVar1) goto LAB_080852e6;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar1;
  }
LAB_080852e6:
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x54) + param_2;
    *(int *)(param_1 + 0x54) = iVar1;
    if (param_2 < 0) {
      iVar1 = sub_0800834C(iVar1,*(int *)(param_1 + 0x58) + -0x800);
      if (iVar1 < 1) {
        return;
      }
    }
    else {
      iVar1 = sub_0800816C(iVar1,*(int *)(param_1 + 0x58) + -0x800);
      if (-1 < iVar1) {
        return;
      }
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar1;
  }
  return;
}

