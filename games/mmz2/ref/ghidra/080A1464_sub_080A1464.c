// sub_080A1464 at 0x080A1464 (thumb)

void sub_080A1464(int param_1)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_080126A0(param_1);
    sub_080127E4(param_1,0x3c00);
    *(undefined2 *)(param_1 + 0x50) = 0;
    *(undefined2 *)(param_1 + 0x52) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    puVar4 = (ushort *)(param_1 + 0x50);
    uVar2 = *puVar4;
    *puVar4 = uVar2 + 0x20;
    if (0x1c0 < (ushort)(uVar2 + 0x20)) {
      *puVar4 = 0x1c0;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    uVar2 = *puVar4;
    break;
  case 2:
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    cVar1 = *(char *)(param_1 + 0x12);
    *(char *)(param_1 + 0x12) = cVar1 + '\x10';
    if ((cVar1 == -0x10) &&
       (cVar1 = *(char *)(param_1 + 0x13) + '\x01', *(char *)(param_1 + 0x13) = cVar1,
       cVar1 == '\x02')) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    iVar3 = (int)(short)(&DAT_080ef450)[*(byte *)(param_1 + 0x12)];
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    *(short *)(param_1 + 0x50) = (short)(iVar3 >> 2) + 0x1c0;
    iVar3 = (int)(short)(&DAT_080ef450)[*(byte *)(param_1 + 0x12)];
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    uVar2 = (short)(iVar3 >> 2) + 0x1c0;
    break;
  case 4:
    *(undefined2 *)(param_1 + 0x50) = 0x1c0;
    *(undefined2 *)(param_1 + 0x52) = 0x1c0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    puVar4 = (ushort *)(param_1 + 0x50);
    uVar2 = *puVar4;
    *puVar4 = uVar2 - 0x20;
    if ((ushort)(uVar2 - 0x20) < 0x100) {
      *puVar4 = 0x100;
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    *(ushort *)(param_1 + 0x52) = *puVar4;
    sub_080128D4(param_1);
  default:
    goto switchD_080a1480_caseD_6;
  }
  *(ushort *)(param_1 + 0x52) = uVar2;
  sub_080128D4(param_1);
switchD_080a1480_caseD_6:
                    /* WARNING: Could not recover jumptable at 0x080a15ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

