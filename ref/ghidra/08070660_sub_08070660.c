// sub_08070660 at 0x08070660 (thumb)

void sub_08070660(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_3 != 0) {
    iVar1 = *(int *)(param_1 + 0x50) + param_3;
    *(int *)(param_1 + 0x50) = iVar1;
    if (param_3 < 0) {
      iVar1 = sub_08007CF8(*(undefined4 *)(param_1 + 0x4c),iVar1 + -0x1000);
      if (iVar1 < 1) goto LAB_0807069e;
    }
    else {
      iVar1 = sub_08007B30(*(undefined4 *)(param_1 + 0x4c));
      if (-1 < iVar1) goto LAB_0807069e;
    }
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar1;
  }
LAB_0807069e:
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x4c) + param_2;
    *(int *)(param_1 + 0x4c) = iVar1;
    if (param_2 < 0) {
      iVar1 = sub_08008120(iVar1,*(int *)(param_1 + 0x50) + -0x800);
      if (iVar1 < 1) {
        return;
      }
    }
    else {
      iVar1 = sub_08007EE0(iVar1,*(int *)(param_1 + 0x50) + -0x800);
      if (-1 < iVar1) {
        return;
      }
    }
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar1;
  }
  return;
}

