// sub_08117DCC at 0x08117DCC (thumb)

undefined4 sub_08117DCC(int param_1)

{
  undefined4 in_lr;
  
  if (*(int *)(&DAT_08885dd8 + (uint)*(byte *)(param_1 + 9) * 4) != 0) {
    sub_08128884(param_1);
  }
  return in_lr;
}

