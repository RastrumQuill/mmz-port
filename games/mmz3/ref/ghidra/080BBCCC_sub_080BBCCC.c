// sub_080BBCCC at 0x080BBCCC (thumb)

undefined4 sub_080BBCCC(int param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) {
    sub_080B2484(1,param_1 + 0x54);
    sub_0800471C(0x2a);
    goto LAB_080bbf0e;
  }
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
    cVar3 = *(char *)(param_1 + 0x10);
    if (cVar3 == '\0') {
      sub_08017700(param_1,0xa605);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
      *(undefined *)(param_1 + 0x4d) = 0;
      bVar1 = *(byte *)(param_1 + 0x4a);
      bVar2 = 0xdf;
LAB_080bbd82:
      *(byte *)(param_1 + 0x4a) = bVar2 & bVar1;
    }
    else {
      if (cVar3 == '\x01') {
        sub_08017700(param_1,0xa602);
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
        *(undefined *)(param_1 + 0x4c) = 0;
        bVar1 = *(byte *)(param_1 + 0x4a);
        bVar2 = 0xef;
        goto LAB_080bbd82;
      }
      if (cVar3 == '\x02') {
        sub_08017700(param_1,0xa605);
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
        *(undefined *)(param_1 + 0x4d) = 1;
        bVar5 = 0x20;
        bVar1 = *(byte *)(param_1 + 0x4a);
        bVar2 = 0xdf;
      }
      else {
        sub_08017700(param_1,0xa602);
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
        *(undefined *)(param_1 + 0x4c) = 1;
        bVar5 = 0x10;
        bVar1 = *(byte *)(param_1 + 0x4a);
        bVar2 = 0xef;
      }
      *(byte *)(param_1 + 0x4a) = bVar2 & bVar1 | bVar5;
    }
    sub_0800471C(0);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_080bbcfc_caseD_1:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
LAB_080bbec2:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
switchD_080bbcfc_caseD_8:
    return in_lr;
  case 1:
    goto switchD_080bbcfc_caseD_1;
  case 2:
    *(undefined *)(param_1 + 0x12) = 10;
    cVar3 = *(char *)(param_1 + 0x10);
    if (cVar3 == '\0') {
LAB_080bbe28:
      uVar4 = 0xa606;
    }
    else {
      if (cVar3 != '\x01') {
        if (cVar3 != '\x02') {
          sub_08017700(param_1,0xa603);
          goto LAB_080bbea6;
        }
        goto LAB_080bbe28;
      }
      uVar4 = 0xa603;
    }
    sub_08017700(param_1,uVar4);
    goto LAB_080bbea6;
  case 3:
  case 5:
    goto switchD_080bbcfc_caseD_3;
  case 4:
    cVar3 = *(char *)(param_1 + 0x10);
    if (cVar3 == '\0') {
      local_10 = 0x2000;
      local_14 = 0;
    }
    else {
      if (cVar3 == '\x01') {
        local_14 = -0x2000;
      }
      else {
        if (cVar3 == '\x02') {
          local_14 = 0;
          local_10 = -0x2000;
          goto LAB_080bbe7c;
        }
        local_14 = 0x2000;
      }
      local_10 = 0;
    }
LAB_080bbe7c:
    local_14 = *(int *)(param_1 + 0x54) + local_14;
    local_10 = *(int *)(param_1 + 0x58) + local_10;
    sub_0809EF0C(*(undefined4 *)(param_1 + 0x28),&local_14);
    sub_0800471C(0x7e);
    sub_080177F4(param_1);
    *(undefined *)(param_1 + 0x12) = 10;
LAB_080bbea6:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_080bbcfc_caseD_3:
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar3 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar3, cVar3 != '\0')) {
      return in_lr;
    }
    goto LAB_080bbec2;
  case 6:
    cVar3 = *(char *)(param_1 + 0x10);
    if (cVar3 == '\0') {
LAB_080bbee0:
      uVar4 = 0xa607;
LAB_080bbee2:
      sub_08017700(param_1,uVar4);
    }
    else {
      if (cVar3 == '\x01') {
        uVar4 = 0xa604;
        goto LAB_080bbee2;
      }
      if (cVar3 == '\x02') goto LAB_080bbee0;
      sub_08017700(param_1,0xa604);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
LAB_080bbf0e:
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8)
      ;
    }
  default:
    goto switchD_080bbcfc_caseD_8;
  }
}

