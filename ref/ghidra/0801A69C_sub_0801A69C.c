// sub_0801A69C at 0x0801A69C (thumb)

undefined8
sub_0801A69C(int *param_1,undefined4 param_2,ushort *param_3,uint param_4,int param_5,int param_6)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 in_lr;
  int local_2c;
  
  local_2c = *param_1;
  iVar2 = param_1[1];
  uVar8 = 0;
  uVar9 = 0;
  iVar3 = param_4 * 2 + -1;
  iVar6 = local_2c + iVar3 * ((uint)*param_3 + param_5);
  iVar7 = iVar3 * (uint)*param_3;
  iVar4 = sub_0801A28C(iVar6,iVar2,param_4);
  if (iVar4 != 0) {
    if (param_6 != 0) {
      *param_1 = (iVar4 + iVar6) - iVar7;
    }
    uVar8 = sub_08009B9C(iVar6,iVar2);
    uVar8 = uVar8 & 0xff;
  }
  if (uVar8 == 0) {
    uVar1 = param_3[2];
    iVar4 = param_6;
LAB_0801a71e:
    uVar5 = sub_0801A864(param_1,iVar6,param_4,iVar7,uVar1,iVar4);
    uVar8 = uVar5 & 0xff;
    if (uVar8 == 0) {
      uVar1 = param_3[3];
      iVar4 = param_6;
    }
    else {
      if ((uVar5 & 0x40) == 0) goto LAB_0801a76c;
      uVar1 = param_3[3];
      iVar4 = 0;
    }
    uVar8 = sub_0801A864(param_1,iVar6,param_4,iVar7,-(uint)uVar1,iVar4);
    uVar8 = uVar8 & 0xff;
  }
  else if ((uVar8 & 0x40) != 0) {
    uVar1 = param_3[2];
    iVar4 = 0;
    goto LAB_0801a71e;
  }
LAB_0801a76c:
  param_4 = param_4 ^ 1;
  if (uVar8 != 0) {
    local_2c = *param_1;
  }
  local_2c = local_2c + -iVar3 * ((uint)param_3[1] + param_5);
  iVar4 = -iVar3 * (uint)param_3[1];
  iVar3 = sub_0801A28C(local_2c,iVar2,param_4);
  if (iVar3 != 0) {
    if (param_6 != 0) {
      *param_1 = (iVar3 + local_2c) - iVar4;
    }
    uVar9 = sub_08009B9C(local_2c,iVar2);
    uVar9 = uVar9 & 0xff;
  }
  if (uVar9 == 0) {
    uVar1 = param_3[2];
    iVar2 = param_6;
  }
  else {
    if ((uVar9 & 0x40) == 0) goto LAB_0801a82e;
    uVar1 = param_3[2];
    iVar2 = 0;
  }
  uVar5 = sub_0801A864(param_1,local_2c,param_4,iVar4,uVar1,iVar2);
  uVar9 = uVar5 & 0xff;
  if (uVar9 == 0) {
    uVar1 = param_3[3];
  }
  else {
    if ((uVar5 & 0x40) == 0) goto LAB_0801a82e;
    uVar1 = param_3[3];
    param_6 = 0;
  }
  uVar9 = sub_0801A864(param_1,local_2c,param_4,iVar4,-(uint)uVar1,param_6);
  uVar9 = uVar9 & 0xff;
LAB_0801a82e:
  if ((uVar8 & 0x40) != 0) {
    uVar8 = 0;
  }
  if ((uVar9 & 0x40) != 0) {
    uVar9 = 0;
  }
  return CONCAT44(in_lr,uVar8 | uVar9 << 8);
}

