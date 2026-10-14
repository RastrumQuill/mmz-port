// sub_080E5BE4 at 0x080E5BE4 (thumb)

undefined4 sub_080E5BE4(int param_1)

{
  bool bVar1;
  undefined4 in_lr;
  
  bVar1 = false;
  if (((((DAT_0202ec42 & 1) == 0) && (DAT_0202ed94 == 0)) && (DAT_0202f8e2 == '\0')) &&
     (((char)DAT_0202f664 != '\x01' && (DAT_0202f648 != 0)))) {
    if (*(int *)(param_1 + 0x7254) == 0) {
      sub_080DEA74();
    }
    else {
      sub_080DEA1C();
    }
    bVar1 = true;
  }
  if (!bVar1) {
    DAT_0202f644 = 0;
  }
  return in_lr;
}

