// sub_080179F8 at 0x080179F8 (thumb)

undefined8 sub_080179F8(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xc1) == '\x03') {
    if (*(char *)(param_1 + 0xc3) == (&DAT_082a8125)[(uint)*(byte *)(param_1 + 0xbc) * 6]) {
      uVar1 = sub_08017B24(param_1);
    }
    else {
      uVar1 = sub_08017A44(param_1);
    }
    uVar1 = uVar1 & 0xff;
  }
  else {
    uVar1 = 1;
  }
  return CONCAT44(in_lr,uVar1);
}

