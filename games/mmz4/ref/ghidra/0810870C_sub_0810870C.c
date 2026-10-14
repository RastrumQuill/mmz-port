// sub_0810870C at 0x0810870C (thumb)

int sub_0810870C(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = sub_08008534(param_1 + -0x700,param_2);
  iVar2 = sub_08008534(param_1 + 0x700,param_2);
  if (iVar1 < iVar2) {
    iVar2 = iVar1;
  }
  return iVar2;
}

