// sub_0811D280 at 0x0811D280 (thumb)

undefined8 sub_0811D280(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = 0;
  do {
    *(undefined *)(param_1 + 0xdd9 + uVar1) = 0xff;
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 4);
  sub_0810888C(0x14);
  return CONCAT44(in_lr,1);
}

