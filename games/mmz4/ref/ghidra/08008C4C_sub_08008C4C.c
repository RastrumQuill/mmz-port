// sub_08008C4C at 0x08008C4C (thumb)

void sub_08008C4C(int param_1,int param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int *piVar4;
  int *piVar5;
  undefined4 unaff_r8;
  code *UNRECOVERED_JUMPTABLE;
  
  if (DAT_02000c80 == 4) {
    param_2 = sub_08128954(param_2 + -0xf000,0x3c000);
    param_2 = param_2 + 0xf000;
  }
  puVar2 = &DAT_02000ab0;
  param_1 = param_1 + 1;
  if (param_1 < (int)(uint)DAT_02000c82) {
    piVar5 = &DAT_02000c90 + param_1 * 6;
    piVar4 = &DAT_02000c8c + param_1 * 6;
    puVar3 = &DAT_02000ab0 + param_1 * 0x18;
    do {
      puVar2 = (undefined *)((uint)*(ushort *)(puVar3 + 0x1d8) * 2);
      puVar1 = (undefined *)((param_2 - *piVar4) + (uint)*(ushort *)(puVar3 + 0x1d8));
      if ((puVar1 <= puVar2 && (int)puVar2 - (int)puVar1 != 0) &&
         (puVar2 = (undefined *)((uint)*(ushort *)(puVar3 + 0x1da) * 2),
         puVar1 = (undefined *)((param_3 - *piVar5) + (uint)*(ushort *)(puVar3 + 0x1da) + -1),
         puVar1 <= puVar2 && (int)puVar2 - (int)puVar1 != 0)) goto LAB_08008cf4;
      piVar5 = piVar5 + 6;
      piVar4 = piVar4 + 6;
      puVar3 = puVar3 + 0x18;
      param_1 = param_1 + 1;
    } while (param_1 < (int)(uint)DAT_02000c82);
  }
  param_1 = -1;
LAB_08008cf4:
                    /* WARNING: Could not recover jumptable at 0x08008d00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,UNRECOVERED_JUMPTABLE,puVar2,unaff_r8);
  return;
}

