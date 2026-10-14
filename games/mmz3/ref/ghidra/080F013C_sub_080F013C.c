// sub_080F013C at 0x080F013C (thumb)

undefined4 sub_080F013C(void)

{
  bool bVar1;
  undefined4 in_lr;
  
  bVar1 = false;
  if (((((DAT_020301b2 & 1) == 0) && (DAT_02030304 == 0)) && (DAT_02030ea2 == '\0')) &&
     (((char)DAT_02030c24 != '\x01' && (DAT_02030bf8 != 0)))) {
    sub_080E9BC8();
    bVar1 = true;
  }
  if (!bVar1) {
    DAT_02030bf4 = 0;
  }
  sub_080E9CD4();
  return in_lr;
}

