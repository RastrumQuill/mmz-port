// sub_08009170 at 0x08009170 (thumb)

uint sub_08009170(int param_1,uint param_2)

{
  if ((int)param_2 < param_1 >> 1) {
    param_2 = ~param_2;
  }
  else {
    param_2 = 0;
  }
  return param_2;
}

