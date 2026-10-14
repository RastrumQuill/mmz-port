// sub_080BA678 at 0x080BA678 (thumb)

undefined4 sub_080BA678(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  sub_080175BC();
  *(undefined4 *)(param_1 + 0x7c) = 0x100;
  *(undefined2 *)(param_1 + 0x50) = 0x100;
  *(short *)(param_1 + 0x52) = (short)*(undefined4 *)(param_1 + 0x7c);
  uVar1 = DAT_0202f608 * 0x343fd + 0x269ec3;
  DAT_0202f608 = uVar1 & 0x7fffffff;
  *(char *)(param_1 + 0x24) = (char)(uVar1 * 2 >> 0x11);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 2;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  return in_lr;
}

