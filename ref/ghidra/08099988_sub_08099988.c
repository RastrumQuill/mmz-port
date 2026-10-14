// sub_08099988 at 0x08099988 (thumb)

undefined4 sub_08099988(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 1;
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x4c);
  uVar1 = DAT_02022890 * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar1 & 0x7fffffff;
  *(char *)(param_1 + 0x12) = (char)((uVar1 * 2 >> 0x11 & 1) << 5);
  return in_lr;
}

