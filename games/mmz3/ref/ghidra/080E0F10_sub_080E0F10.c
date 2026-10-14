// sub_080E0F10 at 0x080E0F10 (thumb)

int sub_080E0F10(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = sub_0800A5A4(param_1 + -0x700,param_2);
  iVar2 = sub_0800A5A4(param_1 + 0x700,param_2);
  if (((iVar1 < 0) && (0 < iVar2)) || ((0 < iVar1 && (iVar2 < 0)))) {
    iVar2 = 0;
  }
  else if (((iVar1 < 0) && (iVar1 < iVar2)) || ((0 < iVar1 && (iVar2 < iVar1)))) {
    iVar2 = iVar1;
  }
  return iVar2;
}

