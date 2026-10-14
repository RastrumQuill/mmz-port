// sub_080EDE88 at 0x080EDE88 (thumb)

undefined4 sub_080EDE88(int param_1)

{
  undefined4 in_lr;
  
  *(uint *)(param_1 + 0x6258) = (uint)DAT_03002ac0;
  sub_08008DDC();
  sub_080FE110(&DAT_02002400,param_1 + 0x1ee0,0);
  FUN_080fe114(&DAT_02002400,param_1 + 0x1ee0,&DAT_04000002);
  DAT_02002400 = 0;
  sub_080FE110(&DAT_02002410,param_1 + 0x1ee8,0);
  FUN_080fe114(&DAT_02002410,param_1 + 0x1ee8,&DAT_04000004);
  DAT_02002410 = 0;
  DAT_0200241e = 0xff;
  sub_080FE110(&DAT_06014000,param_1 + 0x2058,0x1000);
  sub_080FE110(&DAT_03002cc0,param_1 + 0x6058,0x80);
  return in_lr;
}

