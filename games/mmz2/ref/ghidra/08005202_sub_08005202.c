// sub_08005202 at 0x08005202 (thumb)

void sub_08005202(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  ushort *puVar1;
  undefined4 *puVar2;
  int iVar3;
  short sVar4;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  int unaff_r8;
  int in_r12;
  undefined4 param_5;
  code *UNRECOVERED_JUMPTABLE;
  
  do {
    puVar1 = (ushort *)((unaff_r5 + param_3) * 2 + unaff_r8);
    *(undefined4 *)(param_4 + in_r12) = *(undefined4 *)((uint)*puVar1 * 8 + unaff_r7);
    ((undefined4 *)(param_4 + in_r12))[0x10] = *(undefined4 *)((uint)*puVar1 * 8 + unaff_r7 + 4);
    sVar4 = (short)(param_3 + 1);
    iVar3 = (param_3 + 1) * 0x10000 >> 0x10;
    if (0xe < iVar3) {
      puVar2 = (undefined4 *)(((unaff_r4 >> 0x10) * 0x40 + iVar3 * 2) * 2 + in_r12);
      *puVar2 = 0;
      puVar2[0x10] = 0;
      unaff_r4 = ((unaff_r4 >> 0x10) + 1) * 0x10000;
      iVar3 = unaff_r4 >> 0x10;
      if (9 < iVar3) {
        param_5 = 0;
        sub_080EEF68();
                    /* WARNING: Could not recover jumptable at 0x08005262. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      sVar4 = 0;
      unaff_r6 = iVar3 << 6;
      unaff_r5 = iVar3 * 0xf;
    }
    param_3 = (int)sVar4;
    param_4 = (unaff_r6 + param_3 * 2) * 2;
  } while( true );
}

