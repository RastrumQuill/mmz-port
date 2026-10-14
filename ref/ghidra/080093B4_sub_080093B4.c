// sub_080093B4 at 0x080093B4 (thumb)

uint sub_080093B4(int param_1,uint param_2)

{
  if ((param_1 < 0x800) && ((int)(param_2 + param_1 * -2) < 0 == SBORROW4(param_2,param_1 * 2))) {
    param_2 = 0;
  }
  else {
    param_2 = ~param_2;
  }
  return param_2;
}

