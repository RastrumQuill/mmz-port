// sub_0802DE88 at 0x0802DE88 (thumb)

undefined4 sub_0802DE88(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x13b) == '\0') {
    *(undefined *)(param_1 + 0x126) = 0;
    sub_08032544(param_1,0x1e00,0);
  }
  else {
    *(undefined *)(param_1 + 0xed) = 2;
    sub_0802DEC4(param_1);
  }
  return in_lr;
}

