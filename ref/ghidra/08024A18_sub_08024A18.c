// sub_08024A18 at 0x08024A18 (thumb)

undefined4 sub_08024A18(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = sub_080C8A98(param_1,*(undefined4 *)(&DAT_082a9910 + (uint)*(byte *)(param_1 + 0x11) * 4))
  ;
  *(byte *)(param_1 + 0x11) = bVar1;
  if (*(char *)(param_1 + 0xbe) == '\x02') {
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082a9eac + (uint)bVar1 * 4));
  }
  else {
    sub_08024AA4(param_1);
  }
  return in_lr;
}

