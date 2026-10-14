// sub_080BFC2C at 0x080BFC2C (thumb)

void sub_080BFC2C(int param_1)

{
  uint uVar1;
  
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 4;
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x54);
  uVar1 = DAT_0202f608 * 0x343fd + 0x269ec3;
  DAT_0202f608 = uVar1 & 0x7fffffff;
  *(char *)(param_1 + 0x74) = (char)((uVar1 * 2 >> 0x11 & 1) << 5);
  return;
}

