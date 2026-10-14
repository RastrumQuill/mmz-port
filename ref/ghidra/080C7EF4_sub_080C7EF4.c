// sub_080C7EF4 at 0x080C7EF4 (thumb)

void sub_080C7EF4(byte param_1)

{
  undefined uVar1;
  undefined1 *puVar2;
  
  if (param_1 == 2) {
    puVar2 = &DAT_04000069;
LAB_080c7f32:
    *puVar2 = 8;
    puVar2 = puVar2 + 4;
  }
  else {
    if (2 < param_1) {
      if (param_1 == 3) {
        puVar2 = &DAT_04000070;
        uVar1 = 0;
        goto LAB_080c7f3a;
      }
LAB_080c7f30:
      puVar2 = &DAT_04000079;
      goto LAB_080c7f32;
    }
    if (param_1 != 1) goto LAB_080c7f30;
    DAT_04000063 = 8;
    puVar2 = &DAT_04000065;
  }
  uVar1 = 0x80;
LAB_080c7f3a:
  *puVar2 = uVar1;
  return;
}

