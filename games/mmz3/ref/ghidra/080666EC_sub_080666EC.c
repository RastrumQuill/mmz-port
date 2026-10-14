// sub_080666EC at 0x080666EC (thumb)

undefined4 sub_080666EC(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 in_lr;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    goto switchD_08066702_caseD_0;
  case 1:
    goto switchD_08066702_caseD_1;
  case 2:
  case 6:
    break;
  case 3:
    sub_08017700(param_1,0x402);
    *(undefined *)(param_1 + 0x12) = 2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 4:
    if (*(char *)(param_1 + 0x12) != '\0') {
      bVar2 = *(char *)(param_1 + 0x12) - 1;
      *(byte *)(param_1 + 0x12) = bVar2;
      if (bVar2 == 0) {
        local_1c = *(undefined4 *)(param_1 + 0x58);
        if (*(char *)(param_1 + 0xbc) == '\0') {
          local_20 = *(int *)(param_1 + 0x54) + -0xe00;
          local_18 = 0xfffffd80;
        }
        else {
          local_20 = *(int *)(param_1 + 0x54) + 0xe00;
          local_18 = 0x280;
        }
        local_14 = (uint)bVar2;
        sub_0809C770(&local_20,&local_18,*(char *)(param_1 + 0xbc),0);
        sub_080B2484(3,&local_20);
        sub_0800471C(0x2c);
      }
    }
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    goto LAB_08066850;
  case 5:
    *(undefined *)(param_1 + 0x12) = 0xc;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    break;
  case 7:
    sub_08017700(param_1,0x403);
    sub_0800471C(0x103);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 8:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0xbd) = 1;
      sub_08007390(param_1 + 0x74,&DAT_0836252c);
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  default:
    goto switchD_08066702_caseD_9;
  }
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) != '\x03') {
    if (*(char *)(param_1 + 0x12) == '\0') {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
  }
  goto LAB_08066850;
switchD_08066702_caseD_0:
  sub_08017700(param_1,0x401);
  sub_0800471C(0x103);
  *(undefined *)(param_1 + 0xbd) = 1;
  sub_08007390(param_1 + 0x74,&DAT_083625d4);
  *(undefined *)(param_1 + 0x12) = 0;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08066702_caseD_1:
  cVar1 = *(char *)(param_1 + 0x12) + '\x01';
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\x02') {
    *(undefined *)(param_1 + 0xbd) = 1;
    sub_08007390(param_1 + 0x74,&DAT_083625d4);
  }
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0x12) = 0xc;
LAB_08066850:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
switchD_08066702_caseD_9:
  return in_lr;
}

