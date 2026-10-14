// sub_080FC034 at 0x080FC034 (thumb)

void sub_080FC034(void)

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
    sub_080FC3E2(piVar2[9]);
  }
  sub_080FC3E2();
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x3000001)();
  return;
}

