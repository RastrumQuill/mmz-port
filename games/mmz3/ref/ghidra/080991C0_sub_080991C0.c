// sub_080991C0 at 0x080991C0 (thumb)

undefined4 sub_080991C0(int param_1)

{
  char cVar1;
  undefined uVar2;
  char *pcVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08017700(param_1,0xd507);
    sub_08007390(param_1 + 0x74,&DAT_08366ca0);
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    sub_080177F4(param_1);
    break;
  case 2:
    sub_08017700(param_1,0xd508);
    sub_08007390(param_1 + 0x74,&DAT_08366ce8);
    *(undefined *)(param_1 + 0x12) = 0x32;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    if (((*(uint *)(param_1 + 0x8c) & 4) != 0) && ((*(uint *)(param_1 + 0x90) & 4) == 0)) {
      sub_0800471C(0x52);
    }
    sub_080177F4(param_1);
    pcVar3 = (char *)(param_1 + 0x71);
    if ((*pcVar3 == '\x04') && (*(char *)(param_1 + 0x13) == '\0')) {
      *(undefined *)(param_1 + 0x13) = 1;
      sub_08007390(param_1 + 0x74,&DAT_08366d30);
    }
    if ((*pcVar3 == '\x05') && (*(char *)(param_1 + 0x13) == '\x01')) {
      *(undefined *)(param_1 + 0x13) = 2;
      sub_08007390(param_1 + 0x74,&DAT_08366d78);
    }
    if ((*pcVar3 == '\x06') && (*(char *)(param_1 + 0x13) == '\x02')) {
      *(undefined *)(param_1 + 0x13) = 3;
      puVar4 = &DAT_08366dc0;
LAB_08099358:
      sub_08007390(param_1 + 0x74,puVar4);
    }
LAB_0809935c:
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    break;
  case 4:
    sub_08017700(param_1,0xd509);
    sub_08007390(param_1 + 0x74,&DAT_08366d78);
    *(undefined *)(param_1 + 0x12) = 8;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    if (((*(uint *)(param_1 + 0x8c) & 4) != 0) && ((*(uint *)(param_1 + 0x90) & 4) == 0)) {
      sub_0800471C(0x52);
    }
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x71) == '\x01') && (*(char *)(param_1 + 0x13) == '\0')) {
      *(undefined *)(param_1 + 0x13) = 1;
      sub_08007390(param_1 + 0x74,&DAT_08366d30);
    }
    if ((*(char *)(param_1 + 0x71) == '\x02') && (*(char *)(param_1 + 0x13) == '\x01')) {
      *(undefined *)(param_1 + 0x13) = 2;
      puVar4 = &DAT_08366ce8;
      goto LAB_08099358;
    }
    goto LAB_0809935c;
  case 6:
    iVar5 = *(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54);
    if (iVar5 < 1) {
      if (0x39ff < *(int *)(param_1 + 0x54) - *(int *)(DAT_0202f5c0 + 0x54)) goto LAB_080993c0;
LAB_080993b4:
      uVar2 = 3;
    }
    else {
      if (iVar5 < 0x3a00) goto LAB_080993b4;
LAB_080993c0:
      uVar2 = 2;
    }
    *(undefined *)(param_1 + 0xd) = uVar2;
    *(undefined *)(param_1 + 0xe) = 0;
  default:
    goto switchD_080991d4_caseD_7;
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
switchD_080991d4_caseD_7:
  return in_lr;
}

