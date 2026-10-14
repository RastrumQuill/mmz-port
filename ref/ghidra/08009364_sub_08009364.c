// sub_08009364 at 0x08009364 (thumb)

int sub_08009364(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_1 < 0xc00) || (iVar1 = param_2 + -0x1000 + (param_1 + -0xc00) * 4, iVar1 < 1)) {
    iVar1 = 0;
  }
  else {
    iVar1 = -iVar1;
  }
  return iVar1;
}

