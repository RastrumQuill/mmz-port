// sub_08033C50 at 0x08033C50 (thumb)

undefined8 sub_08033C50(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x17a) == '\x03') {
    if (*(char *)(param_1 + 0x17b) == '\x01') {
      uVar1 = sub_08033C8C(param_1);
    }
    else {
      uVar1 = sub_080341C4(param_1);
    }
    uVar1 = uVar1 & 0xff;
  }
  else {
    uVar1 = 1;
  }
  return CONCAT44(in_lr,uVar1);
}

