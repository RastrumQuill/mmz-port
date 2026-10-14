// sub_08009EB8 at 0x08009EB8 (thumb)

undefined8 sub_08009EB8(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((param_1 < 0xc00) || (iVar1 = param_2 + -0x1000 + (param_1 + -0xc00) * 4, iVar1 < 1)) {
    iVar1 = 0;
  }
  else {
    iVar1 = -iVar1;
  }
  return CONCAT44(in_lr,iVar1);
}

