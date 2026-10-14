// sub_080BC638 at 0x080BC638 (thumb)

undefined4 sub_080BC638(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(undefined *)(param_1 + 0x25) = 0x11;
    *(undefined *)(param_1 + 0x12) = 6;
    sub_08017700(param_1,0x3300);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar2;
    break;
  case 2:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    iVar3 = sub_08017B8C(param_1);
    sub_080040A8(0x18,(uint)(iVar3 << 0x18) >> 0x13 | 0x200);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    cVar1 = sub_080041E4(0x18);
    if (cVar1 == '\x03') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    break;
  case 4:
    sub_08004230(0x18);
    *(undefined *)(param_1 + 0x12) = 6;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 0xc);
    }
    if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar2;
    sub_080177F4(param_1);
  default:
    goto switchD_080bc64c_caseD_6;
  }
  sub_080177F4(param_1);
switchD_080bc64c_caseD_6:
  return in_lr;
}

