// sub_0804B174 at 0x0804B174 (thumb)

undefined4 sub_0804B174(int param_1)

{
  undefined4 in_lr;
  
  if (((*(uint *)(param_1 + 0x14) & 4) != 0) && (DAT_0202e8fe != -1)) {
    DAT_0202e8fe = DAT_0202e8fe + 1;
  }
  return in_lr;
}

