// sub_080268D8 at 0x080268D8 (thumb)

undefined4 sub_080268D8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x20) + 0x11f) == *(char *)(param_1 + 0x10)) {
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082ab2dc + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082aa198)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

