// sub_080BEFBC at 0x080BEFBC (thumb)

undefined4 sub_080BEFBC(int param_1)

{
  undefined4 in_lr;
  undefined4 local_20;
  undefined4 local_1c;
  
  DAT_02004f30 = DAT_02004f30 & 0xc0f8;
  sub_08003358(param_1 + 0x14);
  sub_08001F20(param_1 + 0x2c,param_1 + 0x38,0,0);
  *(undefined4 *)(param_1 + 0x38) = 0x7800;
  *(undefined4 *)(param_1 + 0x3c) = 0x5000;
  sub_08003370(param_1 + 0x14,param_1 + 0x2c);
  local_20 = 0;
  FUN_080c88ec(&local_20,&DAT_06010000,0x1001ff8);
  local_1c = 0;
  FUN_080c88f0(&local_1c,&DAT_06017fe0,&DAT_05000007);
  DAT_03001ba2 = 0;
  DAT_03001ba1 = 0;
  DAT_03001ba0 = 0;
  return in_lr;
}

