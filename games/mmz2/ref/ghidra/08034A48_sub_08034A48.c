// sub_08034A48 at 0x08034A48 (thumb)

undefined8 sub_08034A48(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x17a) == '\x03') {
    uVar1 = sub_080343F8(param_1);
    uVar1 = uVar1 & 0xff;
  }
  else {
    uVar1 = 1;
  }
  return CONCAT44(in_lr,uVar1);
}

