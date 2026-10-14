// sub_080E93F4 at 0x080E93F4 (thumb)

undefined8 sub_080E93F4(void)

{
  uint uVar1;
  undefined4 in_lr;
  
  if ((DAT_0202ebb4 & 2) == 0) {
    uVar1 = ~(uint)(DAT_0202ebb4 >> 1) & 1;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

