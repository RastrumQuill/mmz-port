// sub_08026A64 at 0x08026A64 (thumb)

undefined4 sub_08026A64(int param_1)

{
  undefined4 in_lr;
  
  if ((*(uint *)(*(int *)(param_1 + 0x20) + 0xc) & 0xffff00) == 0x20000) {
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082ab2f4 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082aa198)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

