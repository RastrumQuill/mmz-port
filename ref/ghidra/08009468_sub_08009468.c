// sub_08009468 at 0x08009468 (thumb)

undefined8 sub_08009468(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 in_lr;
  ushort *local_24;
  
  iVar3 = 0;
  if (DAT_0200520e != 0) {
    piVar7 = &DAT_02005230;
    local_24 = &DAT_02005330;
    puVar6 = &DAT_020053b0;
    piVar5 = &DAT_02005234;
    puVar4 = &DAT_02005370;
    do {
      uVar2 = (uint)*local_24 * 2;
      uVar1 = (param_1 - *piVar7) + (uint)*local_24;
      if ((uVar1 <= uVar2 && uVar2 - uVar1 != 0) &&
         (uVar2 = (uint)*puVar4 * 2, uVar1 = ((param_2 - *piVar5) + (uint)*puVar4) - 1,
         uVar1 <= uVar2 && uVar2 - uVar1 != 0)) {
        DAT_02002020 = *puVar6;
        uVar1 = (uint)(byte)(&DAT_02005210)[iVar3];
        goto LAB_08009510;
      }
      piVar7 = piVar7 + 2;
      local_24 = local_24 + 1;
      puVar6 = puVar6 + 1;
      piVar5 = piVar5 + 2;
      puVar4 = puVar4 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)DAT_0200520e);
  }
  uVar1 = 0;
LAB_08009510:
  return CONCAT44(in_lr,uVar1);
}

