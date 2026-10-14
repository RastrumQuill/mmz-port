// sub_0800A1B8 at 0x0800A1B8 (thumb)

undefined8 sub_0800A1B8(int param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined4 in_lr;
  
  while( true ) {
    iVar6 = 0;
    puVar2 = &DAT_02001000;
    if (-1 < (int)-(uint)DAT_020011d2) break;
    piVar7 = &DAT_020011e0;
    piVar3 = &DAT_020011dc;
    while( true ) {
      uVar5 = (uint)*(ushort *)(puVar2 + 0x1d8);
      uVar1 = (param_1 - *piVar3) + uVar5;
      if (((uVar1 <= uVar5 * 2 && uVar5 * 2 - uVar1 != 0) &&
          (uVar4 = (uint)*(ushort *)(puVar2 + 0x1da) * 2,
          uVar1 = ((param_2 - *piVar7) + (uint)*(ushort *)(puVar2 + 0x1da)) - 1,
          uVar1 <= uVar4 && uVar4 - uVar1 != 0)) && ((*(ushort *)(puVar2 + 0x1d6) & 0x8000) == 0))
      break;
      piVar7 = piVar7 + 6;
      piVar3 = piVar3 + 6;
      puVar2 = puVar2 + 0x18;
      iVar6 = iVar6 + 1;
      if ((int)(uint)DAT_020011d2 <= iVar6) goto LAB_0800a24a;
    }
    param_1 = (*piVar3 - uVar5) + -1;
  }
LAB_0800a24a:
  return CONCAT44(in_lr,param_1);
}

