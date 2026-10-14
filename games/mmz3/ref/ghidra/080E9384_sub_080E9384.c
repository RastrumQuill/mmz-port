// sub_080E9384 at 0x080E9384 (thumb)

undefined4 sub_080E9384(void)

{
  int **ppiVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (DAT_02030bd8 != (int **)0x0) {
    do {
      ppiVar1 = DAT_02030bd8;
      DAT_02030bd8 = (int **)*ppiVar1;
      *ppiVar1 = (int *)DAT_02030bdc;
      DAT_02030bdc = ppiVar1;
    } while (DAT_02030bd8 != (int **)0x0);
  }
  DAT_02030bd8 = (int **)0x0;
  iVar2 = 0;
  if (0 < DAT_02030654) {
    do {
      sub_080E9920((&DAT_020307d8)[iVar2],(&DAT_02030838)[iVar2],(&DAT_02030658)[iVar2],
                   (&DAT_02030898)[iVar2]);
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_02030654);
  }
  DAT_02030654 = 0;
  return in_lr;
}

