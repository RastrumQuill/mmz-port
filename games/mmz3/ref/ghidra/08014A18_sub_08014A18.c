// sub_08014A18 at 0x08014A18 (thumb)

undefined4 sub_08014A18(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (DAT_0202f4a4 < 10) {
    uVar1 = (uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14;
    *(short *)(&DAT_020023cc + uVar1) = (short)((uint)DAT_0202f4d0 >> 8);
    *(short *)((int)&DAT_020023cc + uVar1 * 4 + 2) = (short)((uint)DAT_0202f4d4 >> 8);
  }
  else {
    sub_08009550(param_1);
  }
  return in_lr;
}

