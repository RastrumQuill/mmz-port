// sub_080E0EB0 at 0x080E0EB0 (thumb)

int sub_080E0EB0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = sub_0800A104(param_1 + -0x700,param_2);
  iVar2 = sub_0800A104(param_1 + 0x700,param_2);
  if (iVar1 < iVar2) {
    iVar2 = iVar1;
  }
  return iVar2;
}

