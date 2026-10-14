// sub_08015DAC at 0x08015DAC (thumb)

undefined4 sub_08015DAC(undefined4 param_1,undefined4 param_2,short param_3)

{
  undefined4 in_lr;
  
  sub_0800539C(param_1,0,param_2,0x230,(int)param_3);
  DAT_0200202c = param_2;
  DAT_02022e8c = param_1;
  FUN_080c88ec(&DAT_082a7fb4,&DAT_030019a0,8);
  FUN_080c88ec(&DAT_082a7fd4,&DAT_03001b20,8);
  return in_lr;
}

