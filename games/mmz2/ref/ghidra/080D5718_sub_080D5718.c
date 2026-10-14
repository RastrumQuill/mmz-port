// sub_080D5718 at 0x080D5718 (thumb)

ulonglong sub_080D5718(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = 0;
  iVar2 = 3;
  piVar1 = (int *)(param_1 + 0x2b4);
  do {
    piVar1 = piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (*piVar1 != 0) {
      iVar3 = iVar3 + 1;
    }
  } while (iVar2 != 0);
  return CONCAT44(in_lr,iVar3) & 0xffffffff000000ff;
}

