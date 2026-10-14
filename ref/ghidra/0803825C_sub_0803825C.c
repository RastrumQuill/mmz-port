// sub_0803825C at 0x0803825C (thumb)

undefined4 sub_0803825C(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08001EAC(0x44);
    *(undefined *)(param_1 + 0xce) = 0;
    sub_0800561C(param_1 + 0x74,&DAT_082ad888);
    sub_08038A5C(param_1,0x10);
    uVar2 = sub_08033B30(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0xd0) = uVar2;
    *(undefined *)(param_1 + 0x12) = 0x5a;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0803826e_caseD_1:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
LAB_08038310:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
switchD_0803826e_caseD_6:
    return in_lr;
  case 1:
    goto switchD_0803826e_caseD_1;
  case 2:
    uVar2 = sub_08094D44(*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50) + 0x200,0);
    *(undefined4 *)(param_1 + 0xd4) = uVar2;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x02';
    *(uint *)(*(int *)(param_1 + 0xd4) + 0x54) = (uint)*(byte *)(param_1 + 0x12) << 1;
    if (*(byte *)(param_1 + 0x12) < 0xf1) {
      return in_lr;
    }
    goto LAB_08038310;
  case 4:
    *(undefined *)(*(int *)(param_1 + 0xd0) + 0x10) = 1;
    *(undefined *)(param_1 + 0x12) = 0x14;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      sub_08001EAC(0xcf);
      sub_080369F0(param_1);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined2 *)(param_1 + 0xe) = 0;
    }
  default:
    goto switchD_0803826e_caseD_6;
  }
}

