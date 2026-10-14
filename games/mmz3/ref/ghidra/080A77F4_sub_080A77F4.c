// sub_080A77F4 at 0x080A77F4 (thumb)

undefined4 sub_080A77F4(int param_1)

{
  undefined4 in_lr;
  
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08368614 + (uint)*(byte *)(param_1 + 0xd) * 4));
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08368620 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

