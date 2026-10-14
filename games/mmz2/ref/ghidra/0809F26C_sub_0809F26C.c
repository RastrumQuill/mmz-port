// sub_0809F26C at 0x0809F26C (thumb)

undefined4 sub_0809F26C(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  sub_08012580();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x3208);
  sub_080128D4(param_1);
  uVar1 = 0;
  if (0 < (int)(6 - (uint)*(byte *)(param_1 + 0x11))) {
    do {
      sub_080128D4(param_1);
      sub_080128D4(param_1);
      uVar1 = uVar1 + 1 & 0xff;
    } while ((int)uVar1 < (int)(6 - (uint)*(byte *)(param_1 + 0x11)));
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_08343e84,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 4);
  sub_0809F104(param_1);
  return in_lr;
}

