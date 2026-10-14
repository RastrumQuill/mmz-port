// sub_0803B75C at 0x0803B75C (thumb)

undefined8 sub_0803B75C(void)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_08009A3C();
  uVar1 = uVar1 & 0xffff;
  if (uVar1 == 0x800f) {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

