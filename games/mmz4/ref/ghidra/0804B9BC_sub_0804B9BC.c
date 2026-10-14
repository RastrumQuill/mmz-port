// sub_0804B9BC at 0x0804B9BC (thumb)

undefined8 sub_0804B9BC(void)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_08007C7C();
  uVar1 = uVar1 & 0xffff;
  if (uVar1 == 0xf) {
    uVar1 = 0;
  }
  if ((uVar1 & 0x8000) != 0) {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

