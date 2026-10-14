// sub_080856BC at 0x080856BC (thumb)

undefined4 sub_080856BC(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined *)(param_1 + 0x12) = 0x3c;
    sub_08005784(param_1 + 0x74,&DAT_0885b6a4);
    sub_0801CF00(param_1,0x1b02);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    iVar3 = *(int *)(param_1 + 0x54);
    iVar2 = *(int *)(DAT_0202dbf0 + 0x54) - iVar3;
    if (iVar2 < 0) {
      iVar2 = iVar3 - *(int *)(DAT_0202dbf0 + 0x54);
    }
    if (iVar2 < 0x6000) {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  else {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    iVar3 = *(int *)(param_1 + 0x54);
  }
  uVar1 = sub_08008AA4(iVar3,*(int *)(param_1 + 0x58) + 0x400);
  sub_080852A8(param_1,uVar1,0x800);
  sub_0801CFF0(param_1);
  return in_lr;
}

