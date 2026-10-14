// sub_0801E204 at 0x0801E204 (thumb)

undefined4 sub_0801E204(int **param_1)

{
  int **ppiVar1;
  int **ppiVar2;
  undefined4 in_lr;
  
  ppiVar1 = DAT_0202e884;
  ppiVar2 = DAT_0202e884;
  if (DAT_0202e884 != param_1) {
    do {
      ppiVar2 = ppiVar1;
      ppiVar1 = (int **)*ppiVar2;
    } while (ppiVar1 != param_1);
  }
  if (ppiVar1 == ppiVar2) {
    DAT_0202e884 = (int **)*param_1;
  }
  else {
    *ppiVar2 = *param_1;
  }
  *param_1 = (int *)DAT_0202e888;
  DAT_0202e888 = param_1;
  DAT_0202e892 = DAT_0202e892 + 1;
  return in_lr;
}

