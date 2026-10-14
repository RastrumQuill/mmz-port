// sub_080A85C8 at 0x080A85C8 (thumb)

undefined4 sub_080A85C8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x20);
  sub_0809C980();
  iVar2 = *(int *)(param_1 + 0x58);
  iVar1 = *(int *)(param_1 + 0x50) + iVar2;
  *(int *)(param_1 + 0x50) = iVar1;
  if (iVar2 < 1) {
    if (*(int *)(param_1 + 0xc0) + -0x2800 <= iVar1) goto LAB_080a8602;
  }
  else if (iVar1 <= *(int *)(param_1 + 0xc0) + 0x2800) goto LAB_080a8602;
  *(int *)(param_1 + 0x58) = -iVar2;
LAB_080a8602:
  if (*(char *)(iVar3 + 0xd) == '\x16') {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

