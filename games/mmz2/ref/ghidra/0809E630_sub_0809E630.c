// sub_0809E630 at 0x0809E630 (thumb)

undefined4 sub_0809E630(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_0809E8AC(param_1);
  }
  else {
    sub_0809E9EC(param_1);
  }
  return in_lr;
}

