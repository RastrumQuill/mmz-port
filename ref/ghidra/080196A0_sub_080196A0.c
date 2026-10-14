// sub_080196A0 at 0x080196A0 (thumb)

undefined8
sub_080196A0(int *param_1,int *param_2,int param_3,int param_4,undefined4 param_5,int param_6,
            undefined4 param_7,int param_8,uint param_9)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 in_lr;
  
  if (param_6 == 1) {
    if ((param_9 & 0x80) == 0) {
      if (-0xc01 < param_8) goto LAB_08019796;
    }
    else {
      iVar4 = param_1[1];
      uVar3 = param_2[1];
      iVar6 = iVar4 - uVar3;
      if (-1 < iVar6) {
        iVar5 = *param_1 - *param_2;
        iVar1 = param_3 - iVar5;
        uVar7 = param_4 - iVar6;
        uVar2 = sub_08009B9C(iVar1,uVar7);
        if ((uVar2 & 0xf) == 0) {
          if (iVar5 == 0) goto LAB_08019796;
          iVar6 = param_4 + param_8;
          uVar2 = iVar6 - (param_4 - iVar4);
          if (((int)uVar3 <= (int)uVar2) || ((int)(uVar3 & 0xfffff000) <= (int)(uVar2 & 0xfffff000))
             ) goto LAB_08019796;
          if (iVar5 < 0) {
            iVar5 = -iVar5;
          }
          iVar4 = sub_0801AF8C(param_3,iVar6,(uint)(param_3 < iVar1) * 2 + -1,iVar5,iVar6 + -1);
          if ((iVar4 < 1) && (iVar4 = sub_08009C3C(iVar1,uVar7), -1 < iVar4)) {
            iVar4 = sub_08009C3C(iVar1,(uVar7 & 0xfffff000) + 0xfff);
            if ((iVar4 < 0) ||
               (iVar4 = sub_08009C3C(iVar1,(uVar7 & 0xfffff000) + 0x1fff), iVar4 < 0))
            goto LAB_08019796;
          }
        }
      }
    }
  }
  else if ((param_6 != 0x800) || (-0x1400 < param_8)) goto LAB_08019796;
  param_8 = 0;
LAB_08019796:
  return CONCAT44(in_lr,param_8);
}

