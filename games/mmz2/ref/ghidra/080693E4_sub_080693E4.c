// sub_080693E4 at 0x080693E4 (thumb)

undefined4 sub_080693E4(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  param_2 = param_2 & 0xff;
  param_3 = param_3 & 0xffff;
  if (*(char *)(param_1 + 0x10) == '\0') {
    iVar1 = param_3 * (int)(short)(&DAT_080ef450)[param_2 + 0x40 & 0xff];
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    *(int *)(param_1 + 0x54) = *(int *)(*(int *)(param_1 + 0xb8) + 0x54) + (iVar1 >> 8) + -0x3800;
    iVar1 = param_3 * (int)(short)(&DAT_080ef450)[param_2];
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    *(int *)(param_1 + 0x58) = *(int *)(*(int *)(param_1 + 0xb8) + 0x58) + (iVar1 >> 8) + -0x2800;
  }
  else {
    iVar1 = param_3 * (int)(short)(&DAT_080ef450)[param_2 + 0x40 & 0xff];
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    *(int *)(param_1 + 0x54) = *(int *)(*(int *)(param_1 + 0x28) + 0x54) + (iVar1 >> 8);
    iVar1 = (int)(short)(&DAT_080ef450)[param_2] * param_3;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    *(int *)(param_1 + 0x58) = *(int *)(*(int *)(param_1 + 0x28) + 0x58) + (iVar1 >> 8);
    if (*(char *)(param_1 + 0x10) == '\x04') {
      *(char *)(param_1 + 0x24) = (char)(param_2 + 0x40);
    }
  }
  return in_lr;
}

