// sub_08003008 at 0x08003008 (thumb)

undefined4 sub_08003008(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar1 = 0;
  DAT_020019a1 = 0;
  DAT_020019a0 = 0;
  do {
    uVar2 = 0;
    do {
      (&DAT_020017c0)[uVar1 * 0x1e + uVar2] = 0xefff;
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < 0x1e);
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 8);
  return in_lr;
}

