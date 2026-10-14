// sub_08021460 at 0x08021460 (thumb)

undefined4 sub_08021460(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = sub_080C8A98(param_1,*(undefined4 *)(&DAT_082a98c0 + (uint)*(byte *)(param_1 + 0x11) * 4))
  ;
  *(byte *)(param_1 + 0x11) = bVar1;
  if (*(char *)(param_1 + 0xbe) == '\x02') {
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082a9b28 + (uint)bVar1 * 4));
  }
  else {
    sub_080214EC(param_1);
  }
  return in_lr;
}

