// sub_0801A03C at 0x0801A03C (thumb)

undefined4 sub_0801A03C(uint param_1,undefined param_2)

{
  undefined4 in_lr;
  
  param_1 = param_1 & 0xff;
  DAT_020301a0 = (undefined2)param_1;
  DAT_020301a3 = 0xff;
  DAT_020301aa = 0;
  DAT_020301a2 = param_2;
  sub_0803252C(&DAT_02037300);
  sub_080198F0(param_1,&DAT_020372b0);
  if ((*(uint *)(DAT_02030160 + 0x14) & 1 << (&DAT_08349530)[param_1]) == 0) {
    DAT_02037110 = DAT_02037110 & 0xdf;
  }
  else {
    DAT_02037110 = DAT_02037110 | 0x20;
  }
  sub_0801978C(param_1,&DAT_02037110);
  sub_080F8858();
  sub_080FE110(&DAT_02037300,&DAT_02037330,0);
  FUN_080fe114(&DAT_02037300,&DAT_02037330,&DAT_04000003);
  DAT_02037102 = (ushort)*(byte *)(DAT_02030160 + 1);
  sub_08019850(&DAT_02037164);
  sub_080FE110(&DAT_020371b8,&DAT_020371e8,8);
  FUN_080fe114(&DAT_020371d8,&DAT_02037208,&DAT_04000004);
  sub_080FE110(&DAT_02037218,&DAT_02037264,0x10);
  FUN_080fe114(&DAT_02037258,&DAT_020372a4,&DAT_04000003);
  return in_lr;
}

