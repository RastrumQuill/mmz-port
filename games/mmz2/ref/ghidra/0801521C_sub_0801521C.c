// sub_0801521C at 0x0801521C (thumb)

undefined4 sub_0801521C(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x1c) == '\0') {
    *(undefined2 *)(param_1 + 0x22) = 0;
    *(undefined *)(param_1 + 0x1c) = 1;
  }
  iVar3 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x50);
  *(int *)(param_1 + 0x4c) = iVar3;
  iVar1 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x54) = iVar1;
  piVar2 = *(int **)(param_1 + 0x48);
  if (piVar2 != (int *)0x0) {
    *(int *)(param_1 + 0x30) = *piVar2 + iVar3;
    *(int *)(param_1 + 0x34) = piVar2[1] + iVar1;
  }
  sub_0801504C(param_1,*(undefined *)(param_1 + 0x19));
  return in_lr;
}

