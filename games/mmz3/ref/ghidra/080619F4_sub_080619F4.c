// sub_080619F4 at 0x080619F4 (thumb)

undefined4 sub_080619F4(int param_1)

{
  undefined4 in_lr;
  
  sub_080041E4(0xcb);
  sub_080041E4(0xcc);
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08361e74 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

