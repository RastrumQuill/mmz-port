// sub_08039F88 at 0x08039F88 (thumb)

undefined4 sub_08039F88(int param_1)

{
  undefined4 in_lr;
  
  if (((*(uint *)(param_1 + 0x14) & 4) != 0) && (DAT_02030182 != -1)) {
    DAT_02030182 = DAT_02030182 + 1;
  }
  return in_lr;
}

