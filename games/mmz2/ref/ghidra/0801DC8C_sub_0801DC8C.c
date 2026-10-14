// sub_0801DC8C at 0x0801DC8C (thumb)

undefined8 sub_0801DC8C(int param_1,short param_2,uint param_3,undefined param_4,undefined param_5)

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
    iVar1 = sub_080EF150((int)param_2,param_3);
    if (param_3 * iVar1 - (int)param_2 == 0) {
      sub_080032EC(0xfb);
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
      sub_0801DAAC(iVar1,param_4,param_5);
      uVar2 = 1;
      goto LAB_0801dd1a;
    }
  }
  sub_0801DAAC(param_1,param_4,param_5);
  uVar2 = 0;
LAB_0801dd1a:
  return CONCAT44(in_lr,uVar2);
}

