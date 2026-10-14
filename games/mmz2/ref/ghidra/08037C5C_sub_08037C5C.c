// sub_08037C5C at 0x08037C5C (thumb)

ulonglong sub_08037C5C(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = 0;
  uVar1 = 0x10;
  do {
    uVar1 = uVar1 >> 1;
    if ((*(byte *)(param_1 + 0x211) & uVar1) != 0) {
      iVar2 = iVar2 + 1;
    }
  } while (uVar1 != 0);
  return CONCAT44(in_lr,iVar2) & 0xffffffff000000ff;
}

