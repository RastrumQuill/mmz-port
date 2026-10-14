// sub_0802424C at 0x0802424C (thumb)

undefined8 sub_0802424C(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x191);
  if ((bVar1 & 0x1e) == 0) {
    if ((*(uint *)(param_1 + 0x8c) & 0x400) != 0) {
      *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
      *(undefined *)(param_1 + 0xd) = 5;
      *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
      *(ushort *)(param_1 + 0xe) = bVar1 & 0x1e;
      *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
      *(undefined *)(param_1 + 0x176) = 0;
      *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
      *(undefined *)(param_1 + 0x177) = 0;
      *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
      *(undefined *)(param_1 + 0x178) = 0;
      *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
      *(undefined *)(param_1 + 0x179) = 0;
      uVar3 = 5;
      goto LAB_08024602;
    }
    *(undefined *)(param_1 + 0x4d) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
    if (bVar1 == 0) {
      if (*(char *)(param_1 + 0xe) != '\x04') {
        if (((*(byte *)(param_1 + 0x196) & 0x20) != 0) &&
           (iVar5 = sub_08032DC0(param_1,*(undefined4 *)(param_1 + 0xd8)), iVar5 != 0)) {
          iVar5 = sub_08032DEC(param_1,0);
          iVar4 = sub_08032DEC(param_1,1);
          if ((iVar5 != 0) || (iVar4 != 0)) {
            *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
            *(undefined *)(param_1 + 0xd) = 2;
            *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
            *(undefined2 *)(param_1 + 0xe) = 0;
            puVar6 = (undefined *)(param_1 + 0x176);
            *(undefined *)(param_1 + 0x17a) = *puVar6;
            *puVar6 = 0;
            puVar7 = (undefined *)(param_1 + 0x177);
            *(undefined *)(param_1 + 0x17b) = *puVar7;
            *puVar7 = 0;
            puVar9 = (undefined *)(param_1 + 0x178);
            *(undefined *)(param_1 + 0x17c) = *puVar9;
            *puVar9 = 0;
            puVar8 = (undefined *)(param_1 + 0x179);
            *(undefined *)(param_1 + 0x17d) = *puVar8;
            *puVar8 = 0;
            sub_08034AB4(param_1);
            *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
            *(undefined *)(param_1 + 0xd) = 1;
            *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
            *(undefined2 *)(param_1 + 0xe) = 0;
            *(undefined *)(param_1 + 0x17a) = *puVar6;
            *puVar6 = 0;
            *(undefined *)(param_1 + 0x17b) = *puVar7;
            *puVar7 = 0;
            *(undefined *)(param_1 + 0x17c) = *puVar9;
            *puVar9 = 0;
            *(undefined *)(param_1 + 0x17d) = *puVar8;
            *puVar8 = 0;
            if (iVar5 == 0) {
              *(undefined2 *)(param_1 + 0xe8) = 0;
            }
            if (iVar4 == 0) {
              *(undefined2 *)(param_1 + 0xea) = 0;
            }
            goto LAB_08024600;
          }
        }
        if ((*(char *)(param_1 + 0xe) == '\x02') &&
           (iVar5 = sub_08032CC0(param_1,*(undefined4 *)(param_1 + 0xd8),
                                 *(undefined4 *)(param_1 + 0xc4)), iVar5 != 0)) {
          *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
          *(undefined *)(param_1 + 0xd) = 2;
          *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
          *(undefined2 *)(param_1 + 0xe) = 0;
          *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
          *(undefined *)(param_1 + 0x176) = 0;
          *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
          *(undefined *)(param_1 + 0x177) = 0;
          *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
          *(undefined *)(param_1 + 0x178) = 0;
          *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
          *(undefined *)(param_1 + 0x179) = 0;
          uVar3 = 2;
          goto LAB_08024602;
        }
        if (((*(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195)) & 1) != 0) &&
           (sVar2 = sub_08021534(param_1 + 0x54,*(undefined4 *)(param_1 + 0xd8),
                                 *(byte *)(param_1 + 10) >> 4 & 1,0x500,0x200,1), sVar2 != 0)) {
          *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
          *(undefined *)(param_1 + 0xd) = 3;
          *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
          *(undefined2 *)(param_1 + 0xe) = 0;
          *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
          *(undefined *)(param_1 + 0x176) = 0;
          *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
          *(undefined *)(param_1 + 0x177) = 0;
          *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
          *(undefined *)(param_1 + 0x178) = 0;
          *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
          *(undefined *)(param_1 + 0x179) = 0;
          uVar3 = 3;
          goto LAB_08024602;
        }
        if ((*(char *)(param_1 + 0xe) == '\x01') &&
           (((*(char *)(param_1 + 0xf) == '\0' || (*(char *)(param_1 + 0xf) == '\x02')) &&
            ((*(byte *)((uint)*(byte *)(param_1 + 0x195) + param_1 + 0x198) & 0x20) == 0)))) {
          *(undefined *)(param_1 + 0x175) = 1;
          *(undefined2 *)(param_1 + 0xe) = 2;
        }
      }
LAB_08024600:
      uVar3 = 1;
      goto LAB_08024602;
    }
    *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 0;
  }
  else {
    *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 0;
  }
  *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
  *(undefined *)(param_1 + 0x176) = 0;
  *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
  *(undefined *)(param_1 + 0x177) = 0;
  *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
  *(undefined *)(param_1 + 0x178) = 0;
  *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
  *(undefined *)(param_1 + 0x179) = 0;
  uVar3 = 7;
LAB_08024602:
  return CONCAT44(in_lr,uVar3);
}

