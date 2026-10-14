// sub_080B45E0 at 0x080B45E0 (thumb)

undefined4 sub_080B45E0(int param_1)

{
  undefined4 in_lr;
  
  sub_0801749C();
  sub_08017700(param_1,0x1a05);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 4);
  sub_080B4620(param_1);
  return in_lr;
}

