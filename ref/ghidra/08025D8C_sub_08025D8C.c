// sub_08025D8C at 0x08025D8C (thumb)

undefined4 sub_08025D8C(int param_1)

{
  undefined4 in_lr;
  
  if (param_1 == *(int *)(*(int *)(param_1 + 0x20) + 0xd4)) {
    sub_08025DAC(param_1);
  }
  else {
    sub_08025DF8(param_1);
  }
  return in_lr;
}

