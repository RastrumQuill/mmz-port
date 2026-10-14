// sub_080E79C4 at 0x080E79C4 (thumb)

undefined4 sub_080E79C4(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e764)[*(byte *)(param_1 + 9)] + 4);
  DAT_0202fb2e = 0x35f;
  DAT_0202f92e = 0xb;
  sub_0801749C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_08017700(param_1,0x8f00);
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined4 *)(param_1 + 0x54) = 0x19400;
  *(undefined4 *)(param_1 + 0x58) = 0x1300;
  sub_080E7A4C(param_1);
  return in_lr;
}

