// sub_08097234 at 0x08097234 (thumb)

undefined4 sub_08097234(int param_1)

{
  undefined uVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0x5003);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffe40;
      uVar3 = 0xfffff000;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0x1c0;
      uVar3 = 0x1000;
    }
    *(undefined4 *)(param_1 + 100) = uVar3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (((*(char *)(param_1 + 0x71) == '\x02') || (*(char *)(param_1 + 0x71) == '\x06')) &&
     (*(char *)(param_1 + 0x72) < '\x02')) {
    sub_08002B10(0x137);
  }
  iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar4;
  iVar4 = sub_08008534(iVar4,*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0x58) = iVar4;
  if (((*(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54)) + 0x2800U < 0x5001) &&
     ((*(int *)(DAT_0202dbf0 + 0x58) - iVar4) + 0x3000U < 0x6001)) {
    uVar1 = 2;
  }
  else {
    sVar2 = sub_08007C7C(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 100),
                         *(int *)(param_1 + 0x58) + -0x1000);
    if (sVar2 != 0) {
      *(undefined *)(param_1 + 0xd) = 4;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    sVar2 = sub_08007C7C(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 100),
                         *(int *)(param_1 + 0x58) + 0x1000);
    if (sVar2 != 0) {
      return in_lr;
    }
    uVar1 = 4;
  }
  *(undefined *)(param_1 + 0xd) = uVar1;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

