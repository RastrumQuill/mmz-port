// sub_080B3988 at 0x080B3988 (thumb)

undefined4 sub_080B3988(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  local_18 = *(int *)(param_1 + 0x54);
  local_14 = *(int *)(param_1 + 0x58) + -0x1800;
  uVar1 = (uint)*(byte *)(param_1 + 0x11) | (*(byte *)(param_1 + 10) >> 4 & 1) << 4;
  sub_080B0ACC(&local_18,&DAT_08346b10,0,uVar1);
  sub_080B0ACC(&local_18,&DAT_08346b2c,0,uVar1);
  sub_080B0ACC(&local_18,&DAT_08346b48,0,uVar1);
  uVar1 = DAT_0202e188 * 0x343fd + 0x269ec3;
  local_18 = local_18 + ((uVar1 * 2 >> 0x11 & 0x1f) - 0xf) * 0x100;
  uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar1 & 0x7fffffff;
  local_14 = local_14 + ((uVar1 * 2 >> 0x11 & 0x1f) - 0xf) * 0x100;
  sub_080AC60C(1,&local_18);
  return in_lr;
}

