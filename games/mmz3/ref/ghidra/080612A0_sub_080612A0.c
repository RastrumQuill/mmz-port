// sub_080612A0 at 0x080612A0 (thumb)

undefined4 sub_080612A0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  undefined4 local_10;
  undefined4 local_c;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08004230(0xa7);
    sub_08004230(0xa8);
    sub_08004230(0xa9);
    sub_08004230(0xaa);
    sub_080040A8(0xaa,0x2c0);
    sub_080AF95C(param_1,param_1 + 0x54,1);
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    sub_080041E4(0xaa);
    if (*(char *)(param_1 + 0x12) == '\0') {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    break;
  case 2:
    local_10 = 0xffffdd00;
    local_c = 0xffffaa00;
    uVar2 = sub_080AF95C(param_1,&local_10,3);
    *(undefined4 *)(param_1 + 0xc4) = uVar2;
    *(undefined *)(param_1 + 0x12) = 0xff;
    *(undefined *)(param_1 + 0x13) = 0xff;
    break;
  case 3:
    sub_080041E4(0xaa);
    if (*(byte *)(*(int *)(param_1 + 0xc4) + 0xc) < 2) {
      return in_lr;
    }
    *(int *)(param_1 + 0xc4) = 0;
    break;
  case 4:
    sub_08004230(0xaa);
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  default:
    goto switchD_080612b4_caseD_5;
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_080612b4_caseD_5:
  return in_lr;
}

