// sub_080A93A0 at 0x080A93A0 (thumb)

undefined4 sub_080A93A0(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 4);
  sub_08017528(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08017700(param_1,0x5c03);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  bVar1 = *(byte *)(param_1 + 0x11);
  *(int *)(param_1 + 0x5c) = (int)(short)(&DAT_080fe64c)[bVar1] << 2;
  *(int *)(param_1 + 0x60) =
       (int)*(short *)((int)&DAT_080fe64c + ((bVar1 + 0xc0) * 0x1000000 >> 0x17)) << 2;
  *(undefined *)(param_1 + 0x12) = 8;
  *(byte *)(param_1 + 0x24) = bVar1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_0800736C(param_1 + 0x74,&DAT_08368990,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  sub_080A8B90(param_1);
  return in_lr;
}

