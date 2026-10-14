// sub_080E0EE0 at 0x080E0EE0 (thumb)

int sub_080E0EE0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = sub_0800A2CC(param_1 + -0x700,param_2);
  iVar2 = sub_0800A2CC(param_1 + 0x700,param_2);
  if (iVar2 < iVar1) {
    iVar2 = iVar1;
  }
  return iVar2;
}

