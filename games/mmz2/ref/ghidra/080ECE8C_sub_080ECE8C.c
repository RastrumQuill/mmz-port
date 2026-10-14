// sub_080ECE8C at 0x080ECE8C (thumb)

void sub_080ECE8C(void)

{
  undefined uVar1;
  int *piVar2;
  
  piVar2 = DAT_03007ff0;
  if (*DAT_03007ff0 != 0x68736d53) {
    return;
  }
  *DAT_03007ff0 = 0x68736d54;
  if (*(char *)(piVar2 + 3) != '\0') {
    uVar1 = DAT_04000006._0_1_;
  }
  if (piVar2[8] != 0) {
    sub_080ED23A(piVar2[9]);
  }
  sub_080ED23A();
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x3000001)();
  return;
}

