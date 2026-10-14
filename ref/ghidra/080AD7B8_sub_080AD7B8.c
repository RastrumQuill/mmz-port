// sub_080AD7B8 at 0x080AD7B8 (thumb)

undefined4 sub_080AD7B8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080AD920(param_1);
  }
  else {
    sub_080AD978(param_1);
  }
  return in_lr;
}

