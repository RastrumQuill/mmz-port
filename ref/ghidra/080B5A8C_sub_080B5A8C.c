// sub_080B5A8C at 0x080B5A8C (thumb)

undefined4 sub_080B5A8C(int param_1)

{
  undefined4 in_lr;
  
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b81e0 + (uint)*(byte *)(param_1 + 0xd) * 4));
  *(char *)(param_1 + 0xbc) = *(char *)(param_1 + 0xbc) + '\x02';
  return in_lr;
}

