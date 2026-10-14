// sub_08009668 at 0x08009668 (thumb)

undefined8 sub_08009668(int param_1,int param_2)

{
  ushort *puVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined4 in_lr;
  ushort *local_24;
  
  while (iVar6 = 0, DAT_0200520e != 0) {
    piVar7 = &DAT_02005230;
    puVar1 = &DAT_02005330;
    piVar3 = &DAT_02005234;
    local_24 = &DAT_02005370;
    while( true ) {
      uVar5 = (uint)*puVar1;
      uVar2 = (param_1 - *piVar7) + uVar5;
      if (((uVar2 <= uVar5 * 2 && uVar5 * 2 - uVar2 != 0) &&
          (uVar4 = (uint)*local_24 * 2, uVar2 = ((param_2 - *piVar3) + (uint)*local_24) - 1,
          uVar2 <= uVar4 && uVar4 - uVar2 != 0)) && (((&DAT_02005210)[iVar6] & 0x80) == 0)) break;
      piVar7 = piVar7 + 2;
      puVar1 = puVar1 + 1;
      piVar3 = piVar3 + 2;
      local_24 = local_24 + 1;
      iVar6 = iVar6 + 1;
      if ((int)(uint)DAT_0200520e <= iVar6) goto LAB_0800970c;
    }
    param_1 = (*piVar7 - uVar5) + -1;
  }
LAB_0800970c:
  return CONCAT44(in_lr,param_1);
}

