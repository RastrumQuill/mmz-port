// sub_080097E0 at 0x080097E0 (thumb)

int sub_080097E0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  ushort *puVar7;
  ushort *puVar8;
  int iVar9;
  
  if (param_3 < param_2) {
    param_3 = sub_08009528(param_1,param_3);
  }
  else {
    iVar1 = param_3 - param_2 >> 1;
    iVar9 = 0;
    if (DAT_0200520e != 0) {
      puVar7 = &DAT_02005370;
      piVar5 = &DAT_02005230;
      puVar8 = &DAT_02005330;
      piVar2 = &DAT_02005234;
      do {
        uVar6 = (uint)*puVar8 * 2;
        uVar4 = (param_1 - *piVar5) + (uint)*puVar8;
        if (uVar4 <= uVar6 && uVar6 - uVar4 != 0) {
          iVar3 = (uint)*puVar7 + iVar1;
          uVar6 = iVar3 * 2;
          uVar4 = ((param_2 + iVar1) - *piVar2) + iVar3;
          if ((uVar4 <= uVar6 && uVar6 - uVar4 != 0) &&
             (iVar3 = *piVar2 - (uint)*puVar7, iVar3 < param_3)) {
            param_3 = iVar3;
          }
        }
        puVar7 = puVar7 + 1;
        piVar5 = piVar5 + 2;
        puVar8 = puVar8 + 1;
        piVar2 = piVar2 + 2;
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)(uint)DAT_0200520e);
    }
  }
  return param_3;
}

