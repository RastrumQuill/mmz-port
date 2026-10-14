// sub_08009180 at 0x08009180 (thumb)

uint sub_08009180(int param_1,uint param_2)

{
  if ((int)param_2 < (param_1 >> 1) + 0x800) {
    param_2 = ~param_2;
  }
  else {
    param_2 = 0;
  }
  return param_2;
}

