// sub_0803AE6C at 0x0803AE6C (thumb)

undefined4 sub_0803AE6C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017528(param_1);
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfb;
    *(undefined2 *)(param_1 + 0x20) = 0;
    *(undefined *)(param_1 + 0x22) = 0;
    sub_08017700(param_1,0x2100);
    *(undefined *)(param_1 + 0x24) = 0x40;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar1 = *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x58) = iVar1 + -0x400;
  if ((0x13000 < *(int *)(param_1 + 0x54) - 0x265000U) || (0xe000 < iVar1 - 0x1b400U)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0835b5d0)[*(byte *)(param_1 + 9)] + 8);
  }
  sub_080177F4(param_1);
  return in_lr;
}

