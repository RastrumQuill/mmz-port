// sub_080E54E4 at 0x080E54E4 (thumb)

undefined4 sub_080E54E4(int param_1)

{
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  local_18 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = local_18;
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  if (*(char *)(param_1 + 0x12) == '\0') {
    local_14 = *(int *)(param_1 + 0x58) + -0xa00;
    sub_080D0894(1,&local_18);
    sub_08002B10(0x2a);
    if (*(char *)(param_1 + 0x11) == '\0') {
      sub_080E5194(param_1 + 0x54,0x103,*(byte *)(param_1 + 10) >> 4 & 1);
    }
    else {
      sub_080E5194(param_1 + 0x54,0x101,*(byte *)(param_1 + 10) >> 4 & 1);
      sub_080E5194(param_1 + 0x54,0x102,*(byte *)(param_1 + 10) >> 4 & 1);
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  return in_lr;
}

