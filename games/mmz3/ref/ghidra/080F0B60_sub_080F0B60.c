// sub_080F0B60 at 0x080F0B60 (thumb)

void sub_080F0B60(void)

{
  undefined4 unaff_r6;
  code *UNRECOVERED_JUMPTABLE;
  
  sub_080EDB10(unaff_r6);
                    /* WARNING: Could not recover jumptable at 0x080f0c3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

