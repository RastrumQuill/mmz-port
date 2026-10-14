// sub_080EA348 at 0x080EA348 (thumb)

longlong sub_080EA348(int param_1)

{
  uint in_lr;
  
  if ((DAT_02000d14 & 0xc0) != 0) {
    *(undefined *)(param_1 + 4) = 1;
    *(undefined *)(param_1 + 5) = 0;
    sub_080032EC();
  }
  sub_080EAA40(param_1);
  return (ulonglong)in_lr << 0x20;
}

