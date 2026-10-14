// sub_080236EC at 0x080236EC (thumb)

undefined8 sub_080236EC(int param_1)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  short sVar6;
  undefined4 uVar7;
  byte *pbVar8;
  int iVar9;
  uint *puVar10;
  undefined4 in_lr;
  
  bVar2 = *(byte *)(param_1 + 0x191);
  if ((bVar2 & 0x1e) == 0) {
    puVar10 = (uint *)(param_1 + 0x8c);
    if ((*puVar10 & 0x400) != 0) {
      *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
      *(undefined *)(param_1 + 0xd) = 5;
      *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
      *(ushort *)(param_1 + 0xe) = bVar2 & 0x1e;
      *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
      *(undefined *)(param_1 + 0x176) = 0;
      *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
      *(undefined *)(param_1 + 0x177) = 0;
      *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
      *(undefined *)(param_1 + 0x178) = 0;
      *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
      *(undefined *)(param_1 + 0x179) = 0;
      uVar7 = 5;
      goto LAB_08023c82;
    }
    *(undefined *)(param_1 + 0x4d) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
    if (bVar2 == 0) {
      if ((*(ushort *)(param_1 + 0xe4) & 0xf) == 0) {
        *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
        *(undefined *)(param_1 + 0xd) = 1;
        *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
        *(ushort *)(param_1 + 0xe) = *(ushort *)(param_1 + 0xe4) & 0xf;
        *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
        *(undefined *)(param_1 + 0x176) = 0;
LAB_080238ec:
        *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
        *(undefined *)(param_1 + 0x177) = 0;
        *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
        *(undefined *)(param_1 + 0x178) = 0;
        *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
        *(undefined *)(param_1 + 0x179) = 0;
        uVar7 = 1;
      }
      else {
        cVar5 = *(char *)(param_1 + 0x2b6);
        pbVar8 = (byte *)(param_1 + 0x176);
        bVar1 = 1 < *pbVar8;
        if (bVar1) {
          if (cVar5 == '\x01') {
            iVar9 = sub_080358B4(param_1);
            if (iVar9 != 0) goto LAB_080238ae;
          }
          else if (cVar5 != '\x02') goto LAB_080238ae;
        }
        else {
LAB_080238ae:
          bVar2 = *(byte *)(param_1 + 0x196);
          bVar3 = bVar2 & 0x20;
          if ((bVar2 & 0x20) != 0) {
            *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
            *(undefined *)(param_1 + 0xd) = 1;
            *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
            *(undefined2 *)(param_1 + 0xe) = 0;
            *(byte *)(param_1 + 0x17a) = *pbVar8;
            *pbVar8 = 0;
            goto LAB_080238ec;
          }
          if ((((bVar1) && (cVar5 == '\x03')) || (cVar4 = sub_0801E91C(param_1), cVar4 == '\0')) ||
             (iVar9 = sub_08031830(param_1), iVar9 == 0)) {
            if ((((bVar1) && (cVar5 == '\x03')) && (*(char *)(param_1 + 0x177) == '\x02')) ||
               ((*(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195)) & 0xc) == 0)) {
              if ((!bVar1) || (cVar5 == '\0')) {
                if ((((*(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195)) & 1) != 0) &&
                    (sVar6 = sub_08021534(param_1 + 0x54,*(undefined4 *)(param_1 + 0xd8),
                                          *(byte *)(param_1 + 10) >> 4 & 1,0x500,0x200,1),
                    sVar6 != 0)) ||
                   (((*(byte *)((uint)*(byte *)(param_1 + 0x195) + param_1 + 0x198) & 2) != 0 &&
                    (sVar6 = sub_080215DC(param_1 + 0x54,*(undefined4 *)(param_1 + 0xd8),
                                          *(byte *)(param_1 + 10) >> 4 & 1,0x500,0x200,1),
                    sVar6 != 0)))) {
                  *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
                  *(undefined *)(param_1 + 0xd) = 3;
                  *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
                  *(undefined2 *)(param_1 + 0xe) = 0;
                  *(byte *)(param_1 + 0x17a) = *pbVar8;
                  *pbVar8 = 0;
                  *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
                  *(undefined *)(param_1 + 0x177) = 0;
                  *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
                  *(undefined *)(param_1 + 0x178) = 0;
                  *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
                  *(undefined *)(param_1 + 0x179) = 0;
                  uVar7 = 3;
                  goto LAB_08023c82;
                }
              }
              if ((!bVar1) && ((*(byte *)(param_1 + 0x196) & 1) != 0)) {
                if ((*puVar10 & 0x80000000) != 0) {
                  *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
                  *(undefined *)(param_1 + 0xd) = 0xc;
                  *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
                  *(ushort *)(param_1 + 0xe) = (ushort)bVar1;
                  *(byte *)(param_1 + 0x17a) = *pbVar8;
                  *pbVar8 = 0;
                  *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
                  *(undefined *)(param_1 + 0x177) = 0;
                  *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
                  *(undefined *)(param_1 + 0x178) = 0;
                  *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
                  *(undefined *)(param_1 + 0x179) = 0;
                  uVar7 = 0xc;
                  goto LAB_08023c82;
                }
                if (((*puVar10 & 0x40000000) != 0) && (cVar5 = sub_0801F0F0(param_1), cVar5 != '\0')
                   ) {
                  *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
                  *(undefined *)(param_1 + 0xd) = 10;
                  *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
                  *(undefined2 *)(param_1 + 0xe) = 0;
                  *(byte *)(param_1 + 0x17a) = *pbVar8;
                  *pbVar8 = 0;
                  *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
                  *(undefined *)(param_1 + 0x177) = 0;
                  *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
                  *(undefined *)(param_1 + 0x178) = 0;
                  *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
                  *(undefined *)(param_1 + 0x179) = 0;
                  uVar7 = 10;
                  goto LAB_08023c82;
                }
                if ((*puVar10 & 0x20000000) != 0) {
                  *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
                  *(undefined *)(param_1 + 0xd) = 0xb;
                  *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
                  *(undefined2 *)(param_1 + 0xe) = 0;
                  *(byte *)(param_1 + 0x17a) = *pbVar8;
                  *pbVar8 = 0;
                  *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
                  *(undefined *)(param_1 + 0x177) = 0;
                  *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
                  *(undefined *)(param_1 + 0x178) = 0;
                  *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
                  *(undefined *)(param_1 + 0x179) = 0;
                  uVar7 = 0xb;
                  goto LAB_08023c82;
                }
              }
            }
            else {
              *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
              *(undefined *)(param_1 + 0xd) = 0;
              *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
              *(undefined2 *)(param_1 + 0xe) = 1;
              *(byte *)(param_1 + 0x17a) = *pbVar8;
              *pbVar8 = 0;
              *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
              *(undefined *)(param_1 + 0x177) = 0;
              *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
              *(undefined *)(param_1 + 0x178) = 0;
              *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
              *(undefined *)(param_1 + 0x179) = 0;
            }
          }
          else {
            *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
            *(byte *)(param_1 + 0xd) = bVar3;
            *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
            *(undefined2 *)(param_1 + 0xe) = 2;
            *(byte *)(param_1 + 0x17a) = *pbVar8;
            *pbVar8 = bVar3;
            *(byte *)(param_1 + 0x17b) = *(byte *)(param_1 + 0x177);
            *(byte *)(param_1 + 0x177) = bVar3;
            *(byte *)(param_1 + 0x17c) = *(byte *)(param_1 + 0x178);
            *(byte *)(param_1 + 0x178) = bVar3;
            *(byte *)(param_1 + 0x17d) = *(byte *)(param_1 + 0x179);
            *(byte *)(param_1 + 0x179) = bVar3;
          }
        }
        uVar7 = 0;
      }
      goto LAB_08023c82;
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
  uVar7 = 7;
LAB_08023c82:
  return CONCAT44(in_lr,uVar7);
}

