// sub_0801A0A4 at 0x0801A0A4 (thumb)

undefined8
sub_0801A0A4(int *param_1,undefined4 param_2,ushort *param_3,uint param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  int local_2c;
  uint local_24;
  
  local_2c = *param_1;
  iVar1 = param_1[1];
  uVar6 = 0;
  local_24 = 0;
  iVar2 = param_4 * 2 + -1;
  iVar5 = local_2c + ((uint)*param_3 + param_5) * iVar2;
  iVar3 = (uint)*param_3 * iVar2;
  iVar4 = sub_0801A28C(iVar5,iVar1,param_4);
  if (iVar4 != 0) {
    if (param_6 != 0) {
      *param_1 = (iVar4 + iVar5) - iVar3;
    }
    uVar6 = sub_08009B9C(iVar5,iVar1);
    uVar6 = uVar6 & 0xff;
  }
  if (uVar6 == 0) {
    uVar6 = sub_0801A204(param_1,iVar5,param_4,iVar3,param_3[2],param_6);
    uVar6 = uVar6 & 0xff;
    if (uVar6 == 0) {
      uVar6 = sub_0801A204(param_1,iVar5,param_4,iVar3,-(uint)param_3[3],param_6);
      uVar6 = uVar6 & 0xff;
    }
  }
  param_4 = param_4 ^ 1;
  if (uVar6 != 0) {
    local_2c = *param_1;
  }
  local_2c = local_2c + ((uint)param_3[1] + param_5) * -iVar2;
  iVar3 = (uint)param_3[1] * -iVar2;
  iVar2 = sub_0801A28C(local_2c,iVar1,param_4);
  if (iVar2 != 0) {
    if (param_6 != 0) {
      *param_1 = (iVar2 + local_2c) - iVar3;
    }
    local_24 = sub_08009B9C(local_2c,iVar1);
    local_24 = local_24 & 0xff;
  }
  if (local_24 == 0) {
    local_24 = sub_0801A204(param_1,local_2c,param_4,iVar3,param_3[2],param_6);
    local_24 = local_24 & 0xff;
    if (local_24 == 0) {
      local_24 = sub_0801A204(param_1,local_2c,param_4,iVar3,-(uint)param_3[3],param_6);
      local_24 = local_24 & 0xff;
    }
  }
  return CONCAT44(in_lr,uVar6 | local_24 << 8);
}

