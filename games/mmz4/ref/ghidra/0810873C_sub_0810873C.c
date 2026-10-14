// sub_0810873C at 0x0810873C (thumb)

int sub_0810873C(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = sub_08008748(param_1 + -0x700,param_2);
  iVar2 = sub_08008748(param_1 + 0x700,param_2);
  if (iVar2 < iVar1) {
    iVar2 = iVar1;
  }
  return iVar2;
}

