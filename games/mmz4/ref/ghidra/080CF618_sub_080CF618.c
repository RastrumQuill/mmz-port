// sub_080CF618 at 0x080CF618 (thumb)

undefined4 sub_080CF618(int param_1)

{
  undefined4 in_lr;
  
  sub_080E7460(param_1 + 0x54,0x100,*(byte *)(param_1 + 10) >> 4 & 1);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

