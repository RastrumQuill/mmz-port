// sub_080093F4 at 0x080093F4 (thumb)

uint sub_080093F4(int param_1,uint param_2)

{
  if ((param_1 < 0x800) ||
     ((param_1 < 0xc00 &&
      ((int)(param_2 + (param_1 + -0x800) * -4) < 0 == SBORROW4(param_2,(param_1 + -0x800) * 4)))))
  {
    param_2 = 0;
  }
  else {
    param_2 = ~param_2;
  }
  return param_2;
}

