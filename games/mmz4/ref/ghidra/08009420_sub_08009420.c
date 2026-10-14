// sub_08009420 at 0x08009420 (thumb)

undefined8 sub_08009420(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined *puVar6;
  undefined4 in_lr;
  
LAB_08009430:
  iVar4 = 0;
  if (-1 < (int)-(uint)DAT_02000c82) {
LAB_08009496:
    return CONCAT44(in_lr,param_2);
  }
  piVar3 = &DAT_02000c90;
  piVar5 = &DAT_02000c8c;
  puVar6 = &DAT_02000ab0;
  do {
    uVar2 = (uint)*(ushort *)(puVar6 + 0x1d8) * 2;
    uVar1 = (param_1 - *piVar5) + (uint)*(ushort *)(puVar6 + 0x1d8);
    if (uVar1 <= uVar2 && uVar2 - uVar1 != 0) {
      uVar2 = (uint)*(ushort *)(puVar6 + 0x1da);
      uVar1 = ((param_2 - *piVar3) + uVar2) - 1;
      if (uVar1 <= uVar2 * 2 && uVar2 * 2 - uVar1 != 0) break;
    }
    piVar3 = piVar3 + 6;
    piVar5 = piVar5 + 6;
    puVar6 = puVar6 + 0x18;
    iVar4 = iVar4 + 1;
    if ((int)(uint)DAT_02000c82 <= iVar4) goto LAB_08009496;
  } while( true );
  param_2 = *piVar3 - uVar2;
  goto LAB_08009430;
}

