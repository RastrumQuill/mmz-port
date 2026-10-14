// sub_08047730 at 0x08047730 (thumb)

undefined4 sub_08047730(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08007390(param_1 + 0x74,&DAT_0835ee6c);
    *(undefined *)(param_1 + 0x25) = 0x18;
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0xb4);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + -0x5000;
    sub_08017700(param_1,0x3309);
    pcVar3 = (char *)(param_1 + 0xc6);
    if (*pcVar3 != '\0') {
      sub_08004230(*pcVar3);
      *pcVar3 = '\0';
    }
    iVar2 = sub_08017B8C(param_1);
    sub_080040A8(0x1b,(uint)(iVar2 << 0x18) >> 0x13 | 0x200);
    *pcVar3 = '\x1b';
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    sub_080041E4(*(undefined *)(param_1 + 0xc6));
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    break;
  case 2:
    sub_08017700(param_1,0x3400);
    pcVar3 = (char *)(param_1 + 0xc6);
    if (*pcVar3 != '\0') {
      sub_08004230(*pcVar3);
      *pcVar3 = '\0';
    }
    iVar2 = sub_08017B8C(param_1);
    sub_080040A8(0x1d,(uint)(iVar2 << 0x18) >> 0x13 | 0x200);
    *pcVar3 = '\x1d';
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    cVar1 = sub_080041E4(*(undefined *)(param_1 + 0xc6));
    if (cVar1 == '\x03') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    goto LAB_080478dc;
  case 4:
    *(undefined *)(param_1 + 0x13) = 0x10;
    iVar2 = 0;
    pcVar3 = (char *)(param_1 + 0xc6);
    do {
      sub_080BC178(param_1,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),0x1c0,
                   (uint)(iVar2 << 0x1d) >> 0x18);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 8);
    if (*pcVar3 != '\0') {
      sub_08004230();
      *pcVar3 = '\0';
    }
    iVar2 = sub_08017B8C(param_1);
    sub_080040A8(0x1e,(uint)(iVar2 << 0x18) >> 0x13 | 0x200);
    *pcVar3 = '\x1e';
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    cVar1 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar1;
    if (cVar1 == '\0') {
      if (*(char *)(param_1 + 0x11) == '\x01') {
        *(undefined *)(param_1 + 0xd) = 0x10;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      else {
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
    }
    sub_080041E4(*(undefined *)(param_1 + 0xc6));
LAB_080478dc:
    sub_080177F4(param_1);
    break;
  case 6:
    *(undefined *)(param_1 + 0x13) = 0x34;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    sub_080041E4(*(undefined *)(param_1 + 0xc6));
    sub_080177F4(param_1);
    if (*(byte *)(param_1 + 0x13) < 0x1b) {
      iVar2 = *(int *)(param_1 + 0x60) + 0xd;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x60) + -0xd;
    }
    *(int *)(param_1 + 0x60) = iVar2;
    cVar1 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar1;
    if (cVar1 == '\0') {
      *(undefined *)(param_1 + 0xd) = 9;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    sub_080041E4(*(undefined *)(param_1 + 0xc6));
    sub_080177F4(param_1);
  }
  return in_lr;
}

