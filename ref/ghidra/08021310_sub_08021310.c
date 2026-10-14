// sub_08021310 at 0x08021310 (thumb)

undefined4 sub_08021310(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x115);
  if (bVar1 == 0x9b) {
    if (*(char *)(param_1 + 0x73) == '\x03') {
      sub_08018BE8(param_1,0x9d);
    }
  }
  else {
    if (bVar1 < 0x9c) {
      if (bVar1 != 0) {
        return in_lr;
      }
    }
    else if (bVar1 != 0x9d) {
      if (bVar1 != 0xa1) {
        return in_lr;
      }
      if (*(char *)(param_1 + 0x73) != '\x04') {
        return in_lr;
      }
      sub_08018BE8(param_1,0x9b);
      return in_lr;
    }
    if (*(char *)(param_1 + 0x73) == '\x04') {
      *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
      *(undefined2 *)(param_1 + 0xe) = 0x202;
      sub_08018BE8(param_1,0x9f);
    }
  }
  return in_lr;
}

