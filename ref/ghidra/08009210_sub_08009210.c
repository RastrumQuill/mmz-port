// sub_08009210 at 0x08009210 (thumb)

uint sub_08009210(int param_1,uint param_2)

{
  if ((int)param_2 < 0x1000 - (param_1 >> 2)) {
    param_2 = ~param_2;
  }
  else {
    param_2 = 0;
  }
  return param_2;
}

