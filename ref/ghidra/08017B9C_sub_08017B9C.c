// sub_08017B9C at 0x08017B9C (thumb)

undefined8 sub_08017B9C(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xc1) == '\x03') {
    if (*(char *)(param_1 + 0xc2) == '\x01') {
      uVar1 = sub_08017BC8();
    }
    else {
      uVar1 = sub_08017D18();
    }
    uVar1 = uVar1 & 0xff;
  }
  else {
    uVar1 = 1;
  }
  return CONCAT44(in_lr,uVar1);
}

