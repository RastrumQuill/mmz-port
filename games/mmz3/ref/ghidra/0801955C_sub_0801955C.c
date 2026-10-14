// sub_0801955C at 0x0801955C (thumb)

undefined8 sub_0801955C(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *param_1;
  if (0x2b9000 < iVar2) {
    uVar1 = 7;
    goto LAB_080195be;
  }
  if (iVar2 < 0x223801) {
    if (iVar2 < 0x205801) {
      if (0x16f800 < iVar2) goto LAB_08019582;
      if (0x151800 < iVar2) {
        uVar1 = 6;
        goto LAB_080195be;
      }
      if ((0xf7800 < iVar2) || (iVar2 < 0xd9801)) {
        uVar1 = 0;
        goto LAB_080195be;
      }
    }
    uVar1 = 5;
  }
  else {
LAB_08019582:
    uVar1 = 1;
  }
LAB_080195be:
  return CONCAT44(in_lr,uVar1);
}

