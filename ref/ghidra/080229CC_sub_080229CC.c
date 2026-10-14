// sub_080229CC at 0x080229CC (thumb)

undefined4 sub_080229CC(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = sub_080C8A98(param_1,*(undefined4 *)(&DAT_082a98e0 + (uint)*(byte *)(param_1 + 0x11) * 4))
  ;
  *(byte *)(param_1 + 0x11) = bVar1;
  if (*(char *)(param_1 + 0xbe) == '\x02') {
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082a9ca0 + (uint)bVar1 * 4));
  }
  else {
    sub_08022A58(param_1);
  }
  return in_lr;
}

