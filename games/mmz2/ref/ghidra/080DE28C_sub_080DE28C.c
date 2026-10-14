// sub_080DE28C at 0x080DE28C (thumb)

undefined4 sub_080DE28C(void)

{
  int **ppiVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (DAT_0202f628 != (int **)0x0) {
    do {
      ppiVar1 = DAT_0202f628;
      DAT_0202f628 = (int **)*ppiVar1;
      *ppiVar1 = (int *)DAT_0202f62c;
      DAT_0202f62c = ppiVar1;
    } while (DAT_0202f628 != (int **)0x0);
  }
  DAT_0202f628 = (int **)0x0;
  iVar2 = 0;
  if (0 < DAT_0202f0a4) {
    do {
      sub_080DE818(DAT_0202f0a0 +
                   ((uint)(byte)(&DAT_0202f288)[iVar2] * 0x20 + (uint)(byte)(&DAT_0202f228)[iVar2])
                   * 2,(&DAT_0202f0a8)[iVar2],(&DAT_0202f2e8)[iVar2]);
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_0202f0a4);
  }
  DAT_0202f0a4 = 0;
  return in_lr;
}

