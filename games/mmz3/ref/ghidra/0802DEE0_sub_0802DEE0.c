// sub_0802DEE0 at 0x0802DEE0 (thumb)

undefined4 sub_0802DEE0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x13b) == '\0') {
    *(undefined *)(param_1 + 0x126) = 2;
    sub_08032544(param_1,0x1f00,0);
  }
  else {
    *(undefined *)(param_1 + 0xed) = 4;
    sub_0802DF20(param_1);
  }
  return in_lr;
}

