// sub_08094370 at 0x08094370 (thumb)

void sub_08094370(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_3 != 0) {
    iVar1 = *(int *)(param_1 + 0x58) + param_3;
    *(int *)(param_1 + 0x58) = iVar1;
    if (param_3 < 0) {
      iVar1 = sub_08008F50(*(undefined4 *)(param_1 + 0x54),iVar1 + -0x1000);
      if (iVar1 < 1) goto LAB_080943ae;
    }
    else {
      iVar1 = sub_08008DE8(*(undefined4 *)(param_1 + 0x54));
      if (-1 < iVar1) goto LAB_080943ae;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar1;
  }
LAB_080943ae:
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x54) + param_2;
    *(int *)(param_1 + 0x54) = iVar1;
    if (param_2 < 0) {
      iVar1 = sub_08009240(iVar1,*(int *)(param_1 + 0x58) + -0x800);
      if (iVar1 < 1) {
        return;
      }
    }
    else {
      iVar1 = sub_080090D4(iVar1,*(int *)(param_1 + 0x58) + -0x800);
      if (-1 < iVar1) {
        return;
      }
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar1;
  }
  return;
}

