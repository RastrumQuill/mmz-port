// sub_080D89F8 at 0x080D89F8 (thumb)

undefined4 sub_080D89F8(int param_1)

{
  undefined4 in_lr;
  
  if (DAT_0202e144 == '\0') {
    sub_080378B4(*(undefined4 *)(param_1 + 0x28),param_1 + 0x54,0);
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined *)(param_1 + 0xc5) = 0x1e;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 6;
    sub_08006DE4(param_1 + 0x74,&DAT_0834b578,param_1 + 0x54,0);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0x80d8dc5;
    sub_08012580(param_1);
    sub_080127D0(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_080127E4(param_1,0x9005);
    sub_080D8AA0(param_1);
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834a1a0)[*(byte *)(param_1 + 9)] + 4);
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

