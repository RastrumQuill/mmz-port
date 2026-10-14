// sub_080BDDF4 at 0x080BDDF4 (thumb)

undefined4 sub_080BDDF4(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((DAT_0202e8b9 & 4) == 0) {
    *(undefined4 *)(param_1 + 0xc) = 4;
    uVar1 = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 0x10);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar1 = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 0xc);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  return in_lr;
}

