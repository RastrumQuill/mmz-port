// sub_08127AEC at 0x08127AEC (thumb)

void sub_08127AEC(byte param_1)

{
  undefined uVar1;
  undefined1 *puVar2;
  
  if (param_1 == 2) {
    puVar2 = &DAT_04000069;
LAB_08127b2a:
    *puVar2 = 8;
    puVar2 = puVar2 + 4;
  }
  else {
    if (2 < param_1) {
      if (param_1 == 3) {
        puVar2 = &DAT_04000070;
        uVar1 = 0;
        goto LAB_08127b32;
      }
LAB_08127b28:
      puVar2 = &DAT_04000079;
      goto LAB_08127b2a;
    }
    if (param_1 != 1) goto LAB_08127b28;
    DAT_04000063 = 8;
    puVar2 = &DAT_04000065;
  }
  uVar1 = 0x80;
LAB_08127b32:
  *puVar2 = uVar1;
  return;
}

