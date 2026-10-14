// sub_080838C4 at 0x080838C4 (thumb)

undefined4 sub_080838C4(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08006E08(param_1 + 0x74,&DAT_08341148);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_08012ACC(param_1);
  if (*(char *)(param_1 + 0xe) == '\x01') {
    cVar1 = sub_08083FD8(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (cVar1 == '\0') {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      iVar5 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar5;
      iVar3 = 0x700;
    }
    else {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      iVar5 = *(int *)(param_1 + 0x60) + 0x20;
      *(int *)(param_1 + 0x60) = iVar5;
      iVar3 = 0x380;
    }
    if (iVar3 < iVar5) {
      *(int *)(param_1 + 0x60) = iVar3;
    }
    sVar2 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if ((sVar2 != 0) &&
       (sVar2 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x5000),
       sVar2 != 0)) {
      uVar4 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar4;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
  }
  if (*(int *)(param_1 + 0x2c) == 0) {
    cVar1 = sub_08083FD8(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (cVar1 == '\0') {
      sVar2 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800);
      if (sVar2 == 0) {
        *(undefined *)(param_1 + 0xd) = 7;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      else {
        *(undefined *)(param_1 + 0xd) = 0xb;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
    else {
      *(undefined *)(param_1 + 0xd) = 0xc;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

