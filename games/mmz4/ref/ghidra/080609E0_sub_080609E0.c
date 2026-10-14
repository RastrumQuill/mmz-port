// sub_080609E0 at 0x080609E0 (thumb)

undefined4 sub_080609E0(int param_1)

{
  undefined uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xa510);
    iVar3 = FUN_081288bc(*(undefined4 *)(param_1 + 0x5c),10);
    *(int *)(param_1 + 100) = -iVar3;
    if (*(char *)(param_1 + 0xf) == '\0') {
      uVar1 = 0x1a;
    }
    else {
      uVar1 = 0x12;
    }
    *(undefined *)(param_1 + 0x12) = uVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0x73) != '\x03') {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar4 = *(int *)(param_1 + 0x5c);
      iVar3 = *(int *)(param_1 + 0x54) - iVar4;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x5c);
      iVar3 = *(int *)(param_1 + 0x54) + iVar4;
    }
    *(int *)(param_1 + 0x54) = iVar3;
    if (0x200 < iVar4) {
      *(int *)(param_1 + 0x5c) = iVar4 + *(int *)(param_1 + 100);
    }
  }
  if ((*(char *)(param_1 + 0xf) == '\0') && ((*(uint *)(*(int *)(param_1 + 0x2c) + 0x8c) & 4) != 0))
  {
    *(undefined *)(param_1 + 0xf) = 1;
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    if (*(char *)(param_1 + 0xf) == '\0') {
      uVar1 = 0x13;
    }
    else {
      uVar1 = 0x11;
    }
    *(undefined *)(param_1 + 0xd) = uVar1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

