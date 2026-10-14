// sub_080EDF3C at 0x080EDF3C (thumb)

undefined4 sub_080EDF3C(int param_1)

{
  undefined4 in_lr;
  
  sub_08008E20();
  sub_080FE110(param_1 + 0x1ee0,&DAT_02002400,0);
  FUN_080fe114(param_1 + 0x1ee0,&DAT_02002400,&DAT_04000002);
  sub_080FE110(param_1 + 0x1ee8,&DAT_02002410,0);
  FUN_080fe114(param_1 + 0x1ee8,&DAT_02002410,&DAT_04000004);
  sub_080FE110(param_1 + 0x2058,&DAT_06014000,0x1000);
  sub_080FE110(param_1 + 0x6058,&DAT_03002cc0,0x80);
  DAT_03002ac0 = (short)*(undefined4 *)(param_1 + 0x6258);
  return in_lr;
}

