// sub_08060954 at 0x08060954 (thumb)

undefined4 sub_08060954(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xa50f);
    *(undefined4 *)(param_1 + 0x5c) = 0x200;
    *(undefined4 *)(param_1 + 100) = 0x28;
    *(undefined *)(param_1 + 0x12) = 0x10;
    uVar2 = sub_080C5F18(param_1,0);
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar4 = *(int *)(param_1 + 0x5c);
    iVar3 = *(int *)(param_1 + 0x54) - iVar4;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x5c);
    iVar3 = *(int *)(param_1 + 0x54) + iVar4;
  }
  *(int *)(param_1 + 0x54) = iVar3;
  *(int *)(param_1 + 0x5c) = iVar4 + *(int *)(param_1 + 100);
  if (*(char *)(*(int *)(param_1 + 0x2c) + 0xd) == '\0') {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      *(undefined *)(param_1 + 0xd) = 0x10;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  else {
    *(undefined *)(param_1 + 0xd) = 0x10;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 1;
  }
  return in_lr;
}

