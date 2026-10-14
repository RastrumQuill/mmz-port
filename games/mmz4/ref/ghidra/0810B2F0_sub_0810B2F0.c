// sub_0810B2F0 at 0x0810B2F0 (thumb)

undefined4 sub_0810B2F0(int param_1)

{
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CEEC(param_1);
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined4 *)(param_1 + 0x54) = 0x19800;
  *(undefined4 *)(param_1 + 0x58) = 0x2000;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088695c0)[*(byte *)(param_1 + 9)] + 4);
  sub_0810B12C(param_1);
  return in_lr;
}

