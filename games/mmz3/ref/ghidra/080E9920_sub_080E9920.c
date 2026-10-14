// sub_080E9920 at 0x080E9920 (thumb)

undefined8 sub_080E9920(uint param_1,uint param_2,byte *param_3,uint param_4)

{
  ushort uVar1;
  ushort *puVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  ushort uVar7;
  ushort *puVar8;
  uint uVar9;
  undefined4 in_lr;
  uint local_30;
  ushort *local_28;
  
  param_1 = param_1 & 0xff;
  local_30 = param_2 & 0xff;
  param_4 = param_4 & 0xffff;
  puVar8 = (ushort *)(DAT_02030650 + (local_30 * 0x20 + param_1) * 2);
  uVar4 = 0;
  bVar3 = *param_3;
  if ((bVar3 < 0xfd) && (uVar9 = param_1, local_28 = puVar8, param_4 != 0)) {
    do {
      if (bVar3 < 0xf0) {
        uVar7 = (ushort)*param_3;
LAB_080e9a0c:
        uVar7 = uVar7 | uVar4;
        if (((uVar9 - DAT_02030be8 & 0xff) < (uint)DAT_02030bea) &&
           ((local_30 - DAT_02030be9 & 0xff) < (uint)DAT_02030beb)) {
          iVar6 = sub_080E9B00(uVar7);
          if (iVar6 == 0) break;
          *(ushort *)(iVar6 + 4) = uVar7;
          uVar1 = uVar4 & 0xf000 | *(ushort *)(iVar6 + 6) & 0xfff;
          *puVar8 = uVar1;
          puVar8[0x20] = uVar1 + 1;
          uVar9 = uVar9 + 1 & 0xff;
          puVar2 = puVar8 + 1;
          if (0x3ff < uVar7) {
            iVar6 = sub_080E9B00(uVar7 | 0x800);
            if (iVar6 == 0) break;
            *(ushort *)(iVar6 + 4) = uVar7 | 0x800;
            uVar7 = uVar4 & 0xf000 | *(ushort *)(iVar6 + 6) & 0xfff;
            puVar8[1] = uVar7;
            puVar8[0x21] = uVar7 + 1;
LAB_080e9ac4:
            uVar9 = uVar9 + 1 & 0xff;
            puVar2 = puVar8 + 2;
          }
        }
        else {
          uVar9 = uVar9 + 1 & 0xff;
          puVar2 = puVar8 + 1;
          if (0x3ff < uVar7) goto LAB_080e9ac4;
        }
        puVar8 = puVar2;
        param_4 = param_4 - 1 & 0xffff;
      }
      else {
        if (bVar3 == 0xf0) {
          param_3 = param_3 + 1;
          uVar7 = *param_3 + 0xf0;
          goto LAB_080e9a0c;
        }
        if (bVar3 == 0xf1) {
          uVar4 = 0;
        }
        else if (bVar3 == 0xf2) {
          uVar4 = 0x200;
        }
        else if (bVar3 == 0xf7) {
          param_3 = param_3 + 1;
          uVar4 = (DAT_02030656 + (ushort)*param_3) * 0x1000 | 0x400;
        }
        else if (bVar3 == 0xfc) {
          puVar8 = local_28 + 0x40;
          local_30 = local_30 + 2 & 0xff;
          uVar9 = param_1;
          local_28 = puVar8;
        }
        else if (bVar3 == 0xf9) {
          uVar5 = sub_080E9920(uVar9,local_30,DAT_02030be4,param_4);
          uVar5 = uVar5 & 0xffff;
          if (uVar5 == 0) break;
          puVar8 = puVar8 + (param_4 - uVar5);
          uVar9 = uVar9 + (param_4 - uVar5) & 0xff;
          param_4 = uVar5;
        }
        else if (bVar3 < 0xf9) {
          param_3 = param_3 + 1;
        }
      }
      param_3 = param_3 + 1;
      bVar3 = *param_3;
      if ((0xfc < bVar3) || (param_4 == 0)) break;
    } while( true );
  }
  return CONCAT44(in_lr,param_4);
}

