// sub_0802ACF8 at 0x0802ACF8 (thumb)

undefined4 sub_0802ACF8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x73) == '\x03') {
    sub_08035014(param_1);
    sub_080353F0(param_1);
    *(byte *)(param_1 + 0x181) = *(byte *)(param_1 + 0x181) & 0x7f;
  }
  return in_lr;
}

