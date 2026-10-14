// sub_080090F0 at 0x080090F0 (thumb)

int sub_080090F0(int param_1,int param_2)

{
  param_2 = param_2 - (param_1 >> 1);
  if (param_2 < 1) {
    param_2 = 0;
  }
  else {
    param_2 = -param_2;
  }
  return param_2;
}

