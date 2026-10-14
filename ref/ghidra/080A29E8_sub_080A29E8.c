// sub_080A29E8 at 0x080A29E8 (thumb)

undefined4 sub_080A29E8(int param_1)

{
  undefined4 in_lr;
  
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b5b1c + (uint)*(byte *)(param_1 + 0xd) * 4));
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b5b34 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

