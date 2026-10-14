// sub_080B5324 at 0x080B5324 (thumb)

undefined4 sub_080B5324(int param_1)

{
  undefined4 in_lr;
  
  sub_08012580();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x3200);
  sub_080128D4(param_1);
  *(undefined *)(param_1 + 0x12) = 6;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  sub_080B52AC(param_1);
  return in_lr;
}

