// sub_08057E5C at 0x08057E5C (thumb)

undefined4 sub_08057E5C(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08017700(param_1,0xb200);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
LAB_08057efe:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    break;
  case 2:
    sub_0800471C(0x8d);
    *(undefined *)(param_1 + 0x12) = 0x28;
    uVar2 = 0xb21a;
    goto LAB_08057ee6;
  case 3:
  case 5:
    goto switchD_08057e70_caseD_3;
  case 4:
    *(undefined *)(param_1 + 0x12) = 0x20;
    sub_0800471C(0x52);
    sub_0801ACF8(3,param_1 + 0x54);
    uVar2 = 0xb208;
LAB_08057ee6:
    sub_08017700(param_1,uVar2);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08057e70_caseD_3:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') goto LAB_08057efe;
    break;
  case 6:
    sub_08017700(param_1,0xb209);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    return in_lr;
  case 8:
    sub_08017700(param_1,0xb200);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 9:
    if ((DAT_020301b2 & 1) == 0) {
      *(byte *)(param_1 + 0xd) = DAT_020301b2 & 1;
      *(undefined *)(param_1 + 0xe) = 1;
      *(undefined *)(param_1 + 0x12) = 0x18;
    }
    sub_080177F4(param_1);
  default:
    goto switchD_08057e70_caseD_a;
  }
  sub_080177F4(param_1);
switchD_08057e70_caseD_a:
  return in_lr;
}

