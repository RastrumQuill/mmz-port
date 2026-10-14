// sub_08079A68 at 0x08079A68 (thumb)

undefined4 sub_08079A68(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0xb4)) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x100;
  }
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08001D30(&DAT_08c45130,(DAT_0202e1f8 - 0x259) * 0x20 + 0x10000);
    sub_08002208(&DAT_08c4513c,(DAT_0202dff8 - 5) * 0x20 + 0x200);
    uVar2 = sub_080CD6C0(param_1,0,0);
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    *(undefined *)(param_1 + 0xdb) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0xb8) + (short)(&DAT_08128c10)[*(byte *)(param_1 + 0x12)] * 4;
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
    if (*(char *)(*(int *)(param_1 + 0x2c) + 0xe) == '\0') goto switchD_08079a92_caseD_5;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x400;
    DAT_0202ea64 = 5;
    uVar2 = sub_080CD6C0(param_1,0,1);
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    break;
  case 2:
    if (*(char *)(*(int *)(param_1 + 0x2c) + 0xe) == '\0') goto switchD_08079a92_caseD_5;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x400;
    sub_0801CF00(param_1,0xb701);
    DAT_0202ea64 = 5;
    *(undefined *)(param_1 + 0x12) = 0x3c;
    break;
  case 3:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) goto switchD_08079a92_caseD_5;
    sub_08002B10(0x14e);
    *(undefined *)(param_1 + 0x12) = 0xa0;
    *(undefined *)(param_1 + 0x13) = 2;
    *(undefined2 *)(param_1 + 0xdc) = 0xc;
    break;
  case 4:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) goto switchD_08079a92_caseD_5;
    if (*(char *)(param_1 + 0x13) == '\x0e') {
      sub_0801CDBC(param_1);
      sub_0801CEEC(param_1);
      sub_0801CF00(param_1,0xb701);
    }
    if (*(char *)(param_1 + 0x13) == '\r') {
      DAT_0202dad7 = 3;
    }
    if (0 < *(short *)(DAT_0202ed94 + 10)) {
      sub_080CD6C0(param_1,*(byte *)(param_1 + 0x13),*(byte *)(param_1 + 0x13) & 1);
      *(char *)(param_1 + 0x12) = (char)*(undefined2 *)(param_1 + 0xdc) + '\x04';
      if (*(short *)(param_1 + 0xdc) != 0) {
        *(short *)(param_1 + 0xdc) = *(short *)(param_1 + 0xdc) + -1;
      }
      *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
      goto switchD_08079a92_caseD_5;
    }
    break;
  default:
    goto switchD_08079a92_caseD_5;
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08079a92_caseD_5:
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0xdb) == '\0') {
    sub_0801D330(param_1);
  }
  else {
    sub_0801D3FC(param_1);
    *(char *)(param_1 + 0xdb) = '\0';
    if ((3 < *(byte *)(param_1 + 0xe)) && (0xd < *(byte *)(param_1 + 0x13))) {
      *(short *)(param_1 + 0x50) = *(short *)(param_1 + 0x50) + 0xc;
      *(short *)(param_1 + 0x52) = *(short *)(param_1 + 0x52) + 0xc;
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x400;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x100;
    }
  }
  return in_lr;
}

