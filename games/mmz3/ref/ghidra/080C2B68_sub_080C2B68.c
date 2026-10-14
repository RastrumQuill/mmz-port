// sub_080C2B68 at 0x080C2B68 (thumb)

undefined4 sub_080C2B68(int param_1)

{
  undefined4 in_lr;
  
  if ((DAT_02030108 & 0x40) == 0) {
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836bbec + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8);
    sub_080C2BB4(param_1);
  }
  return in_lr;
}

