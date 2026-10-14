// sub_0803B560 at 0x0803B560 (thumb)

undefined4 sub_0803B560(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08336060)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_08012580(param_1);
  sub_080127D0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined *)(param_1 + 0x10) = (&DAT_08337b70)[*(byte *)(param_1 + 0x11)];
  sub_0803B8C4(param_1,0);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_08337b7c,param_1 + 0x54,0);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x803b861;
  sub_0803B8E4(param_1,*(undefined *)(param_1 + 0x12),(int)*(char *)(param_1 + 0x71));
  *(undefined *)(param_1 + 0x13) = 0;
  sub_080032EC(0x14);
  sub_0803B5FC(param_1);
  return in_lr;
}

