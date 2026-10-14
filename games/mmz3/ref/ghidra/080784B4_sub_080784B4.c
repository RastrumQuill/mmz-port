// sub_080784B4 at 0x080784B4 (thumb)

undefined4 sub_080784B4(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(undefined *)(param_1 + 0x12) = 2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    break;
  case 2:
    goto switchD_080784ca_caseD_2;
  case 3:
    *(undefined *)(param_1 + 0x13) = 4;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 4:
    iVar2 = sub_08063614(*(undefined4 *)(param_1 + 0x28));
    if (iVar2 != 0) {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      *(undefined *)(param_1 + 0xd) = 7;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    cVar1 = '\x01';
    goto LAB_080785a8;
  default:
    return in_lr;
  }
  uVar3 = (uint)*(byte *)(param_1 + 0x24);
  local_18 = *(short *)((int)&DAT_080fe64c + ((uVar3 + 0x80) * 0x1000000 >> 0x17)) * 0xe +
             *(int *)(param_1 + 0x54);
  local_14 = *(short *)((int)&DAT_080fe64c + ((uVar3 + 0x40) * 0x1000000 >> 0x17)) * 0xe +
             *(int *)(param_1 + 0x58);
  sub_0809C41C(&local_18,0x200,uVar3 - 0x40 & 0xff);
  sub_0800471C(0x2c);
  sub_08017700(param_1,0x2f08);
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_080784ca_caseD_2:
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
LAB_080785a8:
    *(char *)(param_1 + 0xe) = cVar1;
  }
  return in_lr;
}

