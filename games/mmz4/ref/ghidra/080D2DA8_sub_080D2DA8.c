// sub_080D2DA8 at 0x080D2DA8 (thumb)

undefined8 sub_080D2DA8(int param_1,int param_2,char param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  if (param_3 == '\0') {
    iVar1 = -0x2000;
  }
  else {
    iVar1 = 0x2000;
  }
  iVar1 = sub_08008534(param_1 + iVar1,param_2);
  iVar1 = iVar1 - param_2;
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  return CONCAT44(iVar1,in_lr);
}

