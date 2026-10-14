// sub_08007220 at 0x08007220 (thumb)

undefined4 sub_08007220(int param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 in_lr;
  undefined4 local_4c [2];
  int local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  undefined *local_24;
  
  bVar1 = *param_2;
  bVar2 = param_2[2];
  uVar7 = (uint)bVar2;
  local_3c = (uint)param_2[1];
  bVar3 = param_2[3];
  param_2 = param_2 + 4;
  local_44 = *(int *)(*(int *)(param_1 + 8) + 8) + *(int *)(param_1 + 8);
  DAT_02001290 = (ushort)bVar2 * 0xf;
  local_40 = uVar7 * -0x96 + 0xf & 0xffff;
  uVar4 = *(undefined2 *)(local_3c * 300 + local_44);
  local_4c[0] = CONCAT22(uVar4,uVar4);
  local_24 = &DAT_02001294;
  sub_081284E4(local_4c,&DAT_02001294,0x100ae08);
  uVar10 = 0;
  local_2c = (uint)bVar3 << 0x10;
  if (bVar3 != 0) {
    local_34 = (int)(short)((ushort)bVar1 - (ushort)bVar2);
    local_30 = uVar7;
    do {
      uVar8 = 0;
      local_28 = uVar10 << 0x10;
      if (0 < (int)local_30) {
        local_38 = local_3c;
        do {
          bVar1 = *param_2;
          param_2 = param_2 + 1;
          if (bVar1 == local_38) {
            local_24 = local_24 + 0x1e;
          }
          else {
            iVar9 = local_44 + (uint)bVar1 * 300;
            uVar10 = 0;
            iVar5 = local_40 << 0x10;
            do {
              sub_08000B30(iVar9,local_24,0x1e);
              local_24 = local_24 + uVar7 * 0x1e;
              iVar9 = iVar9 + 0x1e;
              uVar6 = uVar10 * 0x10000 + 0x10000;
              uVar10 = uVar6 >> 0x10;
            } while ((int)uVar6 >> 0x10 < 10);
            local_24 = local_24 + (iVar5 >> 0xf);
          }
          uVar10 = uVar8 * 0x10000 + 0x10000;
          uVar8 = uVar10 >> 0x10;
        } while ((int)uVar10 >> 0x10 < (int)local_30);
      }
      param_2 = param_2 + local_34;
      local_24 = local_24 + uVar7 * 0x10e;
      uVar10 = local_28 + 0x10000U >> 0x10;
    } while ((int)(local_28 + 0x10000U) >> 0x10 < local_2c >> 0x10);
  }
  DAT_0202cab0 = 0;
  return in_lr;
}

