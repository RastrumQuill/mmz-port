// sub_08049900 at 0x08049900 (thumb)

undefined4 sub_08049900(int param_1)

{
  undefined4 in_lr;
  byte abStack_1c [4];
  
  sub_08128B5C(abStack_1c,&DAT_08128e90,3);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 4);
  sub_0801CC9C(param_1);
  sub_0801CEEC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0x8221);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_08853d2c,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(int *)(param_1 + 0x5c) =
       (int)*(short *)((int)&DAT_08128c10 +
                      ((abStack_1c[*(byte *)(param_1 + 0x11)] + 0x40) * 0x1000000 >> 0x17)) << 2;
  *(int *)(param_1 + 0x60) = (int)(short)(&DAT_08128c10)[abStack_1c[*(byte *)(param_1 + 0x11)]] << 2
  ;
  *(undefined *)(param_1 + 0x12) = 4;
  *(undefined *)(param_1 + 0xbd) = 1;
  sub_08049838(param_1);
  return in_lr;
}

