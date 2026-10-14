// sub_081082AC at 0x081082AC (thumb)

undefined8 sub_081082AC(void)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_08007C7C();
  uVar1 = uVar1 & 0xffff;
  if (uVar1 == 0xf) {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

