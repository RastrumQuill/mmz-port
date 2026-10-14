// sub_0805FA24 at 0x0805FA24 (thumb)

undefined4 sub_0805FA24(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xf) = 1;
  uVar1 = FUN_080fe2f8(*(int *)(param_1 + 0xe0) - *(int *)(param_1 + 0x54),0x2e);
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  *(undefined4 *)(param_1 + 0x60) = 0xfffffa40;
  sub_08060890(param_1);
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined *)(param_1 + 200) = 1;
  uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
  DAT_0202f608 = uVar2 & 0x7fffffff;
  *(byte *)(param_1 + 0xc9) = (byte)(uVar2 * 2 >> 0x11) & 1;
  sub_0805FA8C(param_1);
  return in_lr;
}

