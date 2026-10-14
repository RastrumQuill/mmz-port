// sub_080E16A0 at 0x080E16A0 (thumb)

undefined4 sub_080E16A0(int param_1)

{
  undefined4 in_lr;
  undefined4 local_14;
  undefined4 local_10;
  
  local_14 = 0;
  DAT_0203063c = param_1;
  sub_080FE110(&local_14,param_1,0x1000010);
  local_10 = 0;
  FUN_080fe114(&local_10,param_1 + 0x40,&DAT_05000003);
  return in_lr;
}

