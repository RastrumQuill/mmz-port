// sub_080A8428 at 0x080A8428 (thumb)

undefined4 sub_080A8428(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x20);
  sub_0809C980();
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar2 = *(int *)(param_1 + 0x50) + 0x600;
    *(int *)(param_1 + 0x50) = iVar2;
    iVar3 = *(int *)(iVar3 + 0xbc) + 0x11000;
    if (iVar2 <= iVar3) goto LAB_080a8486;
    *(int *)(param_1 + 0x50) = iVar3;
    *(undefined *)(param_1 + 0x12) = 0x40;
    sub_0801412C(8,param_1 + 0x4c);
    sub_08001EAC(0xac);
    cVar1 = *(char *)(param_1 + 0xf) + '\x01';
  }
  else {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) goto LAB_080a8486;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    cVar1 = '\0';
  }
  *(char *)(param_1 + 0xf) = cVar1;
LAB_080a8486:
  sub_0809C980(param_1);
  return in_lr;
}

