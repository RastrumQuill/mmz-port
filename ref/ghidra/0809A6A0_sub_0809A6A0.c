// sub_0809A6A0 at 0x0809A6A0 (thumb)

undefined4 sub_0809A6A0(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  sub_0809A120();
  return in_lr;
}

