// sub_08024E9C at 0x08024E9C (thumb)

undefined8 sub_08024E9C(int param_1,short param_2,uint param_3,undefined param_4,undefined param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  param_3 = param_3 & 0xff;
  iVar4 = 1;
  if (param_1 >> 4 != 0) {
    iVar4 = param_1 >> 4;
  }
  if (param_3 != 0) {
    iVar1 = FUN_080fe2f8((int)param_2,param_3);
    if (param_3 * iVar1 - (int)param_2 == 0) {
      sub_0800471C(0x34);
    }
    iVar1 = iVar1 * iVar4;
    iVar4 = iVar1;
    if (iVar1 < 0) {
      iVar4 = -iVar1;
    }
    iVar3 = param_1;
    if (param_1 < 0) {
      iVar3 = -param_1;
    }
    if (iVar4 <= iVar3) {
      sub_08024BFC(iVar1,param_4,param_5);
      uVar2 = 1;
      goto LAB_08024f2a;
    }
  }
  sub_08024BFC(param_1,param_4,param_5);
  uVar2 = 0;
LAB_08024f2a:
  return CONCAT44(in_lr,uVar2);
}

