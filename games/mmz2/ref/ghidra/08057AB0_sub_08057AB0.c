// sub_08057AB0 at 0x08057AB0 (thumb)

undefined4 sub_08057AB0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  iVar1 = *(short *)(param_1 + 0xa4) * 6;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0x3f;
  }
  uVar3 = iVar1 >> 6 & 0xff;
  if (3 < uVar3) {
    uVar3 = 3;
  }
  uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar2 & 0x7fffffff;
  sub_080032EC((&DAT_0833caf6)[(uVar2 * 2 >> 0x11 & 3) + uVar3 * 4]);
  return in_lr;
}

