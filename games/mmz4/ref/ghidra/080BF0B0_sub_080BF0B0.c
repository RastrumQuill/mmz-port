// sub_080BF0B0 at 0x080BF0B0 (thumb)

void sub_080BF0B0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_3 != 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + param_3;
    if (param_3 < 0) {
      iVar1 = sub_08007F8C(*(undefined4 *)(param_1 + 0x54));
      if (iVar1 < 1) goto LAB_080bf0e4;
    }
    else {
      iVar1 = sub_08007DB4(*(undefined4 *)(param_1 + 0x54));
      if (-1 < iVar1) goto LAB_080bf0e4;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar1;
  }
LAB_080bf0e4:
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x54) + param_2;
    *(int *)(param_1 + 0x54) = iVar1;
    if (param_2 < 0) {
      if (*(char *)(param_1 + 0xb4) == '\0') {
        iVar2 = *(int *)(param_1 + 0x58) + -0x800;
      }
      else {
        iVar2 = *(int *)(param_1 + 0x58);
      }
      iVar1 = sub_0800834C(iVar1,iVar2);
      if (iVar1 < 1) {
        return;
      }
    }
    else {
      if (*(char *)(param_1 + 0xb4) == '\0') {
        iVar2 = *(int *)(param_1 + 0x58) + -0x800;
      }
      else {
        iVar2 = *(int *)(param_1 + 0x58);
      }
      iVar1 = sub_0800816C(iVar1,iVar2);
      if (-1 < iVar1) {
        return;
      }
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar1;
  }
  return;
}

