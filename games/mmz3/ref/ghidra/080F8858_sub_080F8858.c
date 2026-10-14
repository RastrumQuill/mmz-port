// sub_080F8858 at 0x080F8858 (thumb)

undefined4 sub_080F8858(void)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = 0;
  do {
    (&DAT_0203df94)[uVar1] = 0xff;
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 10);
  DAT_0203df9e = 0;
  return in_lr;
}

