// sub_08003420 at 0x08003420 (thumb)

undefined4 sub_08003420(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 in_lr;
  undefined auStack_28 [24];
  
  if (*(int *)(param_1 + 0x204) != 0) {
    sub_08002C40(auStack_28,*(int *)(param_1 + 0x204),*(undefined4 *)(param_1 + 0x208));
    iVar1 = 0;
    piVar3 = *(int **)(param_1 + 0x200);
    do {
      iVar1 = iVar1 + 1;
      for (piVar2 = (int *)*piVar3; piVar2 != (int *)0x0; piVar2 = (int *)*piVar2) {
        sub_08128888(piVar2,auStack_28,piVar2[1]);
      }
      piVar3 = piVar3 + 1;
    } while (iVar1 < 0x80);
  }
  return in_lr;
}

