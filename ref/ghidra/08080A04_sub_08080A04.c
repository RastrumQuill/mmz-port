// sub_08080A04 at 0x08080A04 (thumb)

undefined4 sub_08080A04(int param_1)

{
  undefined4 in_lr;
  
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b2808 + (uint)*(byte *)(param_1 + 0x10) * 4));
  return in_lr;
}

