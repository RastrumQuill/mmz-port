// sub_080FD718 at 0x080FD718 (thumb)

void sub_080FD718(byte param_1)

{
  undefined uVar1;
  undefined1 *puVar2;
  
  if (param_1 == 2) {
    puVar2 = &DAT_04000069;
LAB_080fd756:
    *puVar2 = 8;
    puVar2 = puVar2 + 4;
  }
  else {
    if (2 < param_1) {
      if (param_1 == 3) {
        puVar2 = &DAT_04000070;
        uVar1 = 0;
        goto LAB_080fd75e;
      }
LAB_080fd754:
      puVar2 = &DAT_04000079;
      goto LAB_080fd756;
    }
    if (param_1 != 1) goto LAB_080fd754;
    DAT_04000063 = 8;
    puVar2 = &DAT_04000065;
  }
  uVar1 = 0x80;
LAB_080fd75e:
  *puVar2 = uVar1;
  return;
}

