// sub_080B7B94 at 0x080B7B94 (thumb)

undefined4 sub_080B7B94(int param_1)

{
  undefined4 in_lr;
  
  if (DAT_02022878 == '\0') {
    sub_08018FF8(*(undefined4 *)(param_1 + 0x20),param_1 + 0x4c,0);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined *)(param_1 + 0xcd) = 1;
    *(undefined4 *)(param_1 + 0xd0) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
    sub_080B4FA4(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_080B50DC(param_1,5);
    sub_080B7C24(param_1);
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b6e70)[*(byte *)(param_1 + 9)] + 4);
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

