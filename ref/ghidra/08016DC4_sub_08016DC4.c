// sub_08016DC4 at 0x08016DC4 (thumb)

undefined4 sub_08016DC4(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 0xc1) < 3) ||
     (((cVar1 = *(char *)(param_1 + 0x11), cVar1 != '\x03' && (cVar1 != '\x02')) &&
      ((cVar1 != '\x01' || (*(char *)(param_1 + 0xc2) != '\x02')))))) {
    sub_08018BE8(param_1,7);
  }
  return in_lr;
}

