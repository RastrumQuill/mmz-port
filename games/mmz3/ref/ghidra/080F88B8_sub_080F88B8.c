// sub_080F88B8 at 0x080F88B8 (thumb)

undefined8 sub_080F88B8(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = 0;
  do {
    if (((int)(*(byte *)(DAT_0203df90 + (uVar2 >> 2)) & 0xf) >> (uVar2 & 3) & 1U) == 0) {
      uVar1 = 0;
      goto LAB_080f88f0;
    }
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 0xb4);
  uVar1 = 1;
LAB_080f88f0:
  return CONCAT44(in_lr,uVar1);
}

