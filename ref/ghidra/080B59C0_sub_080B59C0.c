// sub_080B59C0 at 0x080B59C0 (thumb)

undefined4 sub_080B59C0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (((*(ushort *)(param_1 + 0x1a) & 4) != 0) &&
     (iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 0x40), *(char *)(iVar2 + 8) == '\0')) {
    iVar1 = *(int *)(param_1 + 0x40);
    *(undefined4 *)(iVar1 + 0xc) = 2;
    *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)((&DAT_082b6e70)[*(byte *)(iVar1 + 9)] + 8);
    sub_080B4EC8(iVar2,*(undefined *)(iVar1 + 0x10));
    sub_080BC818(0x11a,0x5a);
  }
  return in_lr;
}

