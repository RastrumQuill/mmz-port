// sub_08044E5C at 0x08044E5C (thumb)

ulonglong sub_08044E5C(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar3 = *(int *)(param_1 + 0x54);
    iVar1 = 0x6000;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x54);
    iVar1 = -0x6000;
  }
  uVar2 = sub_08044CD4(param_1,iVar3 + iVar1);
  return CONCAT44(in_lr,uVar2) & 0xffffffff000000ff;
}

