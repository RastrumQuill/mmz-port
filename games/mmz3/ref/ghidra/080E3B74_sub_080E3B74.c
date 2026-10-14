// sub_080E3B74 at 0x080E3B74 (thumb)

undefined4 sub_080E3B74(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0xb4);
  if (*(char *)(param_1 + 0xc1) == '\0') {
    if (*(char *)(param_1 + 0xb8) == *(char *)(iVar1 + 0xb4)) {
      return in_lr;
    }
    if (*(char *)(iVar1 + 0x121) == '(') {
      DAT_02030108 = DAT_02030108 & 0x7f;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
  }
  else {
    if (*(char *)(param_1 + 0xb8) == *(char *)(iVar1 + 0xb5)) {
      return in_lr;
    }
    if (*(char *)(iVar1 + 0x121) == '(') {
      DAT_02030108 = DAT_02030108 & 0x7f;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e24c)[*(byte *)(param_1 + 9)] + 0xc);
  return in_lr;
}

