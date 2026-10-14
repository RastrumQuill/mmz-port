// sub_080D0AF4 at 0x080D0AF4 (thumb)

void sub_080D0AF4(undefined param_1)

{
  byte bVar1;
  byte *pbVar2;
  int unaff_r4;
  undefined4 *unaff_r5;
  undefined4 unaff_r6;
  uint unaff_r7;
  uint unaff_r8;
  undefined4 in_stack_00000000;
  code *UNRECOVERED_JUMPTABLE;
  
  *(undefined *)(unaff_r4 + 0x22) = param_1;
  *(undefined4 *)(unaff_r4 + 0x54) = *unaff_r5;
  *(undefined4 *)(unaff_r4 + 0x58) = unaff_r5[1];
  sub_0801CC9C(unaff_r4);
  sub_0801CF00(unaff_r4,unaff_r6);
  if (unaff_r7 == 0) {
    bVar1 = *(byte *)(unaff_r4 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(unaff_r4 + 10) | 0x10;
  }
  *(byte *)(unaff_r4 + 10) = bVar1;
  *(char *)(unaff_r4 + 0x4c) = (char)(unaff_r7 & 1);
  pbVar2 = (byte *)(unaff_r4 + 0x4a);
  *pbVar2 = *pbVar2 & 0xef | (byte)((unaff_r7 & 1) << 4);
  if (unaff_r8 == 0) {
    bVar1 = *(byte *)(unaff_r4 + 10) & 0xdf;
  }
  else {
    bVar1 = *(byte *)(unaff_r4 + 10) | 0x20;
  }
  *(byte *)(unaff_r4 + 10) = bVar1;
  *(char *)(unaff_r4 + 0x4d) = (char)(unaff_r8 & 1);
  bVar1 = *pbVar2;
  *pbVar2 = bVar1 & 0xdf | (byte)((unaff_r8 & 1) << 5);
                    /* WARNING: Could not recover jumptable at 0x080d0b86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(unaff_r4,UNRECOVERED_JUMPTABLE,bVar1,in_stack_00000000);
  return;
}

