// sub_081145DC at 0x081145DC (thumb)

undefined4 sub_081145DC(void)

{
  bool bVar1;
  undefined4 in_lr;
  
  bVar1 = false;
  if (((((DAT_0202e922 & 1) == 0) && (DAT_0202ea74 == 0)) && (DAT_0202f612 == '\0')) &&
     (((char)DAT_0202f394 != '\x01' && (DAT_0202f368 != 0)))) {
    sub_0810D83C();
    bVar1 = true;
  }
  if (!bVar1) {
    DAT_0202f364 = 0;
  }
  sub_0810D928();
  return in_lr;
}

