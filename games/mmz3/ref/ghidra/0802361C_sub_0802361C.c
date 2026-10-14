// sub_0802361C at 0x0802361C (thumb)

longlong sub_0802361C(int param_1)

{
  byte bVar1;
  uint in_lr;
  
  bVar1 = *(byte *)(*(int *)(param_1 + 0xc) + 1);
  if (bVar1 == 1) {
    DAT_030032e1 = 0;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      DAT_030032e1 = DAT_030032e1 | 2;
    }
  }
  else if (bVar1 == 2) {
    DAT_030032e0 = DAT_030032e0 | 0x80;
  }
  else if (bVar1 == 3) {
    DAT_030032e0 = DAT_030032e0 & 0x7f;
  }
  return (ulonglong)in_lr << 0x20;
}

