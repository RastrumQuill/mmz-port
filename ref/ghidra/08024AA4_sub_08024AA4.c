// sub_08024AA4 at 0x08024AA4 (thumb)

undefined4 sub_08024AA4(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xbf) != '\0') {
    bVar1 = sub_080C8A98(param_1,*(undefined4 *)(&DAT_082a9910 + uVar2 * 4));
    uVar2 = (uint)bVar1;
    *(byte *)(param_1 + 0x11) = bVar1;
  }
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082a9ed8 + uVar2 * 4));
  return in_lr;
}

