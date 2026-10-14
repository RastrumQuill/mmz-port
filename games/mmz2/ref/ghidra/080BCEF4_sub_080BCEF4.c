// sub_080BCEF4 at 0x080BCEF4 (thumb)

undefined4 sub_080BCEF4(int param_1)

{
  undefined4 in_lr;
  
  sub_080128D4();
  if (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
    sub_080BCD00(param_1);
  }
  return in_lr;
}

