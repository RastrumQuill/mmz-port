// sub_080347E8 at 0x080347E8 (thumb)

undefined8 sub_080347E8(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x17a) == '\x03') {
    if (*(char *)(param_1 + 0x17b) == '\x01') {
      uVar1 = sub_0803481C(param_1);
    }
    else {
      uVar1 = sub_0803499C(param_1);
    }
    uVar1 = uVar1 & 0xff;
  }
  else {
    uVar1 = 1;
  }
  return CONCAT44(in_lr,uVar1);
}

