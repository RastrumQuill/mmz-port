// sub_080091B8 at 0x080091B8 (thumb)

uint sub_080091B8(int param_1,uint param_2)

{
  if ((int)param_2 < (param_1 >> 2) + 0x800) {
    param_2 = ~param_2;
  }
  else {
    param_2 = 0;
  }
  return param_2;
}

