// sub_080EA4C8 at 0x080EA4C8 (thumb)

undefined8 sub_080EA4C8(int param_1)

{
  undefined4 in_lr;
  
  if ((DAT_0202ebb4 & 2) == 0) {
    if (*(char *)(param_1 + 4) == '\0') {
      sub_08002EF0(0x21);
    }
    else {
      sub_08002EF0(0x22);
    }
  }
  else if (*(char *)(param_1 + 4) == '\0') {
    sub_08002EF0(0x50);
  }
  else {
    sub_08002EF0(0x4f);
  }
  return CONCAT44(in_lr,1);
}

