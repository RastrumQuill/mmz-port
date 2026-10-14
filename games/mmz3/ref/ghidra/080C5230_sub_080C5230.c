// sub_080C5230 at 0x080C5230 (thumb)

undefined4 sub_080C5230(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8);
  sub_080C51E0();
  return in_lr;
}

