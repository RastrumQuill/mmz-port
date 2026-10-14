// sub_080C87C4 at 0x080C87C4 (thumb)

undefined4 sub_080C87C4(undefined4 param_1,int param_2)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = **(byte **)(param_2 + 0x40);
  *(byte **)(param_2 + 0x40) = *(byte **)(param_2 + 0x40) + 1;
  sub_080C8A9C(param_1,param_2,*(undefined4 *)(&DAT_080d2088 + (uint)bVar1 * 4));
  return in_lr;
}

