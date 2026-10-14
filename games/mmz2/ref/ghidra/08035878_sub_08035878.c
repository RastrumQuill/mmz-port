// sub_08035878 at 0x08035878 (thumb)

undefined4 sub_08035878(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 != 0) {
    iVar3 = 4;
    piVar2 = (int *)(iVar1 + 0x2a0);
    do {
      piVar2 = piVar2 + -1;
      iVar3 = iVar3 + -1;
      if (*piVar2 == param_1) {
        *piVar2 = 0;
        *(char *)(iVar1 + 0x2ba) = *(char *)(iVar1 + 0x2ba) + -1;
        return in_lr;
      }
    } while (iVar3 != 0);
  }
  return in_lr;
}

