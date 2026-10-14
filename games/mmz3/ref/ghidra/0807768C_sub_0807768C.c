// sub_0807768C at 0x0807768C (thumb)

undefined4 sub_0807768C(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x28);
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    if (*(char *)(param_1 + 0x12) == '\0') {
      sub_08017700(param_1,0x2e02);
      sub_08007390(param_1 + 0x74,&DAT_08363ac8);
    }
    else {
      sub_08017700(param_1,0x2e03);
      sub_08007390(param_1 + 0x74,&DAT_08363af8);
    }
    *(undefined *)(param_1 + 0x13) = 8;
    iVar5 = (uint)*(byte *)(param_1 + 0x12) * 0x8000;
    iVar3 = iVar5 + -0x4000;
    *(int *)(param_1 + 0x5c) = iVar3;
    if (iVar3 < 0) {
      iVar3 = iVar5 + -0x3fe1;
    }
    *(int *)(param_1 + 0x5c) = iVar3 >> 5;
    *(undefined4 *)(param_1 + 0x60) = 0;
    break;
  case 1:
  case 3:
    goto switchD_080776a2_caseD_1;
  case 2:
    *(undefined *)(param_1 + 0x13) = 8;
    sub_08007390(param_1 + 0x74,&DAT_08363b28);
    sub_08017700(param_1,0x2e04);
    if (*(byte *)(param_1 + 0x12) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    uVar4 = *(byte *)(param_1 + 0x12) & 1;
    *(char *)(param_1 + 0x4c) = (char)uVar4;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
    break;
  case 4:
    sub_08017700(param_1,0x2e05);
    sub_080177F4(param_1);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  default:
    goto switchD_080776a2_caseD_5;
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_080776a2_caseD_1:
  cVar2 = *(char *)(param_1 + 0x13) + -1;
  *(char *)(param_1 + 0x13) = cVar2;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
switchD_080776a2_caseD_5:
  iVar3 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar3;
  if (0x700 < iVar3) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar3 = sub_08009B28(*(undefined4 *)(param_1 + 0x54));
  pcVar6 = (char *)(param_1 + 0xb9);
  if (iVar3 < 0) {
    uVar4 = sub_08008FEC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (((uVar4 & 0x10) == 0) && (*pcVar6 == '\0')) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
      *(undefined *)(param_1 + 0xd) = 4;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    else {
      *pcVar6 = '\x01';
    }
  }
  if (*pcVar6 == '\0') {
    sub_08076E8C(param_1,*(undefined4 *)(param_1 + 0x5c));
  }
  uVar4 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
  if (0x6000 < uVar4) {
    if (iVar7 != 0) {
      pcVar6 = (char *)(iVar7 + 0xb8);
      *pcVar6 = *pcVar6 + -1;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

