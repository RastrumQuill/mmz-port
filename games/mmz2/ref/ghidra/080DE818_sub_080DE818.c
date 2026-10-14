// sub_080DE818 at 0x080DE818 (thumb)

undefined8 sub_080DE818(ushort *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  ushort uVar7;
  ushort *puVar8;
  undefined4 in_lr;
  
  param_3 = param_3 & 0xffff;
  uVar4 = 0;
  puVar8 = param_1;
  while ((bVar1 = *param_2, bVar1 < 0xfd && (param_3 != 0))) {
    if (bVar1 < 0xf0) {
      uVar7 = (ushort)*param_2;
LAB_080de8c8:
      uVar7 = uVar7 | uVar4;
      iVar6 = sub_080DE954(uVar7);
      if (iVar6 == 0) break;
      *(ushort *)(iVar6 + 4) = uVar7;
      uVar2 = uVar4 & 0xf000 | *(ushort *)(iVar6 + 6) & 0xfff;
      *param_1 = uVar2;
      param_1[0x20] = uVar2 + 1;
      puVar3 = param_1 + 1;
      if (0x3ff < uVar7) {
        iVar6 = sub_080DE954(uVar7 | 0x800);
        if (iVar6 == 0) break;
        *(ushort *)(iVar6 + 4) = uVar7 | 0x800;
        uVar7 = uVar4 & 0xf000 | *(ushort *)(iVar6 + 6) & 0xfff;
        param_1[1] = uVar7;
        param_1[0x21] = uVar7 + 1;
        puVar3 = param_1 + 2;
      }
      param_1 = puVar3;
      param_3 = param_3 - 1 & 0xffff;
    }
    else {
      if (bVar1 == 0xf0) {
        param_2 = param_2 + 1;
        uVar7 = *param_2 + 0xf0;
        goto LAB_080de8c8;
      }
      if (bVar1 == 0xf1) {
        uVar4 = 0;
      }
      else if (bVar1 == 0xf2) {
        uVar4 = 0x200;
      }
      else if (bVar1 == 0xf7) {
        param_2 = param_2 + 1;
        uVar4 = (*param_2 + 2) * 0x1000 | 0x400;
      }
      else if (bVar1 == 0xfc) {
        param_1 = puVar8 + 0x40;
        puVar8 = param_1;
      }
      else if (bVar1 == 0xf9) {
        uVar5 = sub_080DE818(param_1,DAT_0202f634,param_3);
        uVar5 = uVar5 & 0xffff;
        if (uVar5 == 0) break;
        param_1 = param_1 + (param_3 - uVar5);
        param_3 = uVar5;
      }
      else if (bVar1 < 0xf9) {
        param_2 = param_2 + 1;
      }
    }
    param_2 = param_2 + 1;
  }
  return CONCAT44(in_lr,param_3);
}

