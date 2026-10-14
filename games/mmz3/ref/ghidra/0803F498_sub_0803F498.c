// sub_0803F498 at 0x0803F498 (thumb)

undefined4 sub_0803F498(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar2 & 0x7fffffff;
    uVar2 = uVar2 * 2 >> 0x11 & 3;
    bVar4 = (byte)uVar2;
    if (uVar2 == *(byte *)(param_1 + 0xca)) {
      bVar4 = bVar4 + 1 & 3;
    }
    *(byte *)(param_1 + 0xca) = bVar4;
    iVar5 = sub_080405B4(param_1);
    *(undefined *)(param_1 + 0x12) = 0x30;
    uVar3 = FUN_080fe2f8(iVar5 - *(int *)(param_1 + 0x54),0x30);
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    iVar5 = FUN_080fe2f8(0x12000,0x30);
    *(int *)(param_1 + 0x60) = -iVar5;
    *(undefined *)(param_1 + 0x12) = 0x2f;
    *(undefined *)(param_1 + 0x13) = 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0803f4ac_caseD_1:
    sub_080405D8(param_1);
    if ((*(char *)(param_1 + 0x13) == '\0') ||
       (cVar1 = *(char *)(param_1 + 0x13) + -1, *(char *)(param_1 + 0x13) = cVar1, cVar1 == '\0')) {
      cVar1 = *(char *)(param_1 + 0xe) + '\x01';
LAB_0803f5fa:
      *(char *)(param_1 + 0xe) = cVar1;
    }
switchD_0803f4ac_caseD_6:
    return in_lr;
  case 1:
    goto switchD_0803f4ac_caseD_1;
  case 2:
    sub_08017700(param_1,*(short *)(param_1 + 200) + 1U | 0xa200);
    sub_08007390(param_1 + 0x74,&DAT_0835e478);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    iVar5 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar5;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar5;
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 != '\0')) {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    goto LAB_0803f5fa;
  case 4:
    sub_08017700(param_1,*(short *)(param_1 + 200) + 2U | 0xa200);
    sub_08007390(param_1 + 0x74,&DAT_0835e448);
    uVar3 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x1000);
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    cVar1 = '\0';
    *(undefined *)(param_1 + 0xd) = 3;
    goto LAB_0803f5fa;
  default:
    goto switchD_0803f4ac_caseD_6;
  }
}

