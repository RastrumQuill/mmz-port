// sub_0800AE60 at 0x0800AE60 (thumb)

undefined8 sub_0800AE60(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined *puVar6;
  undefined4 in_lr;
  
LAB_0800ae70:
  iVar4 = 0;
  if (-1 < (int)-(uint)DAT_02002652) {
LAB_0800aed6:
    return CONCAT44(in_lr,param_2);
  }
  piVar3 = &DAT_02002660;
  piVar5 = &DAT_0200265c;
  puVar6 = &DAT_02002480;
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
    if ((int)(uint)DAT_02002652 <= iVar4) goto LAB_0800aed6;
  } while( true );
  param_2 = *piVar3 - uVar2;
  goto LAB_0800ae70;
}

