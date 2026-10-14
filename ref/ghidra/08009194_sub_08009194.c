// sub_08009194 at 0x08009194 (thumb)

uint sub_08009194(int param_1,uint param_2)

{
  if ((int)param_2 < param_1 >> 2) {
    param_2 = ~param_2;
  }
  else {
    param_2 = 0;
  }
  return param_2;
}

