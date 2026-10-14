// sub_080090D8 at 0x080090D8 (thumb)

int sub_080090D8(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 + -0x400 + (param_1 >> 2);
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  else {
    iVar1 = -iVar1;
  }
  return iVar1;
}

