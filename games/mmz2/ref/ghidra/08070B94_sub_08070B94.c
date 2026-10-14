// sub_08070B94 at 0x08070B94 (thumb)

undefined4 sub_08070B94(int param_1)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  pbVar1 = (byte *)(param_1 + 0xc0);
  if (*pbVar1 !=
      (*(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54) ^ *(byte *)(param_1 + 10) >> 4 & 1))
  {
    *pbVar1 = *pbVar1 ^ 1;
    sub_08006E08(param_1 + 0x74,
                 &DAT_0833eb80 +
                 (uint)(byte)(&DAT_0833ece4)
                             [(uint)*pbVar1 * 2 -
                              ((int)(-*(uint *)(param_1 + 0xb8) | *(uint *)(param_1 + 0xb8)) >> 0x1f
                              )] * 0x18);
  }
  return in_lr;
}

