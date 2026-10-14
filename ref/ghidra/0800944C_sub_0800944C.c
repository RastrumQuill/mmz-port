// sub_0800944C at 0x0800944C (thumb)

uint sub_0800944C(int param_1,uint param_2)

{
  if ((param_1 < 0x400) && ((int)(param_2 + param_1 * -4) < 0 == SBORROW4(param_2,param_1 * 4))) {
    param_2 = 0;
  }
  else {
    param_2 = ~param_2;
  }
  return param_2;
}

