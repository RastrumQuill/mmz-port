// sub_08016F78 at 0x08016F78 (thumb)

undefined4 sub_08016F78(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xf) = 0;
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082a80b4 + (uint)*(byte *)(param_1 + 0xbd) * 4));
  return in_lr;
}

