// sub_08009894 at 0x08009894 (thumb)

int sub_08009894(int param_1,int param_2,int param_3)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  ushort *puVar8;
  int iVar9;
  
  if (param_2 < param_3) {
    param_3 = sub_080095BC(param_1,param_3);
  }
  else {
    iVar1 = param_2 - param_3 >> 1;
    iVar9 = 0;
    if (DAT_0200520e != 0) {
      piVar7 = &DAT_02005230;
      puVar2 = &DAT_02005330;
      piVar5 = &DAT_02005234;
      puVar8 = &DAT_02005370;
      do {
        uVar6 = (uint)*puVar2 * 2;
        uVar4 = (param_1 - *piVar7) + (uint)*puVar2;
        if (uVar4 <= uVar6 && uVar6 - uVar4 != 0) {
          iVar3 = (uint)*puVar8 + iVar1;
          if ((((uint)(((param_2 - iVar1) - *piVar5) + iVar3) <= (uint)(iVar3 * 2)) &&
              (iVar3 = *piVar5 + (uint)*puVar8 + 1, param_3 < iVar3)) &&
             (((&DAT_02005210)[iVar9] & 0x80) == 0)) {
            param_3 = iVar3;
          }
        }
        piVar7 = piVar7 + 2;
        puVar2 = puVar2 + 1;
        piVar5 = piVar5 + 2;
        puVar8 = puVar8 + 1;
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)(uint)DAT_0200520e);
    }
  }
  return param_3;
}

