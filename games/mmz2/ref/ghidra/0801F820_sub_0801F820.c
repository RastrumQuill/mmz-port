// sub_0801F820 at 0x0801F820 (thumb)

undefined8
sub_0801F820(int *param_1,undefined4 param_2,int *param_3,int param_4,int param_5,int param_6,
            undefined4 param_7,undefined4 param_8,undefined4 param_9,int param_10)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 in_lr;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  int *local_24;
  
  if (param_4 == 0) {
    param_4 = *param_3;
  }
  if (param_5 == 0) {
    param_5 = param_3[1];
  }
  local_44 = *param_1;
  local_40 = param_1[1];
  local_2c = param_2;
  local_28 = sub_0801F2E8(&local_44,param_3,param_4,param_6,param_10);
  local_3c = local_44;
  local_38 = local_40;
  local_34 = local_44;
  local_30 = local_40;
  uVar7 = 0;
  uVar8 = 0;
  local_24 = &local_3c;
  uVar2 = sub_080201F8(local_24,local_2c,param_3,param_4,param_6,param_7,param_8,param_9,param_10);
  uVar2 = uVar2 & 0xffff;
  uVar3 = sub_08020974(&local_34,local_2c,param_3,param_4,param_5,param_6,param_7,param_8,param_10);
  uVar3 = uVar3 & 0xff;
  if ((uVar2 == 0) && (uVar3 == 0xff)) {
    if ((local_28 < 0) && (uVar7 = 0x40, param_10 != 0)) {
      *param_1 = local_44;
      param_1[1] = local_40;
    }
    *(undefined2 *)((int)param_3 + 0x16) = 0;
    *(short *)((int)param_3 + 0xe) = (short)uVar7;
    goto LAB_0801f9ac;
  }
  uVar7 = uVar2;
  if (uVar3 != 0xff) {
    uVar6 = (ushort)(&DAT_020011d6)[uVar3 * 0xc] | 0x80;
    if (uVar2 == 0) {
LAB_0801f950:
      uVar7 = uVar6;
    }
    else if ((param_10 == 0) || (local_30 == local_24[1])) {
      if ((uint)(ushort)(&DAT_020011d8)[uVar3 * 0xc] << 1 <=
          *param_1 - ((&DAT_020011dc)[uVar3 * 6] - (uint)(ushort)(&DAT_020011d8)[uVar3 * 0xc])) {
        iVar5 = param_3[0xe] - *param_1;
        iVar4 = -1;
        if (param_6 != 0) {
          iVar4 = 1;
        }
        uVar8 = uVar6;
        if ((iVar5 == 0) || (0 < iVar5 * iVar4)) goto LAB_0801f956;
      }
      uVar7 = uVar6;
      uVar8 = uVar2;
    }
    else if (local_24[1] < local_30) goto LAB_0801f950;
  }
LAB_0801f956:
  uVar1 = sub_0802253C(param_3,uVar7,uVar8);
  *(undefined2 *)((int)param_3 + 0x16) = uVar1;
  *(short *)((int)param_3 + 0xe) = (short)uVar7;
  if ((param_10 != 0) && (uVar7 != 0)) {
    if ((uVar7 & 0x80) == 0) {
      *param_1 = local_3c;
      param_1[1] = local_38;
    }
    else {
      *param_1 = local_34;
      param_1[1] = local_30;
    }
  }
LAB_0801f9ac:
  return CONCAT44(in_lr,uVar7);
}

