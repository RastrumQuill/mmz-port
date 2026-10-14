// sub_080E2338 at 0x080E2338 (thumb)

undefined4 sub_080E2338(int param_1)

{
  undefined4 in_lr;
  
  sub_080BF7B4(param_1 + 0x54,0);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e24c)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

