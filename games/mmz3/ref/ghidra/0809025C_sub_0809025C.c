// sub_0809025C at 0x0809025C (thumb)

undefined4 sub_0809025C(int param_1)

{
  undefined uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  byte *pbVar7;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08007390(param_1 + 0x74,&DAT_08365e00);
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
    sub_08017700(param_1,0x7e06);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    if (*(int *)(param_1 + 0x60) < 1) {
      uVar1 = 0x14;
    }
    else {
      uVar1 = 2;
    }
    *(undefined *)(param_1 + 0xe) = uVar1;
    sub_080177F4(param_1);
switchD_08090270_caseD_2:
    pbVar7 = (byte *)(param_1 + 0xb9);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      if (*(char *)(param_1 + 0x13) == '\0') {
        *pbVar7 = *pbVar7 + 1;
        cVar2 = '\x05';
      }
      else {
        cVar2 = *(char *)(param_1 + 0x13) + -1;
      }
      *(char *)(param_1 + 0x13) = cVar2;
      *(int *)(param_1 + 0x68) =
           *(int *)(param_1 + 0x68) - *(int *)(&DAT_08365f78 + (uint)*(byte *)(param_1 + 0x13) * 4);
      sub_08017700(param_1,*(undefined2 *)(&DAT_08365f6c + (uint)*(byte *)(param_1 + 0x13) * 2));
    }
    sub_080177F4(param_1);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x68);
    if (3 < *pbVar7) {
      *pbVar7 = 0;
      uVar6 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar6 & 0x7fffffff;
      if (*(int *)(&DAT_08365ef0 + (uVar6 * 2 >> 0x11 & 0xf) * 4) != 0) {
        *(undefined *)(param_1 + 0xd) = 3;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
    if (*(char *)(param_1 + 0xd) == '\x03') {
      return in_lr;
    }
    iVar4 = sub_08009B28(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (iVar4 != 0) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    if (*(char *)(param_1 + 0xb8) == '\x01') {
      iVar4 = sub_0800A3C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      if (iVar4 == *(int *)(param_1 + 0x54) + 0x2000) {
        return in_lr;
      }
      uVar5 = 0xffffff34;
LAB_08090576:
      *(undefined4 *)(param_1 + 0x60) = uVar5;
      *(undefined *)(param_1 + 0xe) = 1;
      return in_lr;
    }
    iVar4 = sub_0800A4B4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (iVar4 == *(int *)(param_1 + 0x54) + -0x2000) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0x60) = 0xffffff34;
    cVar2 = '\x01';
    break;
  case 2:
    goto switchD_08090270_caseD_2;
  case 3:
    uVar6 = (uint)CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70));
    if ((1 < uVar6 - 0x7e06) && (uVar6 != 0x7e0b)) {
      if (*(char *)(param_1 + 0x73) != '\x03') goto LAB_0809061e;
      if (*(char *)(param_1 + 0xb8) == '\x01') {
        if (*(char *)(param_1 + 0x13) == '\0') {
LAB_0809046e:
          cVar2 = '\x05';
        }
        else {
          cVar2 = *(char *)(param_1 + 0x13) + -1;
        }
      }
      else {
        if (*(char *)(param_1 + 0x13) == '\0') goto LAB_0809046e;
        cVar2 = *(char *)(param_1 + 0x13) + -1;
      }
LAB_0809060c:
      *(char *)(param_1 + 0x13) = cVar2;
LAB_0809060e:
      sub_08017700(param_1,*(undefined2 *)(&DAT_08365f6c + (uint)*(byte *)(param_1 + 0x13) * 2));
LAB_0809061e:
      sub_080177F4(param_1);
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 4:
    sub_08017700(param_1,0x7e0d);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    if (*(char *)(param_1 + 0xb8) == '\x01') {
      uVar5 = 0xffffff34;
    }
    else {
LAB_08090660:
      uVar5 = 0xcc;
    }
LAB_08090662:
    *(undefined4 *)(param_1 + 0x5c) = uVar5;
    cVar2 = '\0';
    *(undefined *)(param_1 + 0xd) = 0;
    break;
  default:
    goto switchD_08090270_caseD_6;
  case 0x14:
    pbVar7 = (byte *)(param_1 + 0xb9);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      bVar3 = *(char *)(param_1 + 0x13) + 1;
      *(byte *)(param_1 + 0x13) = bVar3;
      if (5 < bVar3) {
        *pbVar7 = *pbVar7 + 1;
        *(undefined *)(param_1 + 0x13) = 0;
      }
      *(int *)(param_1 + 0x68) =
           *(int *)(param_1 + 0x68) + *(int *)(&DAT_08365f90 + (uint)*(byte *)(param_1 + 0x13) * 4);
      sub_08017700(param_1,*(undefined2 *)(&DAT_08365f6c + (uint)*(byte *)(param_1 + 0x13) * 2));
    }
    sub_080177F4(param_1);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x68);
    if (3 < *pbVar7) {
      *pbVar7 = 0;
      uVar6 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar6 & 0x7fffffff;
      if (*(int *)(&DAT_08365ef0 + (uVar6 * 2 >> 0x11 & 0xf) * 4) != 0) {
        *(undefined *)(param_1 + 0xd) = 3;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
    if (*(char *)(param_1 + 0xd) == '\x03') {
      return in_lr;
    }
    iVar4 = sub_08009C90(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x6000);
    if (iVar4 != 0) {
      *(undefined4 *)(param_1 + 0x60) = 0xcc;
      *(undefined *)(param_1 + 0xe) = 1;
    }
    if (*(char *)(param_1 + 0xb8) == '\x01') {
      iVar4 = sub_0800A3C4(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x3000);
      if (iVar4 == *(int *)(param_1 + 0x54) + 0x2000) {
        return in_lr;
      }
      uVar5 = 0xcc;
      goto LAB_08090576;
    }
    iVar4 = sub_0800A4B4(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x3000);
    if (iVar4 == *(int *)(param_1 + 0x54) + -0x2000) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0x60) = 0xcc;
    cVar2 = '\x01';
    break;
  case 0x15:
    uVar6 = (uint)CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70));
    if ((1 < uVar6 - 0x7e06) && (uVar6 != 0x7e0b)) {
      if (*(char *)(param_1 + 0x73) != '\x03') goto LAB_0809061e;
      bVar3 = *(char *)(param_1 + 0x13) + 1;
      *(byte *)(param_1 + 0x13) = bVar3;
      if (5 < bVar3) {
        cVar2 = '\0';
        goto LAB_0809060c;
      }
      goto LAB_0809060e;
    }
    cVar2 = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 0x16:
    sub_08017700(param_1,0x7e0d);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0x17:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    if (*(char *)(param_1 + 0xb8) != '\x01') goto LAB_08090660;
    uVar5 = 0xffffff34;
    goto LAB_08090662;
  }
  *(char *)(param_1 + 0xe) = cVar2;
switchD_08090270_caseD_6:
  return in_lr;
}

