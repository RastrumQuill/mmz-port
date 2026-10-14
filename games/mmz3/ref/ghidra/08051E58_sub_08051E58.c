// sub_08051E58 at 0x08051E58 (thumb)

undefined4 sub_08051E58(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_0800471C(0xe5);
    *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) & 0xffffffe3;
    sub_080BFD74(param_1,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    pcVar2 = (char *)(param_1 + 0xb8);
    if (*pcVar2 != '\0') {
      sub_08004230(*pcVar2);
      *pcVar2 = '\0';
    }
    iVar3 = sub_08017B8C(param_1);
    sub_080040A8(0x58,(uint)(iVar3 << 0x18) >> 0x13 | 0x200);
    *pcVar2 = 'X';
    sub_08017700(param_1,0x4d01);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    pcVar2 = (char *)(param_1 + 0xb8);
    if ((*(uint *)(param_1 + 0xb4) & 4) != 0) {
      if (*pcVar2 != '\0') {
        sub_08004230();
        *pcVar2 = '\0';
      }
      iVar3 = sub_08017B8C(param_1);
      sub_080040A8(0x59,(uint)(iVar3 << 0x18) >> 0x13 | 0x200);
      *pcVar2 = 'Y';
    }
    uVar4 = *(uint *)(param_1 + 0xb4);
    uVar5 = 8;
    break;
  case 2:
    sub_0800471C(0xe6);
    pcVar2 = (char *)(param_1 + 0xb8);
    if (*pcVar2 != '\0') {
      sub_08004230(*pcVar2);
      *pcVar2 = '\0';
    }
    iVar3 = sub_08017B8C(param_1);
    sub_080040A8(0x54,(uint)(iVar3 << 0x18) >> 0x13 | 0x200);
    *pcVar2 = 'T';
    sub_08080708(param_1);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    uVar4 = *(uint *)(param_1 + 0xb4);
    uVar5 = 0x10;
    break;
  case 4:
    *(undefined *)(param_1 + 0x12) = 0x18;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 1;
      *(undefined *)(param_1 + 0x12) = 0x46;
    }
    sub_080041E4(*(undefined *)(param_1 + 0xb8));
    sub_080177F4(param_1);
  default:
    goto switchD_08051e70_caseD_6;
  }
  if ((uVar4 & uVar5) != 0) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080041E4(*(undefined *)(param_1 + 0xb8));
  sub_080177F4(param_1);
switchD_08051e70_caseD_6:
  return in_lr;
}

