// sub_080091A4 at 0x080091A4 (thumb)

uint sub_080091A4(int param_1,uint param_2)

{
  if ((int)param_2 < (param_1 >> 2) + 0x400) {
    param_2 = ~param_2;
  }
  else {
    param_2 = 0;
  }
  return param_2;
}

