// sub_0800F9F2 at 0x0800F9F2 (thumb)

void sub_0800F9F2(undefined4 param_1)

{
  int iVar1;
  int in_lr;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = sub_0800F9F2;
  iVar1 = (*(code *)(in_lr + 0xa88))(param_1);
  *(undefined2 *)(iVar1 + 2) = 0;
                    /* WARNING: Could not recover jumptable at 0x0800fa00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(iVar1,0,iVar1 << 8);
  return;
}

