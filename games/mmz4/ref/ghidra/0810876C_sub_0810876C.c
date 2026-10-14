// sub_0810876C at 0x0810876C (thumb)

int sub_0810876C(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = sub_08008AA4(param_1 + -0x700,param_2);
  iVar2 = sub_08008AA4(param_1 + 0x700,param_2);
  if (((iVar1 < 0) && (0 < iVar2)) || ((0 < iVar1 && (iVar2 < 0)))) {
    iVar2 = 0;
  }
  else if (((iVar1 < 0) && (iVar1 < iVar2)) || ((0 < iVar1 && (iVar2 < iVar1)))) {
    iVar2 = iVar1;
  }
  return iVar2;
}

