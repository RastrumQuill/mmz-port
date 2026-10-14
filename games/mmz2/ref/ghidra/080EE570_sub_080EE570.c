// sub_080EE570 at 0x080EE570 (thumb)

void sub_080EE570(byte param_1)

{
  undefined uVar1;
  undefined1 *puVar2;
  
  if (param_1 == 2) {
    puVar2 = &DAT_04000069;
LAB_080ee5ae:
    *puVar2 = 8;
    puVar2 = puVar2 + 4;
  }
  else {
    if (2 < param_1) {
      if (param_1 == 3) {
        puVar2 = &DAT_04000070;
        uVar1 = 0;
        goto LAB_080ee5b6;
      }
LAB_080ee5ac:
      puVar2 = &DAT_04000079;
      goto LAB_080ee5ae;
    }
    if (param_1 != 1) goto LAB_080ee5ac;
    DAT_04000063 = 8;
    puVar2 = &DAT_04000065;
  }
  uVar1 = 0x80;
LAB_080ee5b6:
  *puVar2 = uVar1;
  return;
}

