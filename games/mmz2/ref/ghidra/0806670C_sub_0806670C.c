// sub_0806670C at 0x0806670C (thumb)

undefined4 sub_0806670C(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x6d00);
    iVar2 = *(int *)(param_1 + 0x5c);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0x1f;
    }
    *(int *)(param_1 + 100) = iVar2 >> 5;
    *(undefined *)(param_1 + 0x12) = 0x1f;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar2;
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 100);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if ((cVar1 == -1) ||
     (uVar3 = sub_08008CFC(iVar2,*(int *)(param_1 + 0x58) + 0x800), (uVar3 & 0x1000) == 0)) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  else {
    uVar4 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar4;
  }
  return in_lr;
}

