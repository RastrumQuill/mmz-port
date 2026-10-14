// sub_080887E0 at 0x080887E0 (thumb)

void sub_080887E0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_3 != 0) {
    iVar1 = *(int *)(param_1 + 0x58) + param_3;
    *(int *)(param_1 + 0x58) = iVar1;
    if (param_3 < 0) {
      iVar1 = sub_08009C90(*(undefined4 *)(param_1 + 0x54),iVar1 + -0x1000);
      if (iVar1 < 1) goto LAB_0808881e;
    }
    else {
      iVar1 = sub_08009B28(*(undefined4 *)(param_1 + 0x54));
      if (-1 < iVar1) goto LAB_0808881e;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar1;
  }
LAB_0808881e:
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x54) + param_2;
    *(int *)(param_1 + 0x54) = iVar1;
    if (param_2 < 0) {
      iVar1 = sub_08009F80(iVar1,*(int *)(param_1 + 0x58) + -0x800);
      if (iVar1 < 1) {
        return;
      }
    }
    else {
      iVar1 = sub_08009E14(iVar1,*(int *)(param_1 + 0x58) + -0x800);
      if (-1 < iVar1) {
        return;
      }
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar1;
  }
  return;
}

