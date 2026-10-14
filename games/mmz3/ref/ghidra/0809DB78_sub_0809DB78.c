// sub_0809DB78 at 0x0809DB78 (thumb)

undefined4 sub_0809DB78(int param_1)

{
  undefined4 in_lr;
  
  sub_0801749C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 7;
  sub_0800736C(param_1 + 0x74,&DAT_08367464,param_1 + 0x54,0);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  sub_08017700(param_1,1);
  *(undefined *)(param_1 + 0x12) = 0xff;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 4);
  sub_0809DBF8(param_1);
  return in_lr;
}

