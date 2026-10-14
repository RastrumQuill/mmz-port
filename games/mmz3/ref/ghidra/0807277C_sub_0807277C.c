// sub_0807277C at 0x0807277C (thumb)

undefined4 sub_0807277C(int param_1)

{
  char cVar1;
  undefined uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 in_lr;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08017700(param_1,0x2702);
    sub_08007390(param_1 + 0x74,&DAT_083633d8);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    break;
  case 2:
    sub_08017700(param_1,0x2703);
    *(undefined *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    iVar6 = *(int *)(param_1 + 0x5c) + (*(int *)(param_1 + 0x5c) * -0xb >> 8);
    *(int *)(param_1 + 0x5c) = iVar6;
    iVar5 = *(int *)(param_1 + 0x60) + (*(int *)(param_1 + 0x60) * -0xb >> 8);
    *(int *)(param_1 + 0x60) = iVar5;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar6;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar5;
    sub_080733A0(param_1);
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x12) != '\0') {
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
joined_r0x0807295e:
      if (cVar1 != '\0') {
        return in_lr;
      }
    }
    goto LAB_08072ad2;
  case 4:
    sub_08017700(param_1,0x2704);
    goto LAB_08072a90;
  case 5:
  case 9:
    goto switchD_0807279a_caseD_5;
  case 6:
    sub_08017700(param_1,0x2705);
    sub_08007390(param_1 + 0x74,&DAT_08363408);
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    iVar6 = *(int *)(param_1 + 0x5c) + (*(int *)(param_1 + 0x5c) * -0xb >> 8);
    *(int *)(param_1 + 0x5c) = iVar6;
    iVar5 = *(int *)(param_1 + 0x60) + (*(int *)(param_1 + 0x60) * -0xb >> 8);
    *(int *)(param_1 + 0x60) = iVar5;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar6;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar5;
    sub_080733A0(param_1);
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x12) != '\0') {
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      goto joined_r0x0807295e;
    }
    goto LAB_08072ad2;
  case 8:
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_28 = -0x1e00;
    }
    else {
      local_28 = 0x1e00;
    }
    local_28 = *(int *)(param_1 + 0x54) + local_28;
    local_24 = *(int *)(param_1 + 0x58) + -0x1d00;
    sub_080733A0(param_1);
    sub_08017700(param_1,0x2706);
    sub_0809CA1C(&local_28,&local_28,*(byte *)(param_1 + 10) >> 4 & 1);
    sub_0800471C(99);
    uVar7 = 0;
    do {
      if ((uVar7 & 3) == 0) {
        bVar4 = *(byte *)(param_1 + 10);
        if ((bVar4 & 0x10) == 0) {
          iVar6 = *(int *)(param_1 + 0x54) + -0x3000;
          uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
          DAT_0202f608 = uVar3 & 0x7fffffff;
          local_28 = iVar6;
          iVar5 = sub_080FE4D8(uVar3 * 2 >> 0x11,0xc);
          local_28 = iVar6 + (iVar5 + uVar7) * 0x100;
        }
        else {
          iVar6 = *(int *)(param_1 + 0x54) + 0x3000;
          uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
          DAT_0202f608 = uVar3 & 0x7fffffff;
          local_28 = iVar6;
          iVar5 = sub_080FE4D8(uVar3 * 2 >> 0x11,0xc);
          local_28 = iVar6 + (iVar5 + uVar7) * -0x100;
        }
        uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
        DAT_0202f608 = uVar3 & 0x7fffffff;
        local_24 = *(int *)(param_1 + 0x58) + -0x1d00 + ((uVar3 * 2 >> 0x11 & 3) - 1) * 0x100;
        sub_080BA40C(&local_28,uVar7 & 1,((uint)bVar4 << 0x18) >> 0x1c & 1);
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < 8);
LAB_08072a90:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    goto switchD_0807279a_caseD_5;
  case 10:
    sub_08017700(param_1,0x2707);
    sub_08007390(param_1 + 0x74,&DAT_083633d8);
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0xb:
    iVar6 = *(int *)(param_1 + 0x5c) + (*(int *)(param_1 + 0x5c) * -0xb >> 8);
    *(int *)(param_1 + 0x5c) = iVar6;
    iVar5 = *(int *)(param_1 + 0x60) + (*(int *)(param_1 + 0x60) * -0xb >> 8);
    *(int *)(param_1 + 0x60) = iVar5;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar6;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar5;
    sub_080733A0(param_1);
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x73) == '\x03') &&
       ((*(char *)(param_1 + 0x12) == '\0' ||
        (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')))
       ) {
      if (*(int *)(DAT_0202f5c0 + 0x54) < *(int *)(param_1 + 0x54)) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
        *(undefined *)(param_1 + 0x4c) = 0;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      }
      else {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
        *(undefined *)(param_1 + 0x4c) = 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
      }
      uVar2 = sub_08073290(param_1);
      *(undefined *)(param_1 + 0xb9) = uVar2;
      *(undefined *)(param_1 + 0xba) = 0x1e;
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  default:
    goto switchD_0807279a_caseD_c;
  }
  bVar4 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar4;
  if ((bVar4 & 3) == 0) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar5 = -0x1000;
    }
    else {
      iVar5 = 0x1000;
    }
    uVar7 = DAT_0202f608 * 0x343fd + 0x269ec3;
    local_30 = ((uVar7 * 2 >> 0x11 & 7) - 3) * 0x100 + *(int *)(param_1 + 0x54) + iVar5;
    uVar7 = (uVar7 & 0x7fffffff) * 0x343fd + 0x269ec3;
    local_2c = ((uVar7 * 2 >> 0x11 & 7) - 3) * 0x100 + *(int *)(param_1 + 0x58) + -0x1000;
    uVar7 = (uVar7 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar7 & 0x7fffffff;
    sub_080BA3B4(&local_30,uVar7 * 2 >> 0x11 & 1);
  }
switchD_0807279a_caseD_5:
  iVar6 = *(int *)(param_1 + 0x5c) + (*(int *)(param_1 + 0x5c) * -0xb >> 8);
  *(int *)(param_1 + 0x5c) = iVar6;
  iVar5 = *(int *)(param_1 + 0x60) + (*(int *)(param_1 + 0x60) * -0xb >> 8);
  *(int *)(param_1 + 0x60) = iVar5;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar6;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar5;
  sub_080733A0(param_1);
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
LAB_08072ad2:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
switchD_0807279a_caseD_c:
  return in_lr;
}

