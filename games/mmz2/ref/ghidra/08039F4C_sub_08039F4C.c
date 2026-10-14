// sub_08039F4C at 0x08039F4C (thumb)

undefined8 sub_08039F4C(int param_1)

{
  undefined4 in_lr;
  
  if (((param_1 == 0) || (*(char *)(param_1 + 9) != '\x02')) || (*(char *)(param_1 + 0x11) != '\0'))
  {
    param_1 = 0;
  }
  return CONCAT44(in_lr,param_1);
}

