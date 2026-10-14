// sub_08019810 at 0x08019810 (thumb)

undefined4 sub_08019810(int param_1)

{
  undefined4 in_lr;
  undefined4 local_14;
  undefined4 local_10;
  
  local_14 = 0;
  sub_080FE110(&local_14,param_1,0x1000010);
  local_10 = 0;
  FUN_080fe114(&local_10,param_1 + 0x40,&DAT_05000005);
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) | 0xc;
  return in_lr;
}

