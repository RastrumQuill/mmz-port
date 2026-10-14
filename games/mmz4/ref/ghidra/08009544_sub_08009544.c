// sub_08009544 at 0x08009544 (thumb)

undefined8 sub_08009544(int param_1,int param_2)

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
    puVar2 = &DAT_02000ab0;
    if (-1 < (int)-(uint)DAT_02000c82) break;
    piVar7 = &DAT_02000c90;
    piVar3 = &DAT_02000c8c;
    while( true ) {
      uVar5 = (uint)*(ushort *)(puVar2 + 0x1d8);
      uVar1 = (param_1 - *piVar3) + uVar5;
      if (((uVar1 <= uVar5 * 2 && uVar5 * 2 - uVar1 != 0) &&
          (uVar4 = (uint)*(ushort *)(puVar2 + 0x1da) * 2,
          uVar1 = ((param_2 - *piVar7) + (uint)*(ushort *)(puVar2 + 0x1da)) - 1,
          uVar1 <= uVar4 && uVar4 - uVar1 != 0)) && ((*(ushort *)(puVar2 + 0x1d6) & 0x8400) == 0))
      break;
      piVar7 = piVar7 + 6;
      piVar3 = piVar3 + 6;
      puVar2 = puVar2 + 0x18;
      iVar6 = iVar6 + 1;
      if ((int)(uint)DAT_02000c82 <= iVar6) goto LAB_080095d6;
    }
    param_1 = (*piVar3 - uVar5) + -1;
  }
LAB_080095d6:
  return CONCAT44(in_lr,param_1);
}

