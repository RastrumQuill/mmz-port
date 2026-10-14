// sub_08032BB8 at 0x08032BB8 (thumb)

undefined4 sub_08032BB8(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (2 < *(byte *)(param_1 + 0x17a)) {
    cVar1 = *(char *)(param_1 + 0x2b6);
    if (cVar1 == '\x03') {
      return in_lr;
    }
    if (cVar1 == '\x02') {
      return in_lr;
    }
    if ((cVar1 == '\x01') && (*(char *)(param_1 + 0x17b) == '\x02')) {
      return in_lr;
    }
  }
  sub_0801E9FC(param_1,7);
  return in_lr;
}

