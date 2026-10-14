// sub_08009078 at 0x08009078 (thumb)

int sub_08009078(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 + -0x800 + (param_1 >> 1);
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  else {
    iVar1 = -iVar1;
  }
  return iVar1;
}

