// sub_08035A18 at 0x08035A18 (thumb)

undefined4 sub_08035A18(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0);
    *(undefined *)(*(int *)(param_1 + 0x24) + 0xe) = 1;
    *(undefined *)(*(int *)(param_1 + 0x24) + 0x11) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    if (*(char *)(param_1 + 0x10) == '\0') {
      iVar1 = *(int *)(param_1 + 0xb8);
      iVar3 = 0x12400;
    }
    else {
      iVar1 = *(int *)(param_1 + 0xb8);
      iVar3 = 0x11c00;
    }
    *(int *)(param_1 + 0x4c) = iVar1 + iVar3;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0xbc) + 0x3c00;
    uVar2 = sub_08008360(*(undefined4 *)(param_1 + 0x4c));
    *(undefined4 *)(param_1 + 0x50) = uVar2;
    *(undefined *)(param_1 + 0x12) = 0;
  }
  sub_080297C0(param_1);
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

