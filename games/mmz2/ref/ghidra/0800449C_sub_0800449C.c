// sub_0800449C at 0x0800449C (thumb)

undefined4 sub_0800449C(int **param_1,int **param_2)

{
  int **ppiVar1;
  int **ppiVar2;
  int **ppiVar3;
  undefined4 in_lr;
  
  ppiVar1 = (int **)*param_1;
  ppiVar3 = (int **)0x0;
  while ((ppiVar2 = ppiVar1, ppiVar2 != (int **)0x0 &&
         ((int)*(short *)(ppiVar2 + 2) + (int)*(short *)(ppiVar2 + 4) + (int)*(short *)(ppiVar2 + 6)
          <= (int)*(short *)(param_2 + 2) + (int)*(short *)(param_2 + 4) +
             (int)*(short *)(param_2 + 6)))) {
    ppiVar1 = (int **)*ppiVar2;
    ppiVar3 = ppiVar2;
  }
  if (ppiVar3 == (int **)0x0) {
    *param_1 = (int *)param_2;
  }
  else {
    *ppiVar3 = (int *)param_2;
  }
  *param_2 = (int *)ppiVar2;
  return in_lr;
}

