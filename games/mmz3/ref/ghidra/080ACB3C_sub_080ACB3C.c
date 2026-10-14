// sub_080ACB3C at 0x080ACB3C (thumb)

undefined4 sub_080ACB3C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    sub_0801749C();
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 7;
    sub_0800736C(param_1 + 0x74,&DAT_08369014,param_1 + 0x54,4);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 4);
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  else if (*(char *)(param_1 + 0x11) == '\x01') {
    sub_080175BC(param_1);
    *(undefined2 *)(param_1 + 0x50) = 0x100;
    *(undefined2 *)(param_1 + 0x52) = 0x100;
    *(undefined *)(param_1 + 0x24) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 7;
    sub_0800736C(param_1 + 0x74,&DAT_08369014,param_1 + 0x54,4);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 4);
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  *(undefined *)(param_1 + 0x12) = 0xff;
  sub_080ACC18(param_1);
  return in_lr;
}

