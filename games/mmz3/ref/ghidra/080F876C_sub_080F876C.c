// sub_080F876C at 0x080F876C (thumb)

undefined4 sub_080F876C(int param_1)

{
  undefined4 in_lr;
  undefined4 local_14;
  undefined4 local_10;
  
  local_14 = 0;
  DAT_0203df90 = param_1;
  sub_080FE110(&local_14,param_1,0x1000008);
  local_10 = 0;
  FUN_080fe114(&local_10,param_1 + 0x20,&DAT_05000004);
  sub_080F8858();
  return in_lr;
}

