// sub_080214EC at 0x080214EC (thumb)

undefined4 sub_080214EC(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xbf) != '\0') {
    bVar1 = sub_080C8A98(param_1,*(undefined4 *)(&DAT_082a98c0 + uVar2 * 4));
    uVar2 = (uint)bVar1;
    *(byte *)(param_1 + 0x11) = bVar1;
  }
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082a9b54 + uVar2 * 4));
  return in_lr;
}

