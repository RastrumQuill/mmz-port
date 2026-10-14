// sub_080C2BBC at 0x080C2BBC (thumb)

undefined4 sub_080C2BBC(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    sub_080127E4(param_1,0xc302);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    sub_080128D4(param_1);
    bVar1 = *(byte *)(*(int *)(param_1 + 0x18) + 9);
    if ((bVar1 & 1) != 0) {
      *(byte *)(*(int *)(param_1 + 0x18) + 9) = bVar1 & 0xfe;
      sub_080127E4(param_1,0xc303);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) goto switchD_080c2bd0_caseD_7;
    sub_080127E4(param_1,0xc304);
    *(undefined *)(param_1 + 0x12) = 4;
    cVar2 = *(char *)(param_1 + 0xd) + '\x02';
    break;
  case 2:
    sub_080128D4(param_1);
    if (1 < (byte)(*(char *)(param_1 + 0x73) - 3U)) goto switchD_080c2bd0_caseD_7;
    cVar2 = '\0';
    break;
  case 3:
    sub_080128D4(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') goto switchD_080c2bd0_caseD_7;
    sub_080127E4(param_1,0xc305);
    cVar2 = *(char *)(param_1 + 0xd) + '\x01';
    break;
  case 4:
    sub_080128D4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) != 0) goto switchD_080c2bd0_caseD_7;
    sub_080127E4(param_1,0xc304);
    *(undefined *)(param_1 + 0x12) = 8;
    cVar2 = *(char *)(param_1 + 0xd) + '\x01';
    break;
  case 5:
    sub_080128D4(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') goto switchD_080c2bd0_caseD_7;
    sub_080127E4(param_1,0xc302);
    *(undefined *)(param_1 + 0x12) = 8;
    cVar2 = *(char *)(param_1 + 0xd) + '\x01';
    break;
  case 6:
    sub_080128D4(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') goto switchD_080c2bd0_caseD_7;
    sub_080127E4(param_1,0xc303);
    cVar2 = '\x02';
    break;
  default:
    goto switchD_080c2bd0_caseD_7;
  }
  *(char *)(param_1 + 0xd) = cVar2;
switchD_080c2bd0_caseD_7:
  *(uint *)(param_1 + 0x58) =
       *(int *)(param_1 + 0xb4) + (((uint)DAT_02000fa0._2_2_ - *(int *)(param_1 + 0x68)) + 1) * 0x80
  ;
  return in_lr;
}

