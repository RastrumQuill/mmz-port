// sub_080ADFCC at 0x080ADFCC (thumb)

undefined4 sub_080ADFCC(int param_1)

{
  undefined4 in_lr;
  
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08369150 + (uint)*(byte *)(param_1 + 0xd) * 4));
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836916c + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

