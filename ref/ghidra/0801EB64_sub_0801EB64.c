// sub_0801EB64 at 0x0801EB64 (thumb)

undefined4 sub_0801EB64(int param_1)

{
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0xbe) < 3) {
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0xf) = 6;
      if (*(char *)(param_1 + 0x116) == '\0') {
        sub_08018C20(param_1,0,0,1);
      }
      else {
        sub_08018BE8(param_1,1);
      }
    }
  }
  else {
    *(undefined *)(param_1 + 0xf) = 6;
  }
  sub_0801EC04(param_1);
  return in_lr;
}

