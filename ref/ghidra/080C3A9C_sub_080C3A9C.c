// sub_080C3A9C at 0x080C3A9C (thumb)

longlong sub_080C3A9C(int param_1)

{
  uint in_lr;
  
  if ((DAT_02022ad4 & 0x10) == 0) {
    *(undefined *)(param_1 + 2) = 1;
    sub_080BC0AC(&DAT_082ba79c,1,0x12);
    sub_08001EAC(0x29);
  }
  else {
    *(undefined *)(param_1 + 1) = 0;
    sub_08001EAC(0xc1);
  }
  return (ulonglong)in_lr << 0x20;
}

