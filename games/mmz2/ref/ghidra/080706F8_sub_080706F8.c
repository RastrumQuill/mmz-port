// sub_080706F8 at 0x080706F8 (thumb)

undefined4 sub_080706F8(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  int local_18;
  
  uVar1 = *(byte *)(param_1 + 10) >> 4 & 1;
  local_20 = *(int *)(param_1 + 0x54);
  local_1c = *(int *)(param_1 + 0x58) + -0x1800;
  uVar1 = uVar1 << 4 | uVar1;
  sub_080B0ACC(&local_20,&DAT_0833ec64,0,uVar1);
  sub_080B0ACC(&local_20,&DAT_0833ec80,0,uVar1);
  sub_080032EC(0x2a);
  uVar1 = DAT_0202e188 * 0x343fd + 0x269ec3;
  local_20 = *(int *)(param_1 + 0x54) + ((uVar1 * 2 >> 0x11 & 0x1f) - 0xf) * 0x100;
  uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar1 & 0x7fffffff;
  local_1c = *(int *)(param_1 + 0x58) + ((uVar1 * 2 >> 0x11 & 0x1f) - 0x27) * 0x100;
  local_18 = 0x343fd;
  sub_080AC60C(1,&local_20);
  uVar1 = local_18 * DAT_0202e188 + 0x269ec3;
  local_20 = *(int *)(param_1 + 0x54) + ((uVar1 * 2 >> 0x11 & 0x1f) - 0xf) * 0x100;
  uVar1 = local_18 * (uVar1 & 0x7fffffff) + 0x269ec3;
  DAT_0202e188 = uVar1 & 0x7fffffff;
  local_1c = *(int *)(param_1 + 0x58) + ((uVar1 * 2 >> 0x11 & 0x1f) - 0x27) * 0x100;
  sub_080AC60C(2,&local_20);
  return in_lr;
}

