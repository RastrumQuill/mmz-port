// sub_080091E0 at 0x080091E0 (thumb)

uint sub_080091E0(int param_1,uint param_2)

{
  if ((int)param_2 < 0x1000 - (param_1 >> 1)) {
    param_2 = ~param_2;
  }
  else {
    param_2 = 0;
  }
  return param_2;
}

