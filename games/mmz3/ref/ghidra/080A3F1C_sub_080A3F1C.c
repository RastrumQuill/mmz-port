// sub_080A3F1C at 0x080A3F1C (thumb)

void sub_080A3F1C(void)

{
  int unaff_r7;
  code *UNRECOVERED_JUMPTABLE;
  
  *(undefined4 *)(unaff_r7 + 0xc) = 2;
  *(undefined4 *)(unaff_r7 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(unaff_r7 + 9)] + 8);
                    /* WARNING: Could not recover jumptable at 0x080a3f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

