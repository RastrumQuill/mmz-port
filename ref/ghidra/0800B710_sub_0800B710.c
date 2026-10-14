// sub_0800B710 at 0x0800B710 (thumb)

undefined4 sub_0800B710(void)

{
  undefined4 in_lr;
  
  DAT_0202265c = 0;
  DAT_02022664 = 1;
  if ((DAT_02005208 != 0x40) && ((*(uint *)(DAT_02022b20 + 0x18) & 0x180) != 0)) {
    sub_080067C4(0xa6,0,&DAT_08297948);
  }
  return in_lr;
}

