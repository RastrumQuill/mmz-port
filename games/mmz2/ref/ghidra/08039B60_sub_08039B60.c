// sub_08039B60 at 0x08039B60 (thumb)

undefined4 sub_08039B60(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    sub_08039B7C(param_1);
  }
  else {
    sub_08039CC8(param_1);
  }
  return in_lr;
}

