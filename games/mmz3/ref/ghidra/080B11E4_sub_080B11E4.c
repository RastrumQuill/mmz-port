// sub_080B11E4 at 0x080B11E4 (thumb)

undefined4 sub_080B11E4(int param_1)

{
  undefined4 in_lr;
  
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08369f5c + (uint)*(byte *)(param_1 + 0xd) * 4));
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08369f60 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

