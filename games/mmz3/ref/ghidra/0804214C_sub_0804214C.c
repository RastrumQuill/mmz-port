// sub_0804214C at 0x0804214C (thumb)

undefined4 sub_0804214C(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0800471C(0x6d);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_0801749C(param_1);
    sub_080176EC(param_1);
    sub_08017700(param_1,0xa41f);
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x800;
    iVar2 = *(int *)(param_1 + 0xbc) + 0x6000;
    if (iVar2 < *(int *)(param_1 + 0x54)) {
      *(int *)(param_1 + 0x54) = iVar2;
    }
    else {
      iVar2 = *(int *)(param_1 + 0xbc) + -0x6000;
      if (*(int *)(param_1 + 0x54) < iVar2) {
        *(int *)(param_1 + 0x54) = iVar2;
      }
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar2 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar2;
  iVar3 = (*(int *)(param_1 + 0xc0) + 0x800) - iVar2;
  if ((iVar3 < 0) && (0 < *(int *)(param_1 + 0x60))) {
    *(int *)(param_1 + 0x58) = iVar2 + iVar3;
  }
  sub_080177F4(param_1);
  if ((((*(char *)(param_1 + 0x12) == '\0') ||
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0'))
      && (iVar3 < 0)) && (0 < *(int *)(param_1 + 0x60))) {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

