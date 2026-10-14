// sub_081283BC at 0x081283BC (thumb)

undefined4 sub_081283BC(undefined4 param_1,int param_2)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = **(byte **)(param_2 + 0x40);
  *(byte **)(param_2 + 0x40) = *(byte **)(param_2 + 0x40) + 1;
  sub_08128888(param_1,param_2,*(undefined4 *)(&DAT_08136764 + (uint)bVar1 * 4));
  return in_lr;
}

