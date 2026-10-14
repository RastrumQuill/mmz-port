// sub_080343F8 at 0x080343F8 (thumb)

undefined8 sub_080343F8(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x17a) == '\x03') {
    if (*(byte *)(param_1 + 0x17b) < 6) {
      uVar1 = sub_0803442C(param_1);
    }
    else {
      uVar1 = sub_0803475C(param_1);
    }
    uVar1 = uVar1 & 0xff;
  }
  else {
    uVar1 = 1;
  }
  return CONCAT44(in_lr,uVar1);
}

