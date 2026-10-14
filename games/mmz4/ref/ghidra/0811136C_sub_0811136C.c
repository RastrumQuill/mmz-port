// sub_0811136C at 0x0811136C (thumb)

undefined4 sub_0811136C(int param_1)

{
  undefined4 in_lr;
  undefined4 local_14 [2];
  
  param_1 = param_1 + 0x14;
  sub_08003470(param_1);
  DAT_0202dc04 = 0;
  local_14[0] = 0;
  sub_081284E4(local_14,&DAT_0202dc10,0x1000008);
  sub_0801C79C(DAT_0202edb4);
  sub_0801C924(DAT_0202edb4,param_1);
  sub_08003420(param_1);
  return in_lr;
}

