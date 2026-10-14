// sub_080BC2C4 at 0x080BC2C4 (thumb)

undefined8 sub_080BC2C4(ushort *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  ushort uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ushort *puVar7;
  ushort uVar8;
  undefined4 in_lr;
  
  param_3 = param_3 & 0xffff;
  uVar8 = 0;
  bVar1 = *param_2;
  if ((bVar1 < 0xfd) && (puVar7 = param_1, param_3 != 0)) {
    do {
      if (bVar1 < 0xf0) {
        uVar3 = (ushort)*param_2;
LAB_080bc3a8:
        uVar3 = uVar8 | uVar3;
        puVar4 = DAT_02023628;
        if (DAT_02023628 != (undefined4 *)0x0) {
          do {
            if (uVar3 == *(ushort *)(puVar4 + 1)) {
              *param_1 = *(ushort *)((int)puVar4 + 6) & 0x7fff;
              param_1[0x20] = (*(ushort *)((int)puVar4 + 6) & 0x7fff) + 1;
              param_1 = param_1 + 1;
              param_3 = param_3 - 1 & 0xffff;
              break;
            }
            puVar4 = (undefined4 *)*puVar4;
          } while (puVar4 != (undefined4 *)0x0);
          if (puVar4 != (undefined4 *)0x0) goto LAB_080bc42a;
        }
        puVar4 = &DAT_0202362c;
        puVar5 = DAT_0202362c;
        if (DAT_0202362c != (undefined4 *)0x0) {
          do {
            if (uVar3 == *(ushort *)(puVar5 + 1)) {
              *param_1 = *(ushort *)((int)puVar5 + 6);
              param_1[0x20] = *(short *)((int)puVar5 + 6) + 1;
              param_1 = param_1 + 1;
              *puVar4 = *puVar5;
              *puVar5 = DAT_02023628;
              param_3 = param_3 - 1 & 0xffff;
              DAT_02023628 = puVar5;
              break;
            }
            puVar6 = (undefined4 *)*puVar5;
            puVar4 = puVar5;
            puVar5 = puVar6;
          } while (puVar6 != (undefined4 *)0x0);
          if (puVar5 != (undefined4 *)0x0) goto LAB_080bc42a;
        }
        puVar4 = DAT_02023630;
        if (DAT_02023630 == (undefined4 *)0x0) {
          DAT_02023630 = DAT_0202362c;
          if (DAT_0202362c == (undefined4 *)0x0) break;
          DAT_0202362c = puVar4;
        }
        puVar4 = DAT_02023630;
        puVar5 = (undefined4 *)*DAT_02023630;
        *DAT_02023630 = DAT_02023628;
        DAT_02023630 = puVar5;
        DAT_02023628 = puVar4;
        *(ushort *)(puVar4 + 1) = uVar3;
        *param_1 = *(ushort *)((int)puVar4 + 6);
        param_1[0x20] = *(short *)((int)puVar4 + 6) + 1;
        param_1 = param_1 + 1;
        *(ushort *)((int)puVar4 + 6) = *(ushort *)((int)puVar4 + 6) | 0x8000;
        param_3 = param_3 - 1 & 0xffff;
      }
      else {
        if (bVar1 == 0xf0) {
          param_2 = param_2 + 1;
          uVar3 = *param_2 + 0xf0;
          goto LAB_080bc3a8;
        }
        if (bVar1 == 0xf1) {
          uVar8 = 0;
        }
        else if (bVar1 == 0xf2) {
          uVar8 = 0x8000;
        }
        else if (bVar1 == 0xfc) {
          param_1 = puVar7 + 0x40;
          puVar7 = param_1;
        }
        else if (bVar1 == 0xf9) {
          uVar2 = sub_080BC2C4(param_1,DAT_02023634,param_3);
          uVar2 = uVar2 & 0xffff;
          if (uVar2 == 0) break;
          param_1 = param_1 + (param_3 - uVar2);
          param_3 = uVar2;
        }
        else if (bVar1 < 0xf9) {
          param_2 = param_2 + 1;
        }
      }
LAB_080bc42a:
      param_2 = param_2 + 1;
      bVar1 = *param_2;
      if ((0xfc < bVar1) || (param_3 == 0)) break;
    } while( true );
  }
  return CONCAT44(in_lr,param_3);
}

