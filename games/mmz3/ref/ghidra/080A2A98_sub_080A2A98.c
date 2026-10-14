// sub_080A2A98 at 0x080A2A98 (thumb)

undefined4 sub_080A2A98(int param_1)

{
  undefined4 in_lr;
  
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08367bfc + (uint)*(byte *)(param_1 + 0xd) * 4));
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08367c10 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

