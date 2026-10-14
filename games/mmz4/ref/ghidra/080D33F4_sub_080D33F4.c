// sub_080D33F4 at 0x080D33F4 (thumb)

undefined4 sub_080D33F4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    (&DAT_0202ed54)[*(byte *)(param_1 + 0x11)] = 0;
  }
  sub_080D083C(param_1);
  return in_lr;
}

