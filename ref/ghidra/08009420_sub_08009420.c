// sub_08009420 at 0x08009420 (thumb)

uint sub_08009420(int param_1,uint param_2)

{
  if ((param_1 < 0x400) ||
     ((param_1 < 0x800 &&
      ((int)(param_2 + (param_1 + -0x400) * -4) < 0 == SBORROW4(param_2,(param_1 + -0x400) * 4)))))
  {
    param_2 = 0;
  }
  else {
    param_2 = ~param_2;
  }
  return param_2;
}

