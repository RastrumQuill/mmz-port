// sub_0806C09C at 0x0806C09C (thumb)

undefined4 sub_0806C09C(int param_1)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xaa11);
    sub_08002B10(0xd3);
    sub_08005784(param_1 + 0x74,&DAT_08858c70);
    iVar3 = *(int *)(param_1 + 0x5c);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    *(int *)(param_1 + 100) = iVar3 >> 2;
    *(undefined *)(param_1 + 0x12) = 4;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 100);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xf) = 1;
    return in_lr;
  }
  if (*(char *)(param_1 + 0xf) != '\x01') {
    return in_lr;
  }
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (*(int *)(param_1 + 0x54) < *(int *)(param_1 + 200) + 0x2000) {
      *(undefined *)(param_1 + 0xd) = 0x15;
      *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 10) & 0x10;
      return in_lr;
    }
  }
  else if (*(int *)(param_1 + 0xcc) + -0x2000 < *(int *)(param_1 + 0x54)) {
    uVar2 = 0x15;
    goto LAB_0806c162;
  }
  uVar2 = 0x13;
LAB_0806c162:
  *(undefined *)(param_1 + 0xd) = uVar2;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

