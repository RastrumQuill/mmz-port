// sub_08009B4C at 0x08009B4C (thumb)

undefined8 sub_08009B4C(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = param_2 + -0x1000 + (param_1 >> 2);
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  else {
    iVar1 = -iVar1;
  }
  return CONCAT44(in_lr,iVar1);
}

