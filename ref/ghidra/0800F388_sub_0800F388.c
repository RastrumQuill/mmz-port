// sub_0800F388 at 0x0800F388 (thumb)

undefined4 sub_0800F388(int param_1)

{
  undefined4 in_lr;
  undefined4 local_14;
  undefined4 local_10;
  
  local_14 = 0;
  FUN_080c88ec(&local_14,param_1,0x1000010);
  local_10 = 0;
  FUN_080c88f0(&local_10,param_1 + 0x40,&DAT_05000003);
  return in_lr;
}

