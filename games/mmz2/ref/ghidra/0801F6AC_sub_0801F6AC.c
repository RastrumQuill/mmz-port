// sub_0801F6AC at 0x0801F6AC (thumb)

undefined8
sub_0801F6AC(int *param_1,undefined4 param_2,int *param_3,int param_4,int param_5,int param_6,
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
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  undefined *local_24;
  
  if (param_4 == 0) {
    param_4 = *param_3;
  }
  if (param_5 == 0) {
    param_5 = param_3[1];
  }
  local_38 = *param_1;
  local_34 = param_1[1];
  uVar8 = 0;
  local_30 = local_38;
  local_2c = local_34;
  local_28 = param_2;
  uVar2 = sub_0801FE4C(&local_38,param_2,param_3,param_4,param_6,param_7,param_8,param_9,param_10);
  uVar2 = uVar2 & 0xffff;
  uVar3 = sub_080208D0(&local_30,local_28,param_3,param_4,param_5,param_6,param_7,param_8,param_10);
  uVar3 = uVar3 & 0xff;
  uVar7 = uVar2;
  if (uVar3 != 0xff) {
    local_24 = &DAT_02001000 + uVar3 * 0x18;
    uVar6 = (ushort)(&DAT_020011d6)[uVar3 * 0xc] | 0x80;
    if (uVar2 == 0) {
LAB_0801f7b0:
      uVar7 = uVar6;
    }
    else if ((param_10 == 0) || (local_2c == local_34)) {
      if ((uint)(ushort)(&DAT_020011d8)[uVar3 * 0xc] << 1 <=
          *param_1 - ((&DAT_020011dc)[uVar3 * 6] - (uint)(ushort)(&DAT_020011d8)[uVar3 * 0xc])) {
        iVar5 = param_3[0xc] - *param_1;
        iVar4 = -1;
        if (param_6 != 0) {
          iVar4 = 1;
        }
        uVar8 = uVar6;
        if ((iVar5 == 0) || (0 < iVar5 * iVar4)) goto LAB_0801f7b6;
      }
      uVar7 = uVar6;
      uVar8 = uVar2;
    }
    else if (local_2c < local_34) goto LAB_0801f7b0;
  }
LAB_0801f7b6:
  uVar1 = sub_080224B4(param_3,uVar7,uVar8);
  *(undefined2 *)(param_3 + 5) = uVar1;
  *(short *)(param_3 + 3) = (short)uVar7;
  if (param_10 == 0) goto LAB_0801f80c;
  if (uVar7 == 0) {
LAB_0801f806:
    uVar8 = 0xffffffff;
  }
  else {
    if ((uVar7 & 0x80) == 0) {
      *param_1 = local_38;
      param_1[1] = local_34;
      goto LAB_0801f806;
    }
    *param_1 = local_30;
    param_1[1] = local_2c;
    if (uVar3 == 0xff) goto LAB_0801f806;
    uVar8 = (uint)*(ushort *)(&DAT_020011d4 + uVar3 * 0x18);
  }
  param_3[0x1f] = uVar8;
LAB_0801f80c:
  return CONCAT44(in_lr,uVar7);
}

