// sub_08052410 at 0x08052410 (thumb)

void sub_08052410(uint param_1,uint param_2)

{
  int unaff_r4;
  undefined *unaff_r5;
  code *UNRECOVERED_JUMPTABLE;
  
  sub_080040A8(0x59,param_2 | param_1);
  *unaff_r5 = 0x59;
  sub_08017700(unaff_r4,0x4d11);
  *(char *)(unaff_r4 + 0xe) = *(char *)(unaff_r4 + 0xe) + '\x01';
  sub_080041E4(*unaff_r5);
  sub_080177F4(unaff_r4);
  if (*(char *)(unaff_r4 + 0x73) == '\x03') {
    *(undefined *)(unaff_r4 + 0xd) = 0;
    *(undefined *)(unaff_r4 + 0xe) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0805244a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

