// sub_0807A570 at 0x0807A570 (thumb)

undefined4 sub_0807A570(int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08006E08(param_1 + 0x74,&DAT_0833fff4);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_08012ACC(param_1);
  if (*(char *)(param_1 + 0xe) == '\x01') {
    sVar2 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 1);
    if (sVar2 != 0) goto LAB_0807a5e6;
    *(undefined4 *)(param_1 + 0x60) = 0;
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
  }
  else {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar4 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar4;
    if (0x700 < iVar4) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    sVar2 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (sVar2 == 0) goto LAB_0807a5e6;
    uVar3 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    cVar1 = '\x01';
  }
  *(char *)(param_1 + 0xe) = cVar1;
LAB_0807a5e6:
  if (*(int *)(param_1 + 0x2c) == 0) {
    sub_08006E08(param_1 + 0x74,&DAT_0833ffc4);
    *(undefined *)(param_1 + 0xd) = *(undefined *)(param_1 + 0xb8);
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

