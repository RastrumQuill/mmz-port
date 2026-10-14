// sub_0800FA74 at 0x0800FA74 (thumb)

undefined4 sub_0800FA74(int *param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((char)DAT_0202f4ac != '\0') {
    if (((DAT_02030108 & 8) == 0) && (iVar1 = sub_080047C0(0x102), iVar1 == 0)) {
      sub_0800471C(0x102);
    }
    if (((char)DAT_0202f4ac != '\0') && ((DAT_02030108 & 8) == 0)) goto LAB_0800fad0;
  }
  iVar1 = sub_080047C0(0x102);
  if (iVar1 != 0) {
    sub_08004768(0x102);
  }
LAB_0800fad0:
  iVar1 = *param_1;
  if (iVar1 < 0x1fe001) {
    if (((iVar1 - 0x7a000U < 0x7b001) || (iVar1 - 0xff000U < 0x2f001)) ||
       (iVar1 - 0x185000U < 0x2e001)) {
      iVar1 = sub_080047C0(0xc6);
      if (iVar1 == 0) {
        sub_0800471C(0xc6);
      }
      sub_080047D8(0xc6);
    }
    else {
      iVar1 = sub_080047C0(0xc6);
      if (iVar1 != 0) {
        sub_08004768(0xc6);
      }
    }
  }
  sub_080041E4(0x83);
  sub_080041E4(0x84);
  return in_lr;
}

