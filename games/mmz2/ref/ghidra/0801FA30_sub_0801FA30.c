// sub_0801FA30 at 0x0801FA30 (thumb)

undefined8
sub_0801FA30(int *param_1,undefined4 param_2,int *param_3,int param_4,int param_5,int param_6,
            undefined4 param_7,undefined4 param_8,undefined4 param_9,int param_10)

{
  ushort uVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 in_lr;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int *local_2c;
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
  local_2c = param_1;
  local_28 = sub_0801F1FC(&local_44,param_3,param_4,param_6,param_10);
  local_3c = local_44;
  local_38 = local_40;
  local_34 = local_44;
  local_30 = local_40;
  uVar8 = 0;
  uVar9 = 0;
  local_24 = &local_3c;
  uVar3 = sub_08020690(local_24,param_2,param_3,param_4,param_6,param_7,param_8,param_9,param_10);
  uVar3 = uVar3 & 0xffff;
  uVar4 = sub_08020A78(&local_34,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10);
  uVar4 = uVar4 & 0xff;
  if ((uVar3 == 0) && (uVar4 == 0xff)) {
    iVar6 = -1;
    if (param_6 != 0) {
      iVar6 = 1;
    }
    if ((0 < local_28 * iVar6) && (uVar8 = 0x40, param_10 != 0)) {
      *local_2c = local_44;
      local_2c[1] = local_40;
    }
    *(undefined2 *)(param_3 + 4) = 0;
    *(short *)(param_3 + 2) = (short)uVar8;
    goto LAB_0801fc4a;
  }
  uVar8 = uVar3;
  if (uVar4 == 0xff) {
    uVar7 = 0;
  }
  else {
    uVar1 = (&DAT_020011d6)[uVar4 * 0xc];
    uVar7 = uVar1 | 0x80;
    if (uVar3 != 0) {
      if ((param_10 == 0) || (local_34 == local_3c)) {
        uVar5 = (uint)(ushort)(&DAT_020011da)[uVar4 * 0xc];
        uVar9 = uVar7;
        if ((local_2c[1] - (((&DAT_020011e0)[uVar4 * 6] + 1) - uVar5) < uVar5 << 1) ||
           (local_24[1] < (int)((&DAT_020011e0)[uVar4 * 6] + 1 + uVar5 + -1))) {
          if ((uVar1 & 0x800) != 0) {
            uVar1 = *(ushort *)(param_3 + 4) & 0xd;
            goto joined_r0x0801fb50;
          }
        }
        else {
          if ((*(ushort *)(param_3 + 4) & 0xd) != 0) goto LAB_0801fb96;
          uVar1 = uVar1 & 0x800;
joined_r0x0801fb50:
          if (uVar1 != 0) goto LAB_0801fb96;
        }
        uVar8 = uVar7;
        uVar9 = uVar3;
        goto LAB_0801fb96;
      }
      iVar6 = -1;
      if (param_6 != 0) {
        iVar6 = 1;
      }
      if (0 < iVar6 * (local_34 - local_3c)) goto LAB_0801fb96;
    }
    uVar8 = uVar7;
  }
LAB_0801fb96:
  uVar2 = sub_08022590(local_2c,param_3,param_4,uVar8,uVar9,0,param_6,uVar4);
  *(undefined2 *)(param_3 + 4) = uVar2;
  *(short *)(param_3 + 2) = (short)uVar8;
  if (param_10 != 0) {
    if (uVar8 != 0) {
      if ((uVar8 & 0x80) == 0) {
        *local_2c = local_3c;
        local_2c[1] = local_38;
      }
      else {
        *local_2c = local_34;
        local_2c[1] = local_30;
        if ((uVar7 & 0x800) == 0) {
          if (uVar4 == 0xff) {
            param_3[0x20] = 0xffffffff;
          }
          else {
            param_3[0x20] = (uint)*(ushort *)(&DAT_020011d4 + uVar4 * 0x18);
          }
          goto LAB_0801fc4a;
        }
      }
    }
    param_3[0x20] = -1;
  }
LAB_0801fc4a:
  return CONCAT44(in_lr,uVar8);
}

