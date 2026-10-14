// sub_080190EC at 0x080190EC (thumb)

undefined8 sub_080190EC(int param_1,undefined param_2,int param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    param_3 = -param_3;
  }
  iVar1 = sub_0801901C(param_1,param_2);
  return CONCAT44(in_lr,iVar1 + param_3);
}

