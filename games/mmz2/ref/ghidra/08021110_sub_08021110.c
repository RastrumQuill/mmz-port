// sub_08021110 at 0x08021110 (thumb)

undefined4
sub_08021110(int *param_1,undefined4 param_2,int *param_3,int param_4,int param_5,undefined4 param_6
            ,undefined4 param_7,undefined4 param_8,int param_9,undefined4 param_10,int param_11,
            int param_12,uint param_13)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 in_lr;
  
  if (param_12 != 0) {
    cVar2 = sub_08020E04(param_1,param_2,param_5,param_6,param_7,param_8,param_10,param_13);
    if (cVar2 != '\0') {
      return in_lr;
    }
    cVar2 = sub_08021010(param_1,param_2,param_5,param_6,param_7,param_8,param_13);
    if (cVar2 != '\0') {
      return in_lr;
    }
  }
  iVar8 = -1;
  if (param_9 != 0) {
    iVar8 = 1;
  }
  if (((&DAT_020011dc)[param_13 * 6] - *param_1) * iVar8 < 1 == (param_11 == 0)) {
    return in_lr;
  }
  pbVar4 = (byte *)(param_4 + 0x68 + (param_13 >> 3) + param_11 * 4);
  *pbVar4 = (byte)(1 << (param_13 & 7)) | *pbVar4;
  uVar6 = (uint)(ushort)(&DAT_020011d8)[param_13 * 0xc];
  if (param_11 == 0) {
    iVar8 = -iVar8;
  }
  if (0 < iVar8) {
    uVar6 = uVar6 - 1;
  }
  iVar7 = iVar8 * uVar6 + (&DAT_020011dc)[param_13 * 6];
  iVar5 = iVar7 - *param_3;
  pbVar4 = (byte *)(param_11 + param_4 + 0x78);
  uVar6 = (uint)*pbVar4;
  bVar1 = (byte)param_13;
  if (uVar6 != 0xff) {
    if (iVar5 == 0) {
      if (((&DAT_020011d6)[param_13 * 0xc] & 0x800) != 0) {
        return in_lr;
      }
      if (((&DAT_020011d6)[uVar6 * 0xc] & 0x800) != 0) {
        *pbVar4 = bVar1;
        return in_lr;
      }
      uVar9 = (uint)(ushort)(&DAT_020011da)[param_13 * 0xc];
      iVar5 = (&DAT_020011e0)[param_13 * 6] + 1 + uVar9;
      uVar3 = (uint)(ushort)(&DAT_020011da)[uVar6 * 0xc];
      iVar7 = (&DAT_020011e0)[uVar6 * 6] + 1 + uVar3;
      iVar8 = param_1[1] + (uint)*(ushort *)(param_5 + 4);
      if ((iVar5 < iVar8) || (iVar7 < iVar8)) {
        if (iVar5 <= iVar7) {
          return in_lr;
        }
LAB_080212b6:
        *(byte *)(param_4 + 0x78 + param_11) = bVar1;
        return in_lr;
      }
      iVar5 = iVar5 + uVar9 * -2;
      iVar7 = iVar7 + uVar3 * -2;
      iVar8 = param_1[1] - (uint)*(ushort *)(param_5 + 6);
      if ((iVar8 < iVar5) || (iVar8 < iVar7)) {
        if (iVar7 <= iVar5) {
          return in_lr;
        }
        goto LAB_080212b6;
      }
      iVar8 = uVar9 * 2 + uVar3 * -2;
      if (iVar8 == 0 || iVar8 < 0 != SBORROW4(uVar9 * 2,uVar3 * 2)) {
        return in_lr;
      }
      goto LAB_0802129e;
    }
    if (iVar5 * iVar8 < 1) {
      return in_lr;
    }
  }
  *param_3 = iVar7;
LAB_0802129e:
  *pbVar4 = bVar1;
  return in_lr;
}

