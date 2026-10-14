// sub_080BEF48 at 0x080BEF48 (thumb)

undefined4 sub_080BEF48(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  sub_08012580(param_1);
  sub_080127E4(param_1,0x19);
  sub_08012CA4(param_1,0xf);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_080BEF8C(param_1);
  return in_lr;
}

