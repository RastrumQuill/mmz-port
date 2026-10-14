// sub_080149F4 at 0x080149F4 (thumb)

undefined8 sub_080149F4(char param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar3 = 0;
  if (param_1 != '\0') {
    uVar3 = 0;
    goto LAB_08014acc;
  }
  DAT_0202ec3c = DAT_0202ec3c + 1;
  sub_08014D3C(&DAT_0202ec30);
  uVar2 = (uint)DAT_0202ed30;
  iVar1 = sub_08014DE8(&DAT_0202ec30);
  if (iVar1 == 0) {
    if ((DAT_0202ec42 & 1) == 0) {
      if ((DAT_0202ebb4 & 0x10) == 0) {
        sub_080EF118(&DAT_0202ec30,*(undefined4 *)(&DAT_083260cc + (uint)DAT_0202ec30 * 4));
      }
      else {
        sub_080EF118(&DAT_0202ec30,*(undefined4 *)(&DAT_08326118 + (uint)DAT_0202ec30 * 4));
      }
      goto LAB_08014a6c;
    }
  }
  else {
LAB_08014a6c:
    if ((DAT_0202ec42 & 1) == 0) {
      uVar3 = ~(uint)DAT_0202ec38 & 1;
    }
  }
  iVar1 = sub_0801B474(&DAT_0202ec40);
  if (iVar1 == 0) {
    if (DAT_0202ec30 == 1) {
      sub_08014E94(&DAT_0202ec30);
    }
  }
  else {
    uVar3 = ~(uint)DAT_0202ec38 & 1;
  }
  if (((int)(-uVar2 | uVar2) < 0) && (DAT_0202ed30 != '\0')) {
    sub_08012E98(&DAT_0202ed50);
  }
LAB_08014acc:
  return CONCAT44(in_lr,uVar3);
}

