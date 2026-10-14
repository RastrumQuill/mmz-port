// sub_08001F2C at 0x08001F2C (thumb)

void sub_08001F2C(void)

{
  ushort uVar1;
  
  uVar1 = DAT_04000128;
  DAT_04000128 = uVar1 | 0x80;
  DAT_0400010c = 0xc0d256;
  return;
}

