// sub_08009090 at 0x08009090 (thumb)

int sub_08009090(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 + -0x1000 + (param_1 >> 2);
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  else {
    iVar1 = -iVar1;
  }
  return iVar1;
}

