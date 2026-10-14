// sub_080BE3A0 at 0x080BE3A0 (thumb)

undefined4 sub_080BE3A0(int param_1)

{
  undefined4 in_lr;
  
  sub_080033CC(param_1 + 0x14);
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082cadc8 + (uint)*(byte *)(param_1 + 5) * 4));
  sub_0800338C(param_1 + 0x14);
  return in_lr;
}

