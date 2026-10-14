// sub_080D9A64 at 0x080D9A64 (thumb)

undefined4 sub_080D9A64(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834a1a0)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0x13) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 6;
  sub_08006DE4(param_1 + 0x74,&DAT_0834b674,param_1 + 0x54,0);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x80d9c35;
  sub_080D9ABC(param_1);
  return in_lr;
}

