// sub_080BB260 at 0x080BB260 (thumb)

undefined4 sub_080BB260(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  local_18 = *(int *)(param_1 + 0x54);
  local_14 = *(int *)(param_1 + 0x58) + -0x1400;
  uVar1 = ~*(uint *)(param_1 + 0x5c) >> 0x1f | (*(byte *)(param_1 + 10) >> 4 & 1) << 4;
  sub_080B0ACC(&local_18,&DAT_0834724c,0,uVar1);
  sub_080B0ACC(&local_18,&DAT_08347268,0,uVar1);
  sub_080B0ACC(&local_18,&DAT_08347284,0,uVar1);
  uVar1 = DAT_0202e188 * 0x343fd + 0x269ec3;
  local_18 = local_18 + ((uVar1 * 2 >> 0x11 & 7) - 3) * 0x100;
  uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar1 & 0x7fffffff;
  local_14 = local_14 + ((uVar1 * 2 >> 0x11 & 7) - 3) * 0x100;
  sub_080AC60C(1,&local_18);
  return in_lr;
}

