// sub_0801E8D8 at 0x0801E8D8 (thumb)

undefined4 sub_0801E8D8(int param_1)

{
  undefined4 in_lr;
  undefined4 local_14;
  undefined4 local_10;
  
  local_14 = 0;
  sub_081284E4(&local_14,param_1,0x1000008);
  local_10 = 0;
  sub_081284E8(&local_10,param_1 + 0x20,&DAT_05000001);
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 0x30;
  return in_lr;
}

