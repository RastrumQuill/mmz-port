// sub_0804AA4C at 0x0804AA4C (thumb)

undefined4 sub_0804AA4C(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08007390(param_1 + 0x74,&DAT_0835efbc);
    sub_08017700(param_1,0xa72b);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x71) == '\x04') && (*(char *)(param_1 + 0x12) == '\0')) {
      sub_0800471C(0x5d);
      *(undefined *)(param_1 + 0xc0) = 2;
LAB_0804ab5c:
      uVar2 = *(undefined4 *)(param_1 + 0x54);
      uVar3 = *(undefined4 *)(param_1 + 0x58);
      bVar1 = *(byte *)(param_1 + 10);
      uVar4 = 0;
LAB_0804ab6a:
      sub_080A0308(uVar2,uVar3,uVar4,bVar1 >> 4 & 1);
    }
    break;
  case 2:
    sub_08017700(param_1,0xa72d);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x71) == '\x04') && (*(char *)(param_1 + 0x12) == '\0')) {
      *(undefined *)(param_1 + 0xc0) = 1;
      sub_0800471C(0x5d);
      uVar2 = *(undefined4 *)(param_1 + 0x54);
      uVar3 = *(undefined4 *)(param_1 + 0x58);
      bVar1 = *(byte *)(param_1 + 10);
      uVar4 = 1;
      goto LAB_0804ab6a;
    }
    break;
  case 4:
    sub_08017700(param_1,0xa72f);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x71) == '\x04') && (*(char *)(param_1 + 0x12) == '\0')) {
      *(undefined *)(param_1 + 0xc0) = 0;
      sub_0800471C(0x5d);
      goto LAB_0804ab5c;
    }
    break;
  case 6:
    sub_08017700(param_1,0xa731);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0xd) = 5;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  default:
    goto switchD_0804aa60_caseD_8;
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
switchD_0804aa60_caseD_8:
  return in_lr;
}

