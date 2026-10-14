// sub_080ABA9C at 0x080ABA9C (thumb)

undefined4 sub_080ABA9C(void)

{
  undefined4 in_lr;
  
  DAT_02000a40 = 0;
  DAT_02000a50 = DAT_02000a50 & 0xbfff;
  sub_0807F804();
  return in_lr;
}

