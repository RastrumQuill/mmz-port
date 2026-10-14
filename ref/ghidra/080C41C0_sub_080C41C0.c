// sub_080C41C0 at 0x080C41C0 (thumb)

longlong sub_080C41C0(int param_1)

{
  uint in_lr;
  
  if ((DAT_02004ca8 & 0xc0) != 0) {
    *(undefined *)(param_1 + 4) = 1;
    *(undefined *)(param_1 + 5) = 0;
    sub_08001EAC(0x29);
  }
  sub_080C4678(param_1);
  return (ulonglong)in_lr << 0x20;
}

