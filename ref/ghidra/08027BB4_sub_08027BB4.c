// sub_08027BB4 at 0x08027BB4 (thumb)

undefined4 sub_08027BB4(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(*(int *)(param_1 + 0x20) + 0x11f);
  uVar2 = sub_080C8CB0(*(byte *)(param_1 + 0x10) - 0x1a,3);
  if (bVar1 == uVar2) {
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082ac7b8 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082aa198)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

