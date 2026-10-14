// sub_080094A8 at 0x080094A8 (thumb)

undefined8 sub_080094A8(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 in_lr;
  
LAB_080094ba:
  iVar5 = 0;
  if (-1 < (int)-(uint)DAT_02000c82) {
LAB_08009532:
    return CONCAT44(in_lr,param_2);
  }
  piVar2 = &DAT_02000c90;
  piVar6 = &DAT_02000c8c;
  puVar4 = &DAT_02000ab0;
  do {
    uVar3 = (uint)*(ushort *)(puVar4 + 0x1d8) * 2;
    uVar1 = (param_1 - *piVar6) + (uint)*(ushort *)(puVar4 + 0x1d8);
    if (uVar1 <= uVar3 && uVar3 - uVar1 != 0) {
      uVar3 = (uint)*(ushort *)(puVar4 + 0x1da);
      uVar1 = ((param_2 - *piVar2) + uVar3) - 1;
      if ((uVar1 <= uVar3 * 2 && uVar3 * 2 - uVar1 != 0) &&
         ((*(ushort *)(puVar4 + 0x1d6) & 0x8400) == 0)) break;
    }
    piVar2 = piVar2 + 6;
    piVar6 = piVar6 + 6;
    puVar4 = puVar4 + 0x18;
    iVar5 = iVar5 + 1;
    if ((int)(uint)DAT_02000c82 <= iVar5) goto LAB_08009532;
  } while( true );
  param_2 = *piVar2 + uVar3 + 1;
  goto LAB_080094ba;
}

