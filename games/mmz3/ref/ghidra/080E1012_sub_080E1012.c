// sub_080E1012 at 0x080E1012 (thumb)

void sub_080E1012(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 code *UNRECOVERED_JUMPTABLE)

{
  char in_ZR;
  
  if (in_ZR != '\0') {
    param_2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x080e1020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}

