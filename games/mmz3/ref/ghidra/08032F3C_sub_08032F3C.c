// sub_08032F3C at 0x08032F3C (thumb)

undefined8 sub_08032F3C(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xce) == '\x02') {
    uVar1 = 7;
  }
  else if (*(char *)(param_1 + 0xce) == '\x01') {
    uVar1 = 6;
  }
  else {
    uVar1 = (uint)*(byte *)(param_1 + 0xc4);
  }
  return CONCAT44(in_lr,uVar1);
}

