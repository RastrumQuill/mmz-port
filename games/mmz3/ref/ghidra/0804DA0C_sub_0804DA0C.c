// sub_0804DA0C at 0x0804DA0C (thumb)

undefined4 sub_0804DA0C(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 in_lr;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  sub_080041E4(0x49);
  sub_080041E4(0x4a);
  sub_080041E4(0x4b);
  sub_080041E4(0x4c);
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08017700(param_1,0xab25);
    if (((((*(uint *)(param_1 + 0x8c) & 0x200) == 0) && (*(short *)(param_1 + 0xa4) != 0)) ||
        ((DAT_020301a8 & 8) != 0)) || (cVar1 = *(char *)(param_1 + 0xf), cVar1 != '\x01')) {
      cVar1 = '\n';
    }
    *(char *)(param_1 + 0xe) = cVar1;
    *(uint *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    uVar5 = *(byte *)(param_1 + 10) & 0xfb;
    *(char *)(param_1 + 10) = (char)uVar5;
    if (*(int *)(param_1 + 200) == 0) {
      local_28 = *(int *)(param_1 + 0x54) + 0x1200;
      local_24 = *(int *)(param_1 + 0x58) + -0x5400;
      uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar4 & 0x7fffffff;
      uVar4 = uVar4 * 2 >> 0x11 & 3;
      sub_080BE7C4(&local_28,uVar5 >> 4 & 1,0xab28,uVar4);
      sub_080BE7C4(&local_28,*(byte *)(param_1 + 10) >> 4 & 1,0xab29,uVar4);
      sub_080BE7C4(&local_28,*(byte *)(param_1 + 10) >> 4 & 1,0xab2a,uVar4);
      sub_080BE7C4(&local_28,*(byte *)(param_1 + 10) >> 4 & 1,0xab2b,uVar4);
    }
    if (*(int *)(param_1 + 0xcc) == 0) {
      local_20 = *(int *)(param_1 + 0x54) + -0x1000;
      local_1c = *(int *)(param_1 + 0x58) + -0x5400;
      uVar5 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar5 & 0x7fffffff;
      uVar5 = uVar5 * 2 >> 0x11 & 3;
      sub_080BE7C4(&local_20,*(byte *)(param_1 + 10) >> 4 & 1,0xab28,uVar5);
      sub_080BE7C4(&local_20,*(byte *)(param_1 + 10) >> 4 & 1,0xab29,uVar5);
      sub_080BE7C4(&local_20,*(byte *)(param_1 + 10) >> 4 & 1,0xab2a,uVar5);
      sub_080BE7C4(&local_20,*(byte *)(param_1 + 10) >> 4 & 1,0xab2b,uVar5);
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
  case 1:
  case 10:
    sub_080177F4(param_1);
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x60) = 0;
    sub_0800471C(0x2f,*(undefined *)(param_1 + 10));
    break;
  case 3:
    sub_0809BE34(param_1,param_1 + 0x54,0xab27,*(byte *)(param_1 + 10) >> 4 & 1);
    sub_08017700(param_1,0xab26);
    sub_080177F4(param_1);
    *(undefined *)(param_1 + 0x12) = 0x44;
    break;
  case 4:
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 != '\0')) {
      return in_lr;
    }
  case 0xb:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x80) == 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xe) = 0x14;
    return in_lr;
  default:
    goto switchD_0804da3e_caseD_5;
  case 0x14:
    *(undefined *)(param_1 + 0x12) = 0x50;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0x15:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x80) == 0) {
      return in_lr;
    }
    break;
  case 0x16:
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      puVar3 = &DAT_0835fcb0;
    }
    else {
      puVar3 = &DAT_0835fcb8;
    }
    uVar2 = sub_080C73F8(param_1,puVar3);
    *(undefined4 *)(param_1 + 0xc0) = uVar2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0x17:
    if (*(byte *)(*(int *)(param_1 + 0xc0) + 0xc) < 2) {
      return in_lr;
    }
    break;
  case 0x18:
    *(undefined *)(param_1 + 0x12) = 0x48;
    sub_08004230(0x49);
    sub_08004230(0x4a);
    sub_08004230(0x4b);
    sub_08004230(0x4c);
    DAT_020301b2 = DAT_020301b2 | 2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0x19:
    if ((*(char *)(param_1 + 0x12) == '\0') ||
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    }
    goto switchD_0804da3e_caseD_5;
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0804da3e_caseD_5:
  return in_lr;
}

