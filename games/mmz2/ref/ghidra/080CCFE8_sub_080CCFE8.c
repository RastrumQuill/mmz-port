// sub_080CCFE8 at 0x080CCFE8 (thumb)

undefined8 sub_080CCFE8(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar4 = 0;
  while( true ) {
    iVar3 = param_2 + -0x30ff + uVar4 * 0x1000;
    if (uVar4 != 0) {
      iVar3 = iVar3 + -1;
    }
    sVar1 = sub_08008CFC(param_1 + 0x1800,iVar3);
    if (sVar1 != 0) break;
    uVar4 = uVar4 + 1 & 0xff;
    if (3 < uVar4) {
      uVar2 = 0;
LAB_080cd024:
      return CONCAT44(in_lr,uVar2);
    }
  }
  uVar2 = 1;
  goto LAB_080cd024;
}

