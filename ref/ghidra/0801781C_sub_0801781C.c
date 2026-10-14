// sub_0801781C at 0x0801781C (thumb)

undefined8 sub_0801781C(int param_1)

{
  byte bVar1;
  undefined uVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0xc1) != 3) {
    uVar5 = 1;
    goto LAB_080179e6;
  }
  pbVar3 = (byte *)(param_1 + 0xc3);
  bVar1 = *pbVar3;
  uVar6 = (uint)bVar1;
  uVar8 = (uint)*(byte *)(param_1 + 0xd);
  if ((uVar8 == 1) && (uVar6 == 3)) {
    *(byte *)(param_1 + 0xc1) = *(byte *)(param_1 + 0xbe);
    *(byte *)(param_1 + 0xbe) = bVar1;
    *(byte *)(param_1 + 0xc2) = *(byte *)(param_1 + 0xbf);
    *(byte *)(param_1 + 0xbf) = *(byte *)(param_1 + 0xd);
    *pbVar3 = *(byte *)(param_1 + 0xc0);
    *(byte *)(param_1 + 0xc0) = 4;
  }
  else {
    *(undefined *)(param_1 + 0xc1) = *(undefined *)(param_1 + 0xbe);
    *(undefined *)(param_1 + 0xbe) = 3;
    *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
    *(undefined *)(param_1 + 0xbf) = 2;
    *pbVar3 = *(byte *)(param_1 + 0xc0);
    *(byte *)(param_1 + 0xc0) = bVar1;
  }
  uVar7 = (uint)*(byte *)(param_1 + 0xbc);
  if ((uVar7 == 2) && (uVar6 == 1)) {
    uVar4 = (uint)*(byte *)(param_1 + 0x121);
    if (uVar4 < 5) {
      uVar10 = 1;
    }
    else {
      uVar10 = 0;
      uVar4 = uVar4 - 4;
    }
  }
  else {
    uVar10 = (uint)*(char *)(param_1 + 0x71);
    uVar4 = (uint)*(char *)(param_1 + 0x72);
  }
  if ((uVar8 == 2) && (uVar6 == 1)) {
    sub_08018BE8(param_1,0x20);
    if (uVar10 == 0) {
      uVar4 = uVar4 + 4;
    }
    *(char *)(param_1 + 0x121) = (char)uVar4;
  }
  else {
    if (uVar6 == 3) {
      if (uVar10 < 9) {
        uVar10 = 0;
      }
      else {
        uVar11 = uVar10 - 9;
        iVar9 = (byte)(&DAT_082a810c)[uVar11 + uVar7 * 3] - uVar4;
        if (uVar11 != 0) {
          pbVar3 = &DAT_082a810c + uVar11 + uVar7 * 3;
          do {
            pbVar3 = pbVar3 + -1;
            uVar11 = uVar11 - 1;
            iVar9 = (uint)*pbVar3 + iVar9;
          } while (uVar11 != 0);
        }
        uVar2 = (&DAT_082a8119)[uVar7 * 2];
        iVar9 = iVar9 * (uint)(byte)(&DAT_082a8119)[uVar8 * 2];
        uVar7 = sub_080C8AD0(iVar9,uVar2);
        iVar9 = sub_080C8B68(iVar9,uVar2);
        if (iVar9 != 0) {
          uVar7 = uVar7 + 1;
        }
        uVar4 = (uint)(byte)(&DAT_082a8119)[uVar8 * 2];
        if (uVar4 < uVar7) {
          uVar7 = uVar4;
        }
        uVar4 = (uint)(byte)(&DAT_082a810c)[uVar8 * 3];
        uVar10 = (uint)(byte)(&DAT_082a8118)[uVar8 * 2];
        if (uVar11 < uVar10) {
          if (uVar4 <= uVar7) {
            pbVar3 = &DAT_082a810c + uVar8 * 3 + uVar11;
            do {
              pbVar3 = pbVar3 + 1;
              uVar11 = uVar11 + 1;
              if (uVar10 <= uVar11) goto LAB_080179b0;
              uVar7 = uVar7 - uVar4;
              uVar4 = (uint)*pbVar3;
            } while (uVar4 <= uVar7);
          }
          if (uVar11 < uVar10) {
            uVar4 = uVar4 - uVar7;
            if (uVar4 == 0) {
              uVar4 = 1;
            }
            uVar10 = uVar11 + 1;
            goto LAB_080179b8;
          }
        }
LAB_080179b0:
        uVar4 = 1;
      }
LAB_080179b8:
      if (uVar8 != 1) {
        uVar10 = uVar10 + 8;
      }
    }
    sub_08018C20(param_1,(&UNK_082a80ff)[uVar6 + uVar8 * 3],uVar10,uVar4);
  }
  uVar5 = 3;
LAB_080179e6:
  return CONCAT44(in_lr,uVar5);
}

