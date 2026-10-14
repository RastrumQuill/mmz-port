// sub_08033A1C at 0x08033A1C (thumb)

undefined8
sub_08033A1C(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = 0;
  iVar1 = sub_08033AA8(param_5);
  if (iVar1 != -1) {
    iVar2 = sub_080EF124(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  if (iVar2 == 0) {
    param_5 = 0;
  }
  return CONCAT44(in_lr,param_5);
}

