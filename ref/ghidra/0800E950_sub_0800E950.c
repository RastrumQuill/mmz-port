// sub_0800E950 at 0x0800E950 (thumb)

undefined4 sub_0800E950(int **param_1)

{
  int **ppiVar1;
  int **ppiVar2;
  undefined4 in_lr;
  
  ppiVar1 = DAT_02022aa4;
  ppiVar2 = DAT_02022aa4;
  if (DAT_02022aa4 != param_1) {
    do {
      ppiVar2 = ppiVar1;
      ppiVar1 = (int **)*ppiVar2;
    } while (ppiVar1 != param_1);
  }
  if (ppiVar1 == ppiVar2) {
    DAT_02022aa4 = (int **)*param_1;
  }
  else {
    *ppiVar2 = *param_1;
  }
  *param_1 = (int *)DAT_02022aa8;
  DAT_02022aa8 = param_1;
  DAT_02022ab6 = DAT_02022ab6 + 1;
  return in_lr;
}

