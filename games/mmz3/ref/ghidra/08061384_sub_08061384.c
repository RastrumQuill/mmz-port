// sub_08061384 at 0x08061384 (thumb)

undefined4 sub_08061384(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  int local_10;
  int local_c;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08004230(0xa7);
    sub_08004230(0xa8);
    sub_08004230(0xa9);
    sub_08004230(0xaa);
    sub_080040A8(0xa8,0x2e0);
    sub_080C49D0(param_1,param_1 + 0x54,0);
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08061398_caseD_1:
    sub_080616C4(param_1);
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) {
LAB_08061448:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
switchD_08061398_caseD_5:
    return in_lr;
  case 1:
    goto switchD_08061398_caseD_1;
  case 2:
    local_10 = *(int *)(param_1 + 0x54) + -0x400;
    local_c = *(int *)(param_1 + 0x58) + -0x2200;
    uVar2 = sub_080AF9B4(param_1,&local_10,0);
    goto LAB_08061446;
  case 3:
    sub_080616C4(param_1);
    sub_080041E4(0xa8);
    if (*(byte *)(*(int *)(param_1 + 0xc4) + 0xc) < 2) {
      return in_lr;
    }
    uVar2 = 0;
LAB_08061446:
    *(undefined4 *)(param_1 + 0xc4) = uVar2;
    goto LAB_08061448;
  case 4:
    sub_080616C4(param_1);
    sub_08004230(0xa8);
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  default:
    goto switchD_08061398_caseD_5;
  }
}

