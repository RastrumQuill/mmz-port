// sub_080B9618 at 0x080B9618 (thumb)

undefined4 sub_080B9618(int param_1)

{
  undefined4 in_lr;
  
  if ((DAT_02030108 & 0x40) == 0) {
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836b2ec + (uint)*(byte *)(param_1 + 0x10) * 4));
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

