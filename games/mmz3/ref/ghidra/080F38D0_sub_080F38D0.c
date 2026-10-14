// sub_080F38D0 at 0x080F38D0 (thumb)

undefined4 sub_080F38D0(int param_1)

{
  undefined4 in_lr;
  
  if (*(int *)(&DAT_0838ba04 + (uint)*(byte *)(param_1 + 9) * 4) != 0) {
    sub_080FE2C0(param_1);
  }
  return in_lr;
}

