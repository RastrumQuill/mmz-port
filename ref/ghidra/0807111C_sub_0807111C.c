// sub_0807111C at 0x0807111C (thumb)

void sub_0807111C(void)

{
  char cVar1;
  int iVar2;
  int unaff_r5;
  code *UNRECOVERED_JUMPTABLE;
  
  sub_0800561C(unaff_r5 + 0x74,&DAT_082b121c);
  sub_080033F0(unaff_r5 + 0x6c,1);
  *(undefined4 *)(unaff_r5 + 0x58) = 0;
  *(char *)(unaff_r5 + 0xe) = *(char *)(unaff_r5 + 0xe) + '\x01';
  sub_08070660(unaff_r5,*(undefined4 *)(unaff_r5 + 0x54),*(undefined4 *)(unaff_r5 + 0x58));
  iVar2 = *(int *)(unaff_r5 + 0x54) * 0xf0;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(unaff_r5 + 0x54) = iVar2 >> 8;
  iVar2 = *(int *)(unaff_r5 + 0x58) + 0x40;
  *(int *)(unaff_r5 + 0x58) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(unaff_r5 + 0x58) = 0x700;
  }
  cVar1 = sub_08070640(unaff_r5);
  if (cVar1 != '\0') {
    *(char *)(unaff_r5 + 0xe) = *(char *)(unaff_r5 + 0xe) + '\x01';
  }
  sub_08003458(unaff_r5 + 0x6c);
  *(undefined *)(unaff_r5 + 0x46) =
       *(undefined *)
        (*(char *)(unaff_r5 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(unaff_r5 + 0x70) * 4 + *(int *)(unaff_r5 + 0x6c)));
                    /* WARNING: Could not recover jumptable at 0x0807126a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

