// sub_08093528 at 0x08093528 (thumb)

undefined4 sub_08093528(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x9000);
    cVar1 = *(char *)(param_1 + 0x13);
    if (cVar1 != '\0') {
      cVar1 = '\x01';
    }
    *(char *)(param_1 + 0x12) = cVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar5;
  iVar3 = *(int *)(param_1 + 0x5c) * 0xfa;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar3 >> 8;
  iVar3 = sub_0800958C(iVar5,*(undefined4 *)(param_1 + 0x58));
  iVar3 = iVar3 + 0x800;
  sVar2 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (sVar2 != 0) {
    iVar5 = *(int *)(param_1 + 0x58) - iVar3;
    if (iVar5 < 0) {
      iVar5 = iVar3 - *(int *)(param_1 + 0x58);
    }
    if (0x1000 < iVar5) {
      *(undefined *)(param_1 + 0x12) = 1;
    }
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    if (iVar3 < *(int *)(param_1 + 0x58)) {
      iVar5 = -0x100;
    }
    else {
      iVar5 = 0x100;
    }
    iVar5 = *(int *)(param_1 + 0x58) + iVar5;
    *(int *)(param_1 + 0x58) = iVar5;
    iVar4 = iVar5 - iVar3;
    if (iVar4 < 0) {
      iVar4 = iVar3 - iVar5;
    }
    if (iVar4 < 0x400) {
      if (*(char *)(param_1 + 0x10) == '\0') {
        *(undefined *)(param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      else {
        *(undefined *)(param_1 + 0xd) = 4;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
  }
  else {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x100;
  }
  sub_080128D4(param_1);
  return in_lr;
}

