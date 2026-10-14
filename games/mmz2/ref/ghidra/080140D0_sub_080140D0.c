// sub_080140D0 at 0x080140D0 (thumb)

undefined4 sub_080140D0(int param_1)

{
  undefined4 in_lr;
  undefined4 local_14;
  undefined4 local_10;
  
  local_14 = 0;
  sub_080EEF68(&local_14,param_1,0x1000008);
  local_10 = 0;
  sub_080EEF6C(&local_10,param_1 + 0x20,&DAT_05000006);
  return in_lr;
}

