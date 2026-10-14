// sub_080E6A74 at 0x080E6A74 (thumb)

void sub_080E6A74(void)

{
  int unaff_r5;
  code *UNRECOVERED_JUMPTABLE;
  
  sub_080032EC(3);
  *(undefined *)(unaff_r5 + 3) = 0x66;
                    /* WARNING: Could not recover jumptable at 0x080e6b9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

