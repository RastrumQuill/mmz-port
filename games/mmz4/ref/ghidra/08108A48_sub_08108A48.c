// sub_08108A48 at 0x08108A48 (thumb)

undefined8 sub_08108A48(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = 0;
  do {
    if (((int)(uint)*(byte *)(DAT_0202edac + (uVar2 >> 2)) >> (uVar2 & 3) + 4 & 1U) != 0) {
      uVar1 = 0;
      goto LAB_08108a7c;
    }
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 0x1c);
  uVar1 = 1;
LAB_08108a7c:
  return CONCAT44(in_lr,uVar1);
}

