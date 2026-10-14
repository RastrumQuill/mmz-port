// sub_08128688 at 0x08128688 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 sub_08128688(uint param_1,ushort *param_2,char param_3)

{
  ushort uVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined2 *puVar7;
  undefined4 in_lr;
  undefined auStack_c4 [130];
  undefined2 auStack_42 [17];
  short local_20;
  ushort local_1e;
  uint local_18;
  undefined4 uStack_4;
  
  param_1 = param_1 & 0xffff;
  uStack_4 = in_lr;
  if (param_1 < *(ushort *)(DAT_0203d7b0 + 4)) {
    bVar3 = *(byte *)(DAT_0203d7b0 + 8);
    auStack_42[bVar3 + 1] = 0;
    puVar7 = auStack_42 + bVar3;
    bVar3 = 0;
    do {
      uVar6 = (uint)*param_2;
      param_2 = param_2 + 1;
      bVar2 = 0;
      do {
        *puVar7 = (short)uVar6;
        puVar7 = puVar7 + -1;
        uVar6 = uVar6 >> 1;
        bVar2 = bVar2 + 1;
      } while (bVar2 < 0x10);
      bVar3 = bVar3 + 1;
    } while (bVar3 < 4);
    for (bVar3 = 0; bVar3 < *(byte *)(DAT_0203d7b0 + 8); bVar3 = bVar3 + 1) {
      *puVar7 = (short)param_1;
      puVar7 = puVar7 + -1;
      param_1 = param_1 >> 1;
    }
    *puVar7 = 0;
    puVar7[-1] = 1;
    sub_08128544(auStack_c4,&DAT_0d000000,*(byte *)(DAT_0203d7b0 + 8) + 0x43);
    uVar4 = 0;
    local_20 = 0;
    local_1e = DAT_04000006;
    local_18 = 0;
    if ((_DAT_0d000000 & 1) != 0) goto LAB_081287d4;
    do {
      do {
        uVar1 = DAT_04000006;
        if (uVar1 != local_1e) {
          if (local_1e < uVar1) {
            iVar5 = (uint)uVar1 - (uint)local_1e;
          }
          else {
            iVar5 = (uVar1 + 0xe4) - (uint)local_1e;
          }
          local_18 = iVar5 + local_18;
          local_1e = uVar1;
          if (0x88 < local_18) {
            if ((local_20 == 0) && ((_DAT_0d000000 & 1) == 0)) {
              uVar4 = 0xc001;
            }
            goto LAB_081287e0;
          }
        }
      } while ((local_20 != 0) || ((_DAT_0d000000 & 1) == 0));
LAB_081287d4:
      local_20 = local_20 + 1;
    } while (param_3 != '\0');
  }
  else {
    uVar4 = 0x80ff;
  }
LAB_081287e0:
  return CONCAT44(uStack_4,uVar4);
}

