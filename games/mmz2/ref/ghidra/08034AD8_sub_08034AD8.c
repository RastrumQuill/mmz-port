// sub_08034AD8 at 0x08034AD8 (thumb)

undefined8 sub_08034AD8(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x17a) == '\x03') {
    if (((*(char *)(param_1 + 0x17b) == '\x01') && (*(char *)(param_1 + 0x17c) != '\x05')) &&
       ((byte)(*(char *)(param_1 + 0x2c1) + 0x40U) < 0x80 ==
        (bool)(*(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195)) >> 3 & 1))) {
      uVar1 = sub_08034610(param_1);
    }
    else {
      uVar1 = sub_080343F8(param_1);
    }
    uVar1 = uVar1 & 0xff;
  }
  else {
    uVar1 = 1;
  }
  return CONCAT44(in_lr,uVar1);
}

