// sub_080ED1D4 at 0x080ED1D4 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_080ED1D4(int param_1)

{
  undefined4 in_lr;
  undefined4 local_18 [2];
  
  DAT_020023c0 = DAT_020023c0 | 0x3800;
  DAT_020023ca = 0x5a42;
  _DAT_020023d8 = 0;
  local_18[0] = 0;
  sub_080FE110(local_18,&DAT_0600d000,0x1000400);
  sub_0800393C(&DAT_085472bc,(DAT_020023ca & 0xc) << 0xc);
  sub_08003E14(&DAT_085472c8,0);
  sub_08004340(0x38,&DAT_085222a0,3,0,0);
  DAT_02002410 = DAT_02002410 | 0x4000;
  DAT_0200241d = 0xff;
  DAT_0200241e = DAT_0200241e & 0xf7 | 6;
  DAT_0200241a = 0xa0;
  *(undefined *)(param_1 + 0x246) = 10;
  return in_lr;
}

