// sub_080360E0 at 0x080360E0 (thumb)

undefined4 sub_080360E0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 100);
  iVar2 = *(int *)(param_1 + 0x68);
  if (iVar2 < iVar3) {
    iVar1 = (iVar2 - iVar3) * 0xc;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    iVar3 = iVar3 + (iVar1 >> 8);
    *(int *)(param_1 + 100) = iVar3;
    if (iVar3 < iVar2) {
      *(int *)(param_1 + 100) = iVar2;
    }
  }
  return in_lr;
}

