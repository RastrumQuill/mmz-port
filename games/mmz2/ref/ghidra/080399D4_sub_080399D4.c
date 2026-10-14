// sub_080399D4 at 0x080399D4 (thumb)

undefined4 sub_080399D4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    sub_080399F0(param_1);
  }
  else {
    sub_08039B08(param_1);
  }
  return in_lr;
}

