// sub_080D5BBC at 0x080D5BBC (thumb)

undefined4 sub_080D5BBC(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (param_2 - 1 < 0x51) {
    if ((((int)(uint)*(byte *)(param_1 + 0x228 + (param_2 >> 3)) >> (param_2 & 7) & 1U) == 0) ||
       (((int)(uint)*(byte *)(param_1 + 0x233 + (param_2 >> 3)) >> (param_2 & 7) & 1U) != 0)) {
      uVar1 = (uint)*(ushort *)(&DAT_0834a1da + param_2 * 0xc);
    }
    else {
      uVar1 = 0x11f;
    }
    sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[uVar1],0x11,10);
  }
  return in_lr;
}

