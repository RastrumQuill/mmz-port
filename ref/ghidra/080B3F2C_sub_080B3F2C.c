// sub_080B3F2C at 0x080B3F2C (thumb)

int sub_080B3F2C(char param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_0202320c + 0x14;
  if (param_2 == 0) {
    param_2 = iVar2;
  }
  iVar1 = *(int *)(param_2 + 4);
  while( true ) {
    if (iVar1 == iVar2) {
      return 0;
    }
    if (*(char *)(iVar1 + 9) == param_1) break;
    iVar1 = *(int *)(iVar1 + 4);
  }
  if (iVar1 == iVar2) {
    return 0;
  }
  return iVar1;
}

