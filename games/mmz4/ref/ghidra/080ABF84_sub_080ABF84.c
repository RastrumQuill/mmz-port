// sub_080ABF84 at 0x080ABF84 (thumb)

undefined4 sub_080ABF84(int param_1,int param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 in_lr;
  byte local_68 [16];
  byte local_58 [16];
  int local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 uStack_4;
  
  pbVar6 = local_68;
  param_3 = param_3 & 0xff;
  uVar10 = 0;
  uVar7 = 1;
  if (1 < param_3) {
    piVar5 = (int *)(param_2 + 8);
    do {
      piVar1 = (int *)(uVar10 * 8 + param_2);
      iVar4 = piVar1[1];
      if ((piVar5[1] <= iVar4) && ((piVar5[1] != iVar4 || (*piVar5 <= *piVar1)))) {
        uVar10 = uVar7 & 0xff;
      }
      piVar5 = piVar5 + 2;
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)param_3);
  }
  uVar7 = 0;
  uVar8 = 1;
  if (1 < param_3) {
    piVar5 = (int *)(param_2 + 8);
    do {
      piVar1 = (int *)(uVar7 * 8 + param_2);
      iVar4 = piVar1[1];
      if ((iVar4 <= piVar5[1]) && ((piVar5[1] != iVar4 || (*piVar1 <= *piVar5)))) {
        uVar7 = uVar8 & 0xff;
      }
      piVar5 = piVar5 + 2;
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)param_3);
  }
  uVar8 = uVar10;
  local_68[0] = (byte)uVar10;
  local_48 = param_1;
  uStack_4 = in_lr;
LAB_080ac032:
  uVar8 = sub_08128954(uVar8 + 1,param_3);
  if (uVar8 == uVar7) {
    pbVar6[1] = (byte)uVar7;
    iVar4 = 0x7fffffff;
    iVar9 = 0;
    while( true ) {
      iVar2 = *(int *)((uint)local_68[iVar9] * 8 + param_2);
      if (iVar2 < iVar4) {
        iVar4 = iVar2;
      }
      if (local_68[iVar9] == uVar7) break;
      iVar9 = iVar9 + 1;
    }
    if (iVar4 < 0xf1) {
      uVar8 = uVar10;
      iVar4 = 0;
      local_58[0] = (byte)uVar10;
      while (uVar8 = sub_08128954((uVar8 - 1) + param_3,param_3), uVar8 != uVar7) {
        piVar1 = (int *)((uint)local_58[iVar4] * 8 + param_2);
        piVar5 = (int *)(uVar8 * 8 + param_2);
        if (piVar1[1] == piVar5[1]) {
          if (*piVar1 < *piVar5) {
            local_58[iVar4] = (byte)uVar8;
          }
        }
        else {
          local_58[iVar4 + 1] = (byte)uVar8;
          iVar4 = iVar4 + 1;
        }
      }
      local_58[iVar4 + 1] = (byte)uVar7;
      iVar4 = -1;
      iVar9 = 0;
      while( true ) {
        iVar2 = *(int *)((uint)local_58[iVar9] * 8 + param_2);
        if (iVar4 < iVar2) {
          iVar4 = iVar2;
        }
        if (local_58[iVar9] == uVar7) break;
        iVar9 = iVar9 + 1;
      }
      if (-1 < iVar4) {
        iVar4 = *(int *)(uVar10 * 8 + param_2 + 4);
        local_34 = *(int *)(uVar7 * 8 + param_2 + 4);
        if ((iVar4 < 0xa0) && (0 < local_34)) {
          if (iVar4 < 0) {
            iVar4 = 0;
          }
          if (0xa0 < local_34) {
            local_34 = 0xa0;
          }
          local_40 = 1;
          local_44 = 1;
          local_38 = 0;
          local_3c = 0;
          piVar1 = (int *)((uint)local_68[1] * 8 + param_2);
          piVar5 = (int *)((uint)local_68[0] * 8 + param_2);
          local_30 = *piVar1 - *piVar5;
          iVar9 = piVar1[1] - piVar5[1];
          if (iVar9 == 0) {
            iVar9 = 1;
          }
          piVar1 = (int *)((uint)local_58[1] * 8 + param_2);
          piVar5 = (int *)((uint)local_58[0] * 8 + param_2);
          local_2c = *piVar1 - *piVar5;
          iVar2 = piVar1[1] - piVar5[1];
          if (iVar2 == 0) {
            iVar2 = 1;
          }
          if (iVar4 < local_34) {
            do {
              iVar3 = *(int *)((uint)local_68[local_44] * 8 + param_2 + 4);
              local_28 = iVar4 + 1;
              local_24 = iVar4 << 1;
              uVar10 = (uint)local_68[local_44];
              while (iVar3 < iVar4) {
                local_3c = local_44;
                local_44 = local_44 + 1 & 0xff;
                uVar7 = (uint)local_68[local_44];
                piVar1 = (int *)(uVar7 * 8 + param_2);
                piVar5 = (int *)(uVar10 * 8 + param_2);
                local_30 = *piVar1 - *piVar5;
                iVar3 = piVar1[1];
                iVar9 = iVar3 - piVar5[1];
                uVar10 = uVar7;
                if (iVar9 == 0) {
                  iVar9 = 1;
                }
              }
              iVar3 = *(int *)((uint)local_58[local_40] * 8 + param_2 + 4);
              uVar10 = (uint)local_58[local_40];
              while (iVar3 < iVar4) {
                local_38 = local_40;
                local_40 = local_40 + 1 & 0xff;
                uVar7 = (uint)local_58[local_40];
                piVar1 = (int *)(uVar7 * 8 + param_2);
                piVar5 = (int *)(uVar10 * 8 + param_2);
                local_2c = *piVar1 - *piVar5;
                iVar3 = piVar1[1];
                iVar2 = iVar3 - piVar5[1];
                uVar10 = uVar7;
                if (iVar2 == 0) {
                  iVar2 = 1;
                }
              }
              piVar5 = (int *)((uint)local_68[local_3c] * 8 + param_2);
              iVar3 = FUN_081288bc((iVar4 - piVar5[1]) * local_30,iVar9);
              iVar3 = *piVar5 + iVar3;
              piVar5 = (int *)((uint)local_58[local_38] * 8 + param_2);
              iVar4 = FUN_081288bc((iVar4 - piVar5[1]) * local_2c,iVar2);
              iVar4 = *piVar5 + iVar4;
              if (iVar3 < 0) {
                iVar3 = 0;
              }
              if (0xf0 < iVar4) {
                iVar4 = 0xf0;
              }
              *(ushort *)(local_24 + local_48) = (ushort)(iVar3 << 8) | (ushort)iVar4;
              iVar4 = local_28;
            } while (local_28 < local_34);
          }
        }
      }
    }
    return uStack_4;
  }
  piVar1 = (int *)((uint)*pbVar6 * 8 + param_2);
  piVar5 = (int *)(uVar8 * 8 + param_2);
  if (piVar1[1] == piVar5[1]) goto code_r0x080ac024;
  pbVar6 = pbVar6 + 1;
  goto LAB_080ac030;
code_r0x080ac024:
  if (*piVar5 < *piVar1) {
LAB_080ac030:
    *pbVar6 = (byte)uVar8;
  }
  goto LAB_080ac032;
}

