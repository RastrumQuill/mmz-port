// sub_08007006 at 0x08007006 (thumb)

void sub_08007006(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int *unaff_r5;
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x08007022. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(undefined *)
              ((uint)*(ushort *)((param_2 + param_1) * 2 + unaff_r5[2]) * 2 + *unaff_r5),
             UNRECOVERED_JUMPTABLE,param_3,param_5);
  return;
}

