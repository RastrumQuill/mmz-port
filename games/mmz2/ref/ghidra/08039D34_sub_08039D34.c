// sub_08039D34 at 0x08039D34 (thumb)

undefined4 sub_08039D34(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    sub_08039D50(param_1);
  }
  else {
    sub_08039DB4(param_1);
  }
  return in_lr;
}

