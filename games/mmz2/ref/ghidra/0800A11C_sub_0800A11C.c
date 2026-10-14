// sub_0800A11C at 0x0800A11C (thumb)

undefined8 sub_0800A11C(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 in_lr;
  
LAB_0800a12e:
  iVar5 = 0;
  if (-1 < (int)-(uint)DAT_020011d2) {
LAB_0800a1a6:
    return CONCAT44(in_lr,param_2);
  }
  piVar2 = &DAT_020011e0;
  piVar6 = &DAT_020011dc;
  puVar4 = &DAT_02001000;
  do {
    uVar3 = (uint)*(ushort *)(puVar4 + 0x1d8) * 2;
    uVar1 = (param_1 - *piVar6) + (uint)*(ushort *)(puVar4 + 0x1d8);
    if (uVar1 <= uVar3 && uVar3 - uVar1 != 0) {
      uVar3 = (uint)*(ushort *)(puVar4 + 0x1da);
      uVar1 = ((param_2 - *piVar2) + uVar3) - 1;
      if ((uVar1 <= uVar3 * 2 && uVar3 * 2 - uVar1 != 0) &&
         ((*(ushort *)(puVar4 + 0x1d6) & 0x8000) == 0)) break;
    }
    piVar2 = piVar2 + 6;
    piVar6 = piVar6 + 6;
    puVar4 = puVar4 + 0x18;
    iVar5 = iVar5 + 1;
    if ((int)(uint)DAT_020011d2 <= iVar5) goto LAB_0800a1a6;
  } while( true );
  param_2 = *piVar2 + uVar3 + 1;
  goto LAB_0800a12e;
}

