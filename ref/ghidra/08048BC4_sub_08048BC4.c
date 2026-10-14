// sub_08048BC4 at 0x08048BC4 (thumb)

undefined8 sub_08048BC4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_0800DF4C(DAT_02022e90,param_1 + 0x4c);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = iVar1 + 0x4c;
  }
  return CONCAT44(in_lr,iVar1);
}

