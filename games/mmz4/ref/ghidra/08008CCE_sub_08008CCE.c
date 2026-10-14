// sub_08008CCE at 0x08008CCE (thumb)

void sub_08008CCE(uint param_1,int param_2,uint param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  int unaff_r4;
  int *unaff_r5;
  int *unaff_r6;
  int unaff_r8;
  int unaff_r9;
  int in_r12;
  code *UNRECOVERED_JUMPTABLE;
  
  do {
    if ((param_2 + param_1) - 1 < param_3) {
LAB_08008cf4:
                    /* WARNING: Could not recover jumptable at 0x08008d00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(unaff_r4,UNRECOVERED_JUMPTABLE,param_3,param_6);
      return;
    }
    do {
      iVar2 = param_4;
      unaff_r6 = unaff_r6 + 6;
      unaff_r5 = unaff_r5 + 6;
      param_4 = iVar2 + 0x18;
      unaff_r4 = unaff_r4 + 1;
      if (in_r12 <= unaff_r4) {
        unaff_r4 = -1;
        goto LAB_08008cf4;
      }
      param_3 = (uint)*(ushort *)(iVar2 + 0x1f0) * 2;
      uVar1 = (unaff_r9 - *unaff_r5) + (uint)*(ushort *)(iVar2 + 0x1f0);
    } while (param_3 < uVar1 || param_3 - uVar1 == 0);
    param_1 = (uint)*(ushort *)(iVar2 + 0x1f2);
    param_3 = param_1 << 1;
    param_2 = unaff_r8 - *unaff_r6;
  } while( true );
}

