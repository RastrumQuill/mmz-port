// sub_080EA0C8 at 0x080EA0C8 (thumb)

undefined8 sub_080EA0C8(int param_1)

{
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 4) < 10) {
    sub_08002EF0(0x1f);
  }
  else {
    sub_08002EF0(0x20);
  }
  return CONCAT44(in_lr,1);
}

