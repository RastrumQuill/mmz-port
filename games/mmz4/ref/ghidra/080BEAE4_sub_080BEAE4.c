// sub_080BEAE4 at 0x080BEAE4 (thumb)

undefined4 sub_080BEAE4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\x03') {
    sub_0801CC9C(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 7;
    sub_08005760(param_1 + 0x74,&DAT_088619a8,param_1 + 0x54,0);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 4);
    sub_080BEBA4(param_1);
  }
  else {
    sub_0801CC9C(param_1);
    *(undefined2 *)(param_1 + 0x50) = 0x100;
    *(undefined2 *)(param_1 + 0x52) = 0x100;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 7;
    sub_08005760(param_1 + 0x74,&DAT_08861948,param_1 + 0x54,0);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 4);
    sub_080BEBA4(param_1);
  }
  return in_lr;
}

