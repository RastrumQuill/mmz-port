// sub_08096320 at 0x08096320 (thumb)

undefined4 sub_08096320(int param_1)

{
  undefined4 in_lr;
  
  sub_08012580();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined2 *)(param_1 + 0xba) = 0xe10;
  *(undefined *)(param_1 + 0xb4) = 0x28;
  *(undefined *)(param_1 + 0xb5) = 0x28;
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 7;
  *(undefined *)(param_1 + 0xe) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_08342e98,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x8096bf5;
  sub_080963B0(param_1);
  return in_lr;
}

