// sub_08067814 at 0x08067814 (thumb)

undefined4 sub_08067814(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xa911);
    sub_08002B10(100);
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) << 2;
    *(undefined *)(param_1 + 0x12) = 0x3c;
LAB_0806787a:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (((*(char *)(param_1 + 0xe) == '\x01') && ('\x02' < *(char *)(param_1 + 0x71))) &&
          (DAT_0202dbf0 != 0)) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar2 = 0x4b0;
    }
    else {
      uVar2 = 0xfffffb50;
    }
    *(undefined4 *)(DAT_0202dbf0 + 0xec) = uVar2;
    goto LAB_0806787a;
  }
  sub_0801CFF0(param_1);
  iVar4 = *(int *)(param_1 + 0x5c);
  if (iVar4 != 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar4;
    iVar4 = iVar4 + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x5c) = iVar4;
    uVar3 = *(byte *)(param_1 + 10) & 0x10;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      if (-1 < iVar4) goto LAB_080678b4;
    }
    else {
      if (iVar4 < 1) goto LAB_080678b4;
      uVar3 = 0;
    }
    *(uint *)(param_1 + 0x5c) = uVar3;
  }
LAB_080678b4:
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 0x11;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

