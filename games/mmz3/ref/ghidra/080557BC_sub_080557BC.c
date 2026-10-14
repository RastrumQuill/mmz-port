// sub_080557BC at 0x080557BC (thumb)

undefined4 sub_080557BC(int param_1)

{
  undefined4 in_lr;
  
  sub_08057780();
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_083603cc + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

