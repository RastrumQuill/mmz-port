// sub_080BEAE0 at 0x080BEAE0 (thumb)

undefined4 sub_080BEAE0(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x54);
  uVar1 = DAT_0202e188 * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar1 & 0x7fffffff;
  *(char *)(param_1 + 0x12) = (char)((uVar1 * 2 >> 0x11 & 1) << 5);
  return in_lr;
}

