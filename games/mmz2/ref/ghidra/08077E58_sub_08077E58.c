// sub_08077E58 at 0x08077E58 (thumb)

undefined4 sub_08077E58(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  uint *local_14;
  
  local_1c = *(int *)(param_1 + 0x54);
  local_18 = *(int *)(param_1 + 0x58) + -0xc00;
  uVar1 = (uint)*(byte *)(param_1 + 0x13) | (*(byte *)(param_1 + 10) >> 4 & 1) << 4;
  sub_080B0ACC(&local_1c,&DAT_0833fd40,0,uVar1);
  sub_080B0ACC(&local_1c,&DAT_0833fd5c,0,uVar1);
  sub_080B0ACC(&local_1c,&DAT_0833fd78,0,uVar1);
  uVar1 = DAT_0202e188 * 0x343fd + 0x269ec3;
  local_1c = local_1c + ((uVar1 * 2 >> 0x11 & 0xf) - 8) * 0x100;
  uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar1 & 0x7fffffff;
  local_18 = local_18 + ((uVar1 * 2 >> 0x11 & 0xf) - 8) * 0x100;
  local_14 = &DAT_0202e188;
  sub_080AC60C(1,&local_1c);
  uVar1 = *local_14 * 0x343fd + 0x269ec3;
  local_1c = local_1c + ((uVar1 * 2 >> 0x11 & 0xf) - 8) * 0x100;
  uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  *local_14 = uVar1 & 0x7fffffff;
  local_18 = local_18 + ((uVar1 * 2 >> 0x11 & 0xf) - 8) * 0x100;
  sub_080AC60C(2,&local_1c);
  return in_lr;
}

