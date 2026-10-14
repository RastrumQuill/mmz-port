// sub_080B7FF4 at 0x080B7FF4 (thumb)

undefined4 sub_080B7FF4(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08002B10(0x59);
    *(undefined *)(param_1 + 0x13) = 0x27;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  iVar2 = *(int *)(param_1 + 0x54);
  iVar3 = FUN_081288bc(*(int *)(iVar5 + 0xb4) - (iVar2 + 0x200),*(undefined *)(param_1 + 0x13));
  *(int *)(param_1 + 0x5c) = iVar3;
  iVar6 = *(int *)(param_1 + 0x58);
  iVar4 = FUN_081288bc(*(int *)(iVar5 + 0xb8) - (iVar6 + -0x2800),*(undefined *)(param_1 + 0x13));
  *(int *)(param_1 + 0x60) = iVar4;
  *(int *)(param_1 + 0x54) = iVar3 + iVar2;
  *(int *)(param_1 + 0x58) = iVar6 + iVar4;
  *(char *)(param_1 + 0x24) = -*(char *)(param_1 + 0x13);
  cVar1 = *(char *)(param_1 + 0x13) + -1;
  *(char *)(param_1 + 0x13) = cVar1;
  if (cVar1 == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(iVar5 + 0xb4) + -0x200;
    *(int *)(param_1 + 0x58) = *(int *)(iVar5 + 0xb8) + 0x2800;
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

