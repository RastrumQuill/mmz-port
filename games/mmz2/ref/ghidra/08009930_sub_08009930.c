// sub_08009930 at 0x08009930 (thumb)

void sub_08009930(int param_1,int param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int *piVar4;
  int *piVar5;
  undefined4 unaff_r8;
  code *UNRECOVERED_JUMPTABLE;
  
  param_1 = param_1 + 1;
  puVar2 = &DAT_02001000;
  if (param_1 < (int)(uint)DAT_020011d2) {
    piVar5 = &DAT_020011e0 + param_1 * 6;
    piVar4 = &DAT_020011dc + param_1 * 6;
    puVar3 = &DAT_02001000 + param_1 * 0x18;
    do {
      puVar2 = (undefined *)((uint)*(ushort *)(puVar3 + 0x1d8) * 2);
      puVar1 = (undefined *)((param_2 - *piVar4) + (uint)*(ushort *)(puVar3 + 0x1d8));
      if ((puVar1 <= puVar2 && (int)puVar2 - (int)puVar1 != 0) &&
         (puVar2 = (undefined *)((uint)*(ushort *)(puVar3 + 0x1da) * 2),
         puVar1 = (undefined *)((param_3 - *piVar5) + (uint)*(ushort *)(puVar3 + 0x1da) + -1),
         puVar1 <= puVar2 && (int)puVar2 - (int)puVar1 != 0)) goto FUN_080099b0;
      piVar5 = piVar5 + 6;
      piVar4 = piVar4 + 6;
      puVar3 = puVar3 + 0x18;
      param_1 = param_1 + 1;
    } while (param_1 < (int)(uint)DAT_020011d2);
  }
  param_1 = -1;
FUN_080099b0:
                    /* WARNING: Could not recover jumptable at 0x080099ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,UNRECOVERED_JUMPTABLE,puVar2,unaff_r8);
  return;
}

