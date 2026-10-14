// sub_080CBDD4 at 0x080CBDD4 (thumb)

undefined4 sub_080CBDD4(int param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    break;
  case 1:
    goto switchD_080cbde8_caseD_1;
  case 2:
    goto switchD_080cbde8_caseD_2;
  case 3:
    sub_08017700(param_1,0x3803);
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 4:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      if (*(char *)(param_1 + 0x13) == '\x01') {
        *(undefined *)(param_1 + 0xe) = 0;
        return in_lr;
      }
      bVar3 = *(byte *)(param_1 + 10);
      uVar5 = ~(uint)(bVar3 >> 4) & 1;
      if (uVar5 == 0) {
        bVar3 = bVar3 & 0xef;
      }
      else {
        bVar3 = bVar3 | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar3;
      *(char *)(param_1 + 0x4c) = (char)uVar5;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
      *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
      sub_08017700(param_1,0x3808);
      sub_080177F4(param_1);
    }
    goto switchD_080cbde8_caseD_7;
  case 5:
    iVar7 = *(int *)(param_1 + 0x54) + -0x1800;
    bVar3 = *(byte *)(param_1 + 10);
    if ((bVar3 & 0x10) != 0) {
      iVar7 = *(int *)(param_1 + 0x54) + 0x1800;
    }
    iVar6 = *(int *)(param_1 + 0x58) + -0x900;
    if ((bVar3 & 0x20) != 0) {
      iVar6 = *(int *)(param_1 + 0x58) + 0x900;
    }
    sub_0807A7AC(iVar7,iVar6,bVar3 >> 4 & 1);
    sub_08017700(param_1,0x3802);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 6:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') goto switchD_080cbde8_caseD_7;
    *(undefined *)(param_1 + 0x12) = 0x70;
    cVar2 = '\x01';
    goto LAB_080cbf76;
  default:
    goto switchD_080cbde8_caseD_7;
  }
  *(undefined *)(param_1 + 0x12) = 0x30;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  puVar4 = &DAT_0836c6f8;
  if (*(char *)(param_1 + 0x10) == '\x03') {
    puVar4 = &DAT_0836c700;
  }
  *(undefined **)(param_1 + 0x30) = puVar4;
  *(undefined2 *)(param_1 + 0x26) = 0x801;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_080cbde8_caseD_1:
  sub_08007390(param_1 + 0x74,&DAT_0836c69c);
  sub_08017700(param_1,0x3801);
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_080cbde8_caseD_2:
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(undefined *)(param_1 + 0xe) = 5;
    return in_lr;
  }
  bVar1 = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (!bVar1) goto switchD_080cbde8_caseD_7;
  }
  else if (bVar1) goto switchD_080cbde8_caseD_7;
  cVar2 = *(char *)(param_1 + 0xe) + '\x01';
LAB_080cbf76:
  *(char *)(param_1 + 0xe) = cVar2;
switchD_080cbde8_caseD_7:
  sub_080CB8EC(param_1);
  return in_lr;
}

