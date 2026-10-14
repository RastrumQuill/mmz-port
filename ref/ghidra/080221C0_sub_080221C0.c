// sub_080221C0 at 0x080221C0 (thumb)

undefined4 sub_080221C0(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = sub_080C8A98(param_1,*(undefined4 *)(&DAT_082a98d0 + (uint)*(byte *)(param_1 + 0x11) * 4))
  ;
  *(byte *)(param_1 + 0x11) = bVar1;
  if (*(char *)(param_1 + 0xbe) == '\x02') {
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082a9c0c + (uint)bVar1 * 4));
  }
  else {
    sub_0802224C(param_1);
  }
  return in_lr;
}

