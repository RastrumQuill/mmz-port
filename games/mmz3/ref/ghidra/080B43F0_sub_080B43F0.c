// sub_080B43F0 at 0x080B43F0 (thumb)

undefined8 sub_080B43F0(int param_1,int param_2,char param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  if (param_3 == '\0') {
    iVar1 = -0x2000;
  }
  else {
    iVar1 = 0x2000;
  }
  iVar1 = sub_0800A104(param_1 + iVar1,param_2);
  iVar1 = iVar1 - param_2;
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  return CONCAT44(iVar1,in_lr);
}

