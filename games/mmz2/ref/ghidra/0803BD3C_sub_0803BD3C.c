// sub_0803BD3C at 0x0803BD3C (thumb)

undefined4 sub_0803BD3C(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08336060)[*(byte *)(param_1 + 9)] + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_08012580(param_1);
  sub_080127D0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_0803C450(param_1,0,0,0);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_08337db0,param_1 + 0x54,0);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x803c3b1;
  sub_0803C49C(param_1,*(undefined *)(param_1 + 0x66),(int)*(char *)(param_1 + 0x71));
  *(undefined *)(param_1 + 0x6b) = 0;
  sub_0803BDCC(param_1);
  return in_lr;
}

