// sub_0800694C at 0x0800694C (thumb)

undefined8 sub_0800694C(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = 0;
  do {
    if (((int)(uint)(byte)(&DAT_02000a70)[(int)(uVar2 + 4) >> 3] >> (uVar2 + 4 & 7) & 1U) == 0) {
      uVar1 = 0;
      goto LAB_0800697c;
    }
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 0x60);
  uVar1 = 1;
LAB_0800697c:
  return CONCAT44(in_lr,uVar1);
}

