// sub_0806613C at 0x0806613C (thumb)

uint sub_0806613C(void)

{
  uint uVar1;
  
  uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar1 & 0x7fffffff;
  return uVar1 * 2 >> 0x11 & 3;
}

