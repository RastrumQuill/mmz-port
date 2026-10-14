// sub_080CF0D4 at 0x080CF0D4 (thumb)

undefined4 sub_080CF0D4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xbc) == '\0') {
    sub_08128884(param_1,*(undefined4 *)(&DAT_088637c4 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8);
    sub_080CF3B4(param_1);
  }
  return in_lr;
}

