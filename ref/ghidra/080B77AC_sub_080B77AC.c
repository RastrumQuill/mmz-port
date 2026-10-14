// sub_080B77AC at 0x080B77AC (thumb)

undefined4 sub_080B77AC(int param_1)

{
  undefined4 in_lr;
  
  if (DAT_02022878 == '\0') {
    sub_08018FF8(*(undefined4 *)(param_1 + 0x20),param_1 + 0x4c,0);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined *)(param_1 + 0xcd) = 0x1e;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 6;
    sub_080055FC(param_1 + 0x74,&DAT_082b838c,param_1 + 0x4c,0);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0x80b7b91;
    sub_080B4FA4(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_080B50DC(param_1,5);
    sub_080B784C(param_1);
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b6e70)[*(byte *)(param_1 + 9)] + 4);
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

