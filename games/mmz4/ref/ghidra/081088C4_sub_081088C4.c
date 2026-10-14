// sub_081088C4 at 0x081088C4 (thumb)

undefined8 sub_081088C4(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = 0;
  do {
    if (((int)(uint)*(byte *)(DAT_0202eda8 + (uVar2 >> 1)) >> ((uVar2 & 1) << 2) & 0xfU) == 0) {
      uVar1 = 0;
      goto LAB_081088f8;
    }
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 0x33);
  uVar1 = 1;
LAB_081088f8:
  return CONCAT44(in_lr,uVar1);
}

