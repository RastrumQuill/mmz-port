// sub_0807092C at 0x0807092C (thumb)

int sub_0807092C(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar1 = -0x1400;
  }
  else {
    iVar1 = 0x1400;
  }
  iVar1 = sub_080093C4(param_2 + iVar1,param_3);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar2 = 0x1400;
  }
  else {
    iVar2 = -0x1400;
  }
  iVar2 = sub_080093C4(param_2 + iVar2,param_3);
  if (iVar1 < iVar2) {
    iVar2 = iVar1;
  }
  return iVar2;
}

