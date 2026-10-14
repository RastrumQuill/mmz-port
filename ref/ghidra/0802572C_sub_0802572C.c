// sub_0802572C at 0x0802572C (thumb)

undefined4 sub_0802572C(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x18) + 4);
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    goto switchD_08025746_caseD_0;
  case 1:
    goto switchD_08025746_caseD_1;
  case 2:
    *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) | 1;
    sub_08015F80(iVar3);
    *(undefined *)(iVar3 + 0x44) = 1;
    *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) | 0x10;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    local_14 = *(int *)(param_1 + 0x4c) + 0x7800;
    local_10 = *(int *)(param_1 + 0x50) + -0x4000;
    uVar1 = sub_0809A9B0(&local_14,4);
    *(undefined4 *)(param_1 + 0x24) = uVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 4:
    break;
  default:
    goto switchD_08025746_caseD_5;
  }
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) {
    return in_lr;
  }
  *(undefined *)(*(int *)(param_1 + 0x24) + 0xd) = 2;
  goto LAB_0802584c;
switchD_08025746_caseD_0:
  if (*(int *)(param_1 + 0x4c) == 0x335000) {
    uVar1 = 0;
  }
  else if (*(int *)(param_1 + 0x4c) < 0x335001) {
    *(undefined *)(param_1 + 0x44) = 1;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    uVar1 = 0x200;
  }
  else {
    *(undefined *)(param_1 + 0x44) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    uVar1 = 0xfffffe00;
  }
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_08015EEC(param_1,0x100);
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08025746_caseD_1:
  sub_08015F80(param_1);
  iVar2 = *(int *)(param_1 + 0x4c);
  if (iVar2 >> 9 == 0x19a8) {
    *(int *)(iVar3 + 0x4c) = iVar2;
LAB_0802584c:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else {
    *(int *)(param_1 + 0x4c) = iVar2 + *(int *)(param_1 + 0x54);
  }
switchD_08025746_caseD_5:
  return in_lr;
}

