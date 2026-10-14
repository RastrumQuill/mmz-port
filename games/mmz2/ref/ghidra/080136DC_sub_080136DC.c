// sub_080136DC at 0x080136DC (thumb)

undefined4 sub_080136DC(int **param_1)

{
  int **ppiVar1;
  int **ppiVar2;
  undefined4 in_lr;
  
  ppiVar1 = DAT_0202eb94;
  ppiVar2 = DAT_0202eb94;
  if (DAT_0202eb94 != param_1) {
    do {
      ppiVar2 = ppiVar1;
      ppiVar1 = (int **)*ppiVar2;
    } while (ppiVar1 != param_1);
  }
  if (ppiVar1 == ppiVar2) {
    DAT_0202eb94 = (int **)*param_1;
  }
  else {
    *ppiVar2 = *param_1;
  }
  *param_1 = (int *)DAT_0202eb98;
  DAT_0202eb98 = param_1;
  DAT_0202eba2 = DAT_0202eba2 + 1;
  return in_lr;
}

