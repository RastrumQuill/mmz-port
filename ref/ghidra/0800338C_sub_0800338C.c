// sub_0800338C at 0x0800338C (thumb)

undefined4 sub_0800338C(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  undefined auStack_28 [24];
  
  if (*(int *)(param_1 + 0x10) != 0) {
    sub_08001F54(auStack_28,*(int *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
    iVar2 = 0;
    do {
      iVar1 = iVar2 * 4;
      iVar2 = iVar2 + 1;
      for (piVar3 = *(int **)(param_1 + iVar1); piVar3 != (int *)0x0; piVar3 = (int *)*piVar3) {
        sub_080C8A9C(piVar3,auStack_28,piVar3[1]);
      }
    } while (iVar2 < 4);
  }
  return in_lr;
}

