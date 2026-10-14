// sub_08006BE8 at 0x08006BE8 (thumb)

undefined4 sub_08006BE8(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined *puVar9;
  byte *pbVar10;
  undefined4 in_lr;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  uVar8 = (uint)*(byte *)(*(int *)(param_1 + 0x74) + 3);
  local_40 = *(int *)(*(int *)(param_1 + 8) + 8) + *(int *)(param_1 + 8);
  bVar1 = *(byte *)(*(int *)(param_1 + 0x74) + 2);
  uVar4 = (uint)bVar1;
  DAT_0200543c = (ushort)bVar1 * 0xf;
  puVar9 = &DAT_02005440;
  local_3c = uVar4 * -0x96 + 0xf & 0xffff;
  local_38 = (uint)*(byte *)(*(int *)(param_1 + 0xc) + 1);
  pbVar10 = (byte *)(*(int *)(param_1 + 0xc) + 4);
  uVar2 = *(undefined2 *)(local_38 * 300 + local_40);
  uVar6 = CONCAT22(uVar2,uVar2);
  local_48 = uVar6;
  FUN_080c88ec(&local_48,&DAT_02005440,0x1007080);
  local_44 = uVar6;
  FUN_080c88f0(&local_44,&DAT_02021640,&DAT_05000002);
  uVar5 = 0;
  local_2c = uVar8 << 0x10;
  local_30 = uVar4;
  if (uVar8 != 0) {
    do {
      uVar8 = 0;
      local_28 = uVar5 << 0x10;
      if (0 < (int)local_30) {
        local_34 = local_38;
        do {
          bVar1 = *pbVar10;
          pbVar10 = pbVar10 + 1;
          if (bVar1 == local_34) {
            puVar9 = puVar9 + 0x1e;
          }
          else {
            iVar7 = local_40 + (uint)bVar1 * 300;
            uVar5 = 0;
            local_24 = local_3c << 0x10;
            do {
              FUN_080006d8(iVar7,puVar9,0x1e);
              puVar9 = puVar9 + uVar4 * 0x1e;
              iVar7 = iVar7 + 0x1e;
              uVar3 = uVar5 * 0x10000 + 0x10000;
              uVar5 = uVar3 >> 0x10;
            } while ((int)uVar3 >> 0x10 < 10);
            puVar9 = puVar9 + (local_24 >> 0xf);
          }
          uVar5 = uVar8 * 0x10000 + 0x10000;
          uVar8 = uVar5 >> 0x10;
        } while ((int)uVar5 >> 0x10 < (int)local_30);
      }
      puVar9 = puVar9 + uVar4 * 0x10e;
      uVar5 = local_28 + 0x10000U >> 0x10;
    } while ((int)(local_28 + 0x10000U) >> 0x10 < local_2c >> 0x10);
  }
  DAT_02021644 = 0;
  return in_lr;
}

