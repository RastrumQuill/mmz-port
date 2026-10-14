// sub_080E91EC at 0x080E91EC (thumb)

longlong sub_080E91EC(int param_1)

{
  uint in_lr;
  
  if ((DAT_0202ebb4 & 0x10) == 0) {
    *(byte *)(param_1 + 1) = DAT_0202ebb4 & 0x10;
    sub_080032EC(4);
  }
  else {
    *(undefined *)(param_1 + 2) = 1;
    sub_080DE510(&DAT_0834df88,1,0x12);
    sub_080032EC(1);
  }
  return (ulonglong)in_lr << 0x20;
}

