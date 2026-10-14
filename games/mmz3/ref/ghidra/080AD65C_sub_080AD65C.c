// sub_080AD65C at 0x080AD65C (thumb)

undefined4 sub_080AD65C(int param_1)

{
  undefined4 in_lr;
  
  if ((DAT_02030108 & 0x40) == 0) {
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_083690ec + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
    sub_080AD6C8(param_1);
  }
  return in_lr;
}

