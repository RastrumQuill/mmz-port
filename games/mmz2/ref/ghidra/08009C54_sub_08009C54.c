// sub_08009C54 at 0x08009C54 (thumb)

undefined8 sub_08009C54(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = (param_2 + -0xc00) - (param_1 >> 2);
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  else {
    iVar1 = -iVar1;
  }
  return CONCAT44(in_lr,iVar1);
}

