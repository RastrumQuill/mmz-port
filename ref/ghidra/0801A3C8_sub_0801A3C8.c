// sub_0801A3C8 at 0x0801A3C8 (thumb)

undefined8
sub_0801A3C8(int *param_1,undefined4 param_2,ushort *param_3,uint param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 in_lr;
  int local_34;
  uint local_2c;
  
  local_34 = *param_1;
  iVar1 = param_1[1];
  uVar9 = 0;
  local_2c = 0;
  iVar8 = param_4 * 2 + -1;
  iVar6 = local_34 + iVar8 * ((uint)*param_3 + param_5);
  iVar5 = iVar8 * (uint)*param_3;
  iVar2 = sub_0801A28C(iVar6,iVar1,param_4);
  iVar7 = param_6;
  if (iVar2 != 0) {
    if (param_6 != 0) {
      *param_1 = (iVar2 + iVar6) - iVar5;
      iVar7 = 0;
    }
    uVar9 = sub_08009B9C(iVar2 + iVar6 + iVar8,iVar1);
    uVar9 = uVar9 & 0xff;
  }
  if ((uVar9 == 0) || (uVar9 == 0xf)) {
    uVar3 = sub_0801A5CC(param_1,iVar6,param_4,iVar5,param_3[2],iVar7);
    uVar4 = (uVar3 << 0x10) >> 0x18;
    if (((uVar4 & 0xf) == 0) || (uVar4 == 0xf)) {
      if ((uVar9 & 0xf) == 0) {
        uVar9 = uVar4;
      }
      uVar3 = sub_0801A5CC(param_1,iVar6,param_4,iVar5,-(uint)param_3[3],iVar7);
      uVar4 = (uVar3 << 0x10) >> 0x18;
    }
    if (((uVar4 & 0xf) == 0) || (uVar4 == 0xf)) {
      if ((uVar9 & 0xf) == 0) goto LAB_0801a4c6;
    }
    else if (((uVar9 & 0xf) == 0) || (uVar9 != 0xf)) {
      uVar4 = uVar3 & 0xff;
LAB_0801a4c6:
      uVar9 = uVar4;
    }
    else {
      uVar9 = 1;
    }
  }
  param_4 = param_4 ^ 1;
  iVar8 = -iVar8;
  if (uVar9 != 0) {
    local_34 = *param_1;
  }
  local_34 = local_34 + iVar8 * ((uint)param_3[1] + param_5);
  iVar2 = iVar8 * (uint)param_3[1];
  iVar7 = sub_0801A28C(local_34,iVar1,param_4);
  if (iVar7 != 0) {
    if (param_6 != 0) {
      *param_1 = (iVar7 + local_34) - iVar2;
      param_6 = 0;
    }
    local_2c = sub_08009B9C(iVar7 + local_34 + iVar8,iVar1);
    local_2c = local_2c & 0xff;
  }
  if ((local_2c == 0) || (local_2c == 0xf)) {
    uVar3 = sub_0801A5CC(param_1,local_34,param_4,iVar2,param_3[2],param_6);
    uVar4 = (uVar3 << 0x10) >> 0x18;
    if (((uVar4 & 0xf) == 0) || (uVar4 == 0xf)) {
      if ((local_2c & 0xf) == 0) {
        local_2c = uVar4;
      }
      uVar3 = sub_0801A5CC(param_1,local_34,param_4,iVar2,-(uint)param_3[3],param_6);
      uVar4 = (uVar3 << 0x10) >> 0x18;
    }
    if (((uVar4 & 0xf) == 0) || (uVar4 == 0xf)) {
      if ((local_2c & 0xf) != 0) goto LAB_0801a5b0;
    }
    else {
      if (((local_2c & 0xf) == 0) || (local_2c != 0xf)) {
        local_2c = uVar3 & 0xff;
        goto LAB_0801a5b0;
      }
      uVar4 = 1;
    }
    local_2c = uVar4;
  }
LAB_0801a5b0:
  return CONCAT44(in_lr,local_2c << 8 | uVar9);
}

