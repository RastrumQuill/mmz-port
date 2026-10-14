// sub_080091CC at 0x080091CC (thumb)

uint sub_080091CC(int param_1,uint param_2)

{
  if ((int)param_2 < (param_1 >> 2) + 0xc00) {
    param_2 = ~param_2;
  }
  else {
    param_2 = 0;
  }
  return param_2;
}

