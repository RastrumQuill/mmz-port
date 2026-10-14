// sub_080748C8 at 0x080748C8 (thumb)

undefined4 sub_080748C8(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') goto LAB_08074988;
  bVar1 = *(byte *)(param_1 + 10);
  if ((bVar1 & 0x10) == 0) {
    if (*(char *)(param_1 + 0xf) != '\0') {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x2000;
    }
    iVar3 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x58) = iVar3;
    sVar2 = sub_08008CFC(*(int *)(param_1 + 0x54) + -0x2000,iVar3 + 0x3000);
    if (sVar2 == 0) goto LAB_08074970;
    sub_080127E4(param_1,0x1c00);
    sub_080032EC(0xc9);
    *(byte *)(param_1 + 0xf) = bVar1 & 0x10;
  }
  else {
    if (*(char *)(param_1 + 0xf) != '\0') {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x2000;
    }
    iVar3 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x58) = iVar3;
    sVar2 = sub_08008CFC(*(int *)(param_1 + 0x54) + 0x2000,iVar3 + 0x3000);
    if (sVar2 == 0) {
LAB_08074970:
      sub_080127E4(param_1,0x1c07);
      sub_080032EC(0xc9);
      *(undefined *)(param_1 + 0xf) = 1;
    }
    else {
      sub_080127E4(param_1,0x1c00);
      sub_080032EC(0xc9);
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_08074988:
  sub_080128D4(param_1);
  sub_08006E08(param_1 + 0x74,
               &DAT_0833f494 + (uint)(byte)(&DAT_0833f8c8)[*(char *)(param_1 + 0x71)] * 0x18);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0x73) == '\x04') {
      *(undefined *)(param_1 + 0xf) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  else if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  }
  return in_lr;
}

