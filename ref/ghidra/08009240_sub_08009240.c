// sub_08009240 at 0x08009240 (thumb)

uint sub_08009240(int param_1,uint param_2)

{
  if ((int)param_2 < 0x800 - (param_1 >> 2)) {
    param_2 = ~param_2;
  }
  else {
    param_2 = 0;
  }
  return param_2;
}

