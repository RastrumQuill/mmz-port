// sub_080710EC at 0x080710EC (thumb)

void sub_080710EC(int param_1)

{
  char cVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_0800561C(param_1 + 0x74,&DAT_082b121c);
    sub_080033F0(param_1 + 0x6c,1);
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    sub_08070660(param_1,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    iVar2 = *(int *)(param_1 + 0x54) * 0xf0;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *(int *)(param_1 + 0x54) = iVar2 >> 8;
    iVar2 = *(int *)(param_1 + 0x58) + 0x40;
    *(int *)(param_1 + 0x58) = iVar2;
    if (0x700 < iVar2) {
      *(undefined4 *)(param_1 + 0x58) = 0x700;
    }
    cVar1 = sub_08070640(param_1);
    if (cVar1 != '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    break;
  case 2:
    sub_080033F0(param_1 + 0x6c,2);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    sub_08070660(param_1,0,0x100);
    break;
  case 4:
    sub_080033F0(param_1 + 0x6c,0xd);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    sub_08070660(param_1,0,0x100);
  }
                    /* WARNING: Could not recover jumptable at 0x0807126a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

