// sub_08025794 at 0x08025794 (thumb)

undefined8 sub_08025794(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (param_1 == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = (uint)(1 < *(byte *)(param_1 + 0xc));
  }
  return CONCAT44(in_lr,uVar1);
}

