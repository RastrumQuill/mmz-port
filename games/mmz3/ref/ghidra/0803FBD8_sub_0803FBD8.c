// sub_0803FBD8 at 0x0803FBD8 (thumb)

undefined4 sub_0803FBD8(int param_1)

{
  char cVar1;
  undefined uVar2;
  undefined uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    iVar6 = sub_080405B4(param_1,1);
    iVar4 = sub_080405B4(param_1,2);
    iVar5 = sub_080405B4(param_1,1);
    *(undefined *)(param_1 + 0x12) = 0x30;
    uVar7 = FUN_080fe2f8((iVar6 + (iVar4 - iVar5 >> 1)) - *(int *)(param_1 + 0x54),0x30);
    *(undefined4 *)(param_1 + 0x5c) = uVar7;
    iVar6 = FUN_080fe2f8(0x12000,0x30);
    *(int *)(param_1 + 0x60) = -iVar6;
    *(undefined *)(param_1 + 0x12) = 0x2f;
    *(undefined *)(param_1 + 0x13) = 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0803fbec_caseD_1:
    sub_080405D8(param_1);
    if ((*(char *)(param_1 + 0x13) == '\0') ||
       (cVar1 = *(char *)(param_1 + 0x13) + -1, *(char *)(param_1 + 0x13) = cVar1, cVar1 == '\0')) {
      cVar1 = *(char *)(param_1 + 0xe) + '\x01';
LAB_0803fe76:
      *(char *)(param_1 + 0xe) = cVar1;
    }
switchD_0803fbec_caseD_b:
    return in_lr;
  case 1:
    goto switchD_0803fbec_caseD_1;
  case 2:
    sub_08017700(param_1,*(short *)(param_1 + 200) + 1U | 0xa200);
    sub_08007390(param_1 + 0x74,&DAT_0835e478);
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    iVar6 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar6;
    if ((0 < iVar6) && (*(char *)(param_1 + 0x13) == '\0')) {
      *(undefined *)(param_1 + 0x13) = 1;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 != '\0')) {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    goto LAB_0803fe76;
  case 4:
    sub_0800471C(0x72);
    sub_08017700(param_1,*(short *)(param_1 + 200) + 2U | 0xa200);
    sub_08007390(param_1 + 0x74,&DAT_0835e448);
    uVar7 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x1000);
    *(undefined4 *)(param_1 + 0x58) = uVar7;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    goto LAB_0803fe76;
  case 6:
    sub_08017700(param_1,*(short *)(param_1 + 200) + 8U | 0xa200);
    sub_08007390(param_1 + 0x74,&DAT_0835e4d8);
    *(undefined *)(param_1 + 0x12) = 0xf0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x71) < '\x02') {
      return in_lr;
    }
    uVar2 = sub_080FE460(*(undefined *)(param_1 + 0xf),6);
    uVar2 = sub_080403E8(param_1,uVar2);
    *(undefined *)(param_1 + 0x13) = uVar2;
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    goto LAB_0803fe76;
  case 8:
    if ((*(byte *)(param_1 + 0xf) & 0xf) == 0) {
      uVar2 = *(undefined *)(param_1 + 0x13);
      uVar3 = sub_080FE460(*(byte *)(param_1 + 0xf),6);
      sub_08040324(param_1,uVar2,uVar3,0);
      uVar2 = *(undefined *)(param_1 + 0x13);
      uVar3 = sub_080FE460(*(undefined *)(param_1 + 0xf),6);
      sub_08040324(param_1,uVar2,uVar3,0x14);
    }
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    sub_080177F4(param_1);
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 != '\0')) {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    goto LAB_0803fe76;
  case 9:
    sub_08004768(0x72);
    sub_08017700(param_1,*(short *)(param_1 + 200) + 9U | 0xa200);
    *(undefined *)(param_1 + 0x12) = 0xff;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 10:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    cVar1 = '\0';
    *(undefined *)(param_1 + 0xd) = 3;
    goto LAB_0803fe76;
  default:
    goto switchD_0803fbec_caseD_b;
  }
}

