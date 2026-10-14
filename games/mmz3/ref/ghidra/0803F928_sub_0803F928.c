// sub_0803F928 at 0x0803F928 (thumb)

undefined4 sub_0803F928(int param_1)

{
  char cVar1;
  undefined uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    if (*(int *)(param_1 + 0xc4) == 0) {
      *(undefined *)(param_1 + 0xe) = 10;
      return in_lr;
    }
    goto LAB_0803fb70;
  case 1:
    if (*(int *)(param_1 + 0xc4) != 0) {
      sub_08017700(param_1,*(short *)(param_1 + 200) + 0x12U | 0xa200);
      sub_08007390(param_1 + 0x74,&DAT_0835e448);
      *(undefined *)(param_1 + 0x13) = 3;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      goto switchD_0803f93c_caseD_2;
    }
    iVar4 = 0;
    break;
  case 2:
switchD_0803f93c_caseD_2:
    if (*(int *)(param_1 + 0xc4) == 0) {
      iVar4 = 0;
      break;
    }
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x73);
    goto joined_r0x0803fb20;
  case 3:
    if (*(int *)(param_1 + 0xc4) != 0) {
      sub_08017700(param_1,*(short *)(param_1 + 200) + 0x13U | 0xa200);
      sub_08007390(param_1 + 0x74,&DAT_0835e508);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      goto switchD_0803f93c_caseD_4;
    }
    iVar4 = 0;
    break;
  case 4:
switchD_0803f93c_caseD_4:
    if (*(int *)(param_1 + 0xc4) == 0) {
      iVar4 = 0;
      break;
    }
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    uVar5 = 0;
    if (*(char *)(param_1 + 0x13) != '\0') {
      do {
        sub_080401F0(param_1,uVar5 & 0xff);
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)(uint)*(byte *)(param_1 + 0x13));
    }
    sub_0800471C(0x6f);
    uVar2 = 2;
    goto LAB_0803fb6e;
  case 5:
    if (*(int *)(param_1 + 0xc4) != 0) {
      if ((*(char *)(param_1 + 0x12) != '\0') &&
         (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 != '\0'))
      {
        return in_lr;
      }
      goto LAB_0803fb70;
    }
    iVar4 = 0;
    break;
  case 6:
    if (*(int *)(param_1 + 0xc4) != 0) {
      sub_08017700(param_1,*(short *)(param_1 + 200) + 0x14U | 0xa200);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      goto switchD_0803f93c_caseD_7;
    }
    iVar4 = 0;
    break;
  case 7:
switchD_0803f93c_caseD_7:
    iVar4 = *(int *)(param_1 + 0xc4);
    if (iVar4 != 0) {
      sub_080177F4(param_1);
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    break;
  default:
    goto switchD_0803f93c_caseD_8;
  case 10:
    sub_08017700(param_1,*(short *)(param_1 + 200) + 0x12U | 0xa200);
    sub_0800471C(0x73);
    sub_08007390(param_1 + 0x74,&DAT_0835e448);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0xb:
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x73);
joined_r0x0803fb20:
    if (cVar1 != '\x03') {
      return in_lr;
    }
LAB_0803fb70:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    return in_lr;
  case 0xc:
    sub_08017700(param_1,*(short *)(param_1 + 200) + 0x13U | 0xa200);
    *(undefined *)(param_1 + 0xd0) = 1;
    sub_08007390(param_1 + 0x74,&DAT_0835e508);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0xd:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    uVar2 = 8;
LAB_0803fb6e:
    *(undefined *)(param_1 + 0x12) = uVar2;
    goto LAB_0803fb70;
  case 0xe:
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 != '\0')) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xd0) = 0;
    *(undefined4 *)(param_1 + 0xc4) = 0;
    uVar3 = sub_0809EA8C(param_1,2);
    *(undefined4 *)(param_1 + 0xc4) = uVar3;
    iVar4 = 0;
    *(undefined2 *)(param_1 + 200) = 0;
  }
  *(undefined *)(param_1 + 0xd) = 3;
  *(char *)(param_1 + 0xe) = (char)iVar4;
switchD_0803f93c_caseD_8:
  return in_lr;
}

