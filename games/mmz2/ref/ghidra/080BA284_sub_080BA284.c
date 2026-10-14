// sub_080BA284 at 0x080BA284 (thumb)

undefined4 sub_080BA284(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  uVar1 = DAT_0202e188 * 0x343fd + 0x269ec3;
  local_1c = ((uVar1 * 2 >> 0x11 & 7) - 3) * 0x100 + *(int *)(param_1 + 0x54);
  uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar1 & 0x7fffffff;
  local_18 = ((uVar1 * 2 >> 0x11 & 7) - 3) * 0x100 + *(int *)(param_1 + 0x58) + -0x600;
  sub_080AC60C(1,&local_1c);
  return in_lr;
}

