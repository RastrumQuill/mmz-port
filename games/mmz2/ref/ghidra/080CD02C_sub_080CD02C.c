// sub_080CD02C at 0x080CD02C (thumb)

undefined8 sub_080CD02C(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar4 = 0;
  while( true ) {
    iVar3 = param_1 + -0x1800 + uVar4 * 0x1000;
    if (uVar4 != 0) {
      iVar3 = iVar3 + -1;
    }
    sVar1 = sub_08008CFC(iVar3,param_2 + -0xff);
    if (sVar1 != 0) break;
    uVar4 = uVar4 + 1 & 0xff;
    if (3 < uVar4) {
      uVar2 = 0;
LAB_080cd064:
      return CONCAT44(in_lr,uVar2);
    }
  }
  uVar2 = 1;
  goto LAB_080cd064;
}

