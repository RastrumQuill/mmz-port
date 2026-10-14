// sub_080C2174 at 0x080C2174 (thumb)

undefined4 sub_080C2174(int param_1)

{
  undefined4 in_lr;
  
  sub_080062E4();
  FUN_080c88ec(&DAT_02004f70,param_1 + 0x1af4,0);
  FUN_080c88f0(&DAT_02004f70,param_1 + 0x1af4,&DAT_04000002);
  DAT_02004f70 = 0;
  FUN_080c88ec(&DAT_02004f80,param_1 + 0x1afc,0);
  FUN_080c88f0(&DAT_02004f80,param_1 + 0x1afc,&DAT_04000004);
  DAT_02004f80 = 0;
  DAT_02004f8e = 0xff;
  FUN_080c88ec(&DAT_06014000,param_1 + 0x1c90,0x1000);
  FUN_080c88ec(&DAT_030019a0,param_1 + 0x5c90,0x80);
  FUN_080c88ec((DAT_02004f36 & 0x1f00) * 8 + 0x6000000,param_1 + 0x5e90,0x400);
  return in_lr;
}

