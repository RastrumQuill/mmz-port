// sub_08018988 at 0x08018988 (thumb)

undefined4 sub_08018988(int **param_1)

{
  int **ppiVar1;
  int **ppiVar2;
  undefined4 in_lr;
  
  ppiVar1 = DAT_020300d4;
  ppiVar2 = DAT_020300d4;
  if (DAT_020300d4 != param_1) {
    do {
      ppiVar2 = ppiVar1;
      ppiVar1 = (int **)*ppiVar2;
    } while (ppiVar1 != param_1);
  }
  if (ppiVar1 == ppiVar2) {
    DAT_020300d4 = (int **)*param_1;
  }
  else {
    *ppiVar2 = *param_1;
  }
  *param_1 = (int *)DAT_020300d8;
  DAT_020300d8 = param_1;
  DAT_020300e2 = DAT_020300e2 + 1;
  return in_lr;
}

