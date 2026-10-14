// sub_0806CA44 at 0x0806CA44 (thumb)

undefined4 sub_0806CA44(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xaa1c);
    sub_08005784(param_1 + 0x74,&DAT_08858c70);
    iVar2 = *(int *)(param_1 + 0x5c);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 7;
    }
    *(int *)(param_1 + 100) = iVar2 >> 3;
    *(undefined *)(param_1 + 0x12) = 8;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      *(undefined *)(param_1 + 0xf) = 1;
    }
  }
  else if ((*(char *)(param_1 + 0xf) == '\x01') && (*(char *)(param_1 + 0x73) == '\x03')) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

