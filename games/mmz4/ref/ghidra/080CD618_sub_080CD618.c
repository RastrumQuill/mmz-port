// sub_080CD618 at 0x080CD618 (thumb)

undefined4 sub_080CD618(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(byte *)(iVar1 + 0xc) < 2) {
    sub_0801CFF0(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(iVar1 + 0x54) + 0x400;
    *(int *)(param_1 + 0x58) = *(int *)(iVar1 + 0x58) + -0x2700;
    if (*(char *)(param_1 + 0x73) == '\x03') {
      DAT_0202dad4 = 1;
      DAT_0202cab2 = 1;
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_080CD6A8(param_1);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8);
    sub_080CD6A8(param_1);
  }
  return in_lr;
}

