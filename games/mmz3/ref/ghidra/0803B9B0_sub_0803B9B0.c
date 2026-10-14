// sub_0803B9B0 at 0x0803B9B0 (thumb)

undefined4 sub_0803B9B0(int param_1)

{
  undefined4 in_lr;
  
  if (((*(uint *)(param_1 + 0x14) & 4) != 0) && (DAT_0203017c != -1)) {
    DAT_0203017c = DAT_0203017c + 1;
  }
  return in_lr;
}

