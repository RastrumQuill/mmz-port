// sub_0800ABA0 at 0x0800ABA0 (thumb)

undefined8 sub_0800ABA0(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((param_1 < 0x800) || (iVar1 = param_2 + -0x1000 + (param_1 + -0x800) * 2, iVar1 < 1)) {
    iVar1 = 0;
  }
  else {
    iVar1 = -iVar1;
  }
  return CONCAT44(in_lr,iVar1);
}

