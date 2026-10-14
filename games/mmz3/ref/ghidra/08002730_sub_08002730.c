// sub_08002730 at 0x08002730 (thumb)

undefined4 sub_08002730(void)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = Ram04000128;
  if (((uVar1 & 0xc) == 8) && (DAT_02001792 == '\0')) {
    DAT_02001790 = 8;
  }
  else {
    DAT_02001790 = 0;
  }
  return in_lr;
}

