// sub_080AF7C0 at 0x080AF7C0 (thumb)

undefined4 sub_080AF7C0(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = DAT_0202e188 * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar1 & 0x7fffffff;
  uVar1 = uVar1 * 2 >> 0x11;
  sub_08012580(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,*(byte *)(param_1 + 0x11) + 0xf);
  sub_080128D4(param_1);
  *(uint *)(param_1 + 0x5c) = (uVar1 & 0xff) + 0x180;
  *(uint *)(param_1 + 0x60) = -0x200 - (uVar1 & 0x1ff);
  *(undefined *)(param_1 + 0x12) = 0x20;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  sub_080AF3EC(param_1);
  return in_lr;
}

