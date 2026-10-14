// sub_08002FD4 at 0x08002FD4 (thumb)

undefined4 sub_08002FD4(void)

{
  ushort uVar1;
  undefined4 in_lr;
  
  if (DAT_020017b9 == '\b') {
    DAT_020017b8 = 0;
    DAT_020017b9 = '\0';
  }
  else if (DAT_02001790 != '\0') {
    uVar1 = DAT_0400010e;
    DAT_0400010e = uVar1 | 0x80;
  }
  return in_lr;
}

