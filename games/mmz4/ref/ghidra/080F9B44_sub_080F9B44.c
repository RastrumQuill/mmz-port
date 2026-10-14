// sub_080F9B44 at 0x080F9B44 (thumb)

undefined4 sub_080F9B44(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  sub_0801CFF0();
  if ((*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0xb4)) && (DAT_0202dad4 != '\0')) {
    iVar1 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar1;
    iVar2 = *(int *)(param_1 + 0xb4);
    if (iVar1 < iVar2) {
      *(int *)(param_1 + 0x58) = iVar2;
    }
  }
  return in_lr;
}

