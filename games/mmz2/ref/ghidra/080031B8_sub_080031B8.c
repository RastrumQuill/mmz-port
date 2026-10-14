// sub_080031B8 at 0x080031B8 (thumb)

undefined4 sub_080031B8(void)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = DAT_02000018;
  if (DAT_02000018 == '\0') {
    if (DAT_02000019 != '\0') {
      sub_080EDB3C();
      DAT_02000019 = cVar1;
      DAT_02000018 = '\b';
    }
  }
  else {
    DAT_02000018 = DAT_02000018 + -1;
  }
  sub_080EDB30();
  return in_lr;
}

