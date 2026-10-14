// sub_080B67D4 at 0x080B67D4 (thumb)

undefined4 sub_080B67D4(int param_1)

{
  undefined4 in_lr;
  
  sub_080126A0();
  *(undefined *)(param_1 + 0x25) = 0x19;
  sub_08012CA4(param_1,0xd);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined *)(param_1 + 0x13) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  sub_080B681C(param_1);
  return in_lr;
}

