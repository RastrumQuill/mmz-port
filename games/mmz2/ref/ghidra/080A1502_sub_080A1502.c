// sub_080A1502 at 0x080A1502 (thumb)

void sub_080A1502(undefined param_1)

{
  char cVar1;
  int iVar2;
  int unaff_r5;
  code *UNRECOVERED_JUMPTABLE;
  
  *(undefined *)(unaff_r5 + 0xe) = param_1;
  cVar1 = *(char *)(unaff_r5 + 0x12);
  *(char *)(unaff_r5 + 0x12) = cVar1 + '\x10';
  if ((cVar1 == -0x10) &&
     (cVar1 = *(char *)(unaff_r5 + 0x13) + '\x01', *(char *)(unaff_r5 + 0x13) = cVar1,
     cVar1 == '\x02')) {
    *(char *)(unaff_r5 + 0xe) = *(char *)(unaff_r5 + 0xe) + '\x01';
  }
  iVar2 = (int)(short)(&DAT_080ef450)[*(byte *)(unaff_r5 + 0x12)];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 3;
  }
  *(short *)(unaff_r5 + 0x50) = (short)(iVar2 >> 2) + 0x1c0;
  iVar2 = (int)(short)(&DAT_080ef450)[*(byte *)(unaff_r5 + 0x12)];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 3;
  }
  *(short *)(unaff_r5 + 0x52) = (short)(iVar2 >> 2) + 0x1c0;
  sub_080128D4(unaff_r5);
                    /* WARNING: Could not recover jumptable at 0x080a15ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

