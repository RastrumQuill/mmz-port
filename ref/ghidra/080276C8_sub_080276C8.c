// sub_080276C8 at 0x080276C8 (thumb)

undefined4 sub_080276C8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x12) == '\0') {
    sub_080276E4(param_1);
  }
  else {
    sub_080277B8(param_1);
  }
  return in_lr;
}

