// sub_0810CF94 at 0x0810CF94 (thumb)

undefined4 sub_0810CF94(void)

{
  int **ppiVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (DAT_0202f348 != (int **)0x0) {
    do {
      ppiVar1 = DAT_0202f348;
      DAT_0202f348 = (int **)*ppiVar1;
      *ppiVar1 = (int *)DAT_0202f34c;
      DAT_0202f34c = ppiVar1;
    } while (DAT_0202f348 != (int **)0x0);
  }
  DAT_0202f348 = (int **)0x0;
  iVar2 = 0;
  if (0 < DAT_0202edc4) {
    do {
      sub_0810D594((&DAT_0202ef48)[iVar2],(&DAT_0202efa8)[iVar2],(&DAT_0202edc8)[iVar2],
                   (&DAT_0202f008)[iVar2]);
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_0202edc4);
  }
  DAT_0202edc4 = 0;
  return in_lr;
}

