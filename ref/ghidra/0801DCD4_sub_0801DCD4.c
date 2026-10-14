// sub_0801DCD4 at 0x0801DCD4 (thumb)

undefined8 sub_0801DCD4(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  ushort uVar5;
  undefined4 uVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  undefined4 in_lr;
  
  if ((*(ushort *)(param_1 + 0x90) & 0x80) != 0) {
    *(undefined *)(param_1 + 0xbc) = *(undefined *)(param_1 + 0xd);
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xc1) = *(undefined *)(param_1 + 0xbe);
    *(undefined *)(param_1 + 0xbe) = 0;
    *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
    *(undefined *)(param_1 + 0xbf) = 0;
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 0;
    uVar6 = 5;
    goto LAB_0801e0ea;
  }
  *(byte *)(param_1 + 0x45) = (byte)*(ushort *)(param_1 + 0x90) & 0x80;
  uVar8 = *(byte *)(param_1 + 10) & 0xdf;
  *(char *)(param_1 + 10) = (char)uVar8;
  iVar9 = param_1 + 0x4c;
  uVar5 = sub_080191B4(iVar9,param_1 + 0xc4,*(undefined4 *)(param_1 + 0x108),uVar8 >> 4 & 1,0x800,1)
  ;
  *(ushort *)(param_1 + 0x110) = uVar5 & 0xff;
  if ((uVar5 & 0xf) == 0) {
    *(undefined *)(param_1 + 0xbc) = *(undefined *)(param_1 + 0xd);
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xc1) = *(undefined *)(param_1 + 0xbe);
    *(undefined *)(param_1 + 0xbe) = 0;
LAB_0801de3e:
    *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
    *(undefined *)(param_1 + 0xbf) = 0;
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 0;
    uVar6 = 1;
  }
  else {
    cVar4 = *(char *)(param_1 + 0x11);
    pbVar7 = (byte *)(param_1 + 0xbe);
    bVar1 = 1 < *pbVar7;
    if (bVar1) {
      if (cVar4 == '\x01') {
        if (((*(char *)(param_1 + 0xbf) != '\x02') && (*(char *)(param_1 + 0xc0) != '\x02')) &&
           ((*(char *)(param_1 + 0xc0) != '\x03' ||
            ((int)(uint)(byte)(&DAT_082a9921)[(uint)*(byte *)(param_1 + 0x11f) * 2] <=
             (int)*(char *)(param_1 + 0x71))))) goto LAB_0801de06;
      }
      else if (cVar4 != '\x02') goto LAB_0801de06;
    }
    else {
LAB_0801de06:
      bVar2 = *(byte *)(param_1 + 0x12d) & 0x20;
      if ((*(byte *)(param_1 + 0x12d) & 0x20) != 0) {
        *(undefined *)(param_1 + 0xbc) = *(undefined *)(param_1 + 0xd);
        *(undefined *)(param_1 + 0xd) = 1;
        *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
        *(undefined2 *)(param_1 + 0xe) = 0;
        *(byte *)(param_1 + 0xc1) = *pbVar7;
        *pbVar7 = 0;
        goto LAB_0801de3e;
      }
      if (((bVar1) && (cVar4 == '\x03')) || (cVar3 = sub_08016EC0(param_1), cVar3 == '\0')) {
        if ((((bVar1) && (cVar4 == '\x03')) && (*(char *)(param_1 + 0xbf) == '\x02')) ||
           ((*(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130) & 0xc) == 0)) {
          if (((!bVar1) || (cVar4 == '\0')) &&
             ((((*(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130) & 1) != 0 &&
               (cVar4 = sub_0801A900(iVar9,*(undefined4 *)(param_1 + 0x108),
                                     *(byte *)(param_1 + 10) >> 4 & 1,0x500,0x200,1), cVar4 != '\0')
               ) || (((*(byte *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130) & 2) != 0 &&
                     (cVar4 = sub_0801A99C(iVar9,*(undefined4 *)(param_1 + 0x108),
                                           *(byte *)(param_1 + 10) >> 4 & 1,0x500,0x200,1),
                     cVar4 != '\0')))))) {
            *(undefined *)(param_1 + 0xbc) = *(undefined *)(param_1 + 0xd);
            *(undefined *)(param_1 + 0xd) = 3;
            *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
            *(undefined2 *)(param_1 + 0xe) = 0;
            *(byte *)(param_1 + 0xc1) = *pbVar7;
            *pbVar7 = 0;
            *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
            *(undefined *)(param_1 + 0xbf) = 0;
            *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
            *(undefined *)(param_1 + 0xc0) = 0;
            uVar6 = 3;
            goto LAB_0801e0ea;
          }
          if ((!bVar1) && ((*(byte *)(param_1 + 0x12d) & 1) != 0)) {
            uVar5 = *(ushort *)(param_1 + 0x90);
            if ((uVar5 & 0x8000) != 0) {
              *(undefined *)(param_1 + 0xbc) = *(undefined *)(param_1 + 0xd);
              *(undefined *)(param_1 + 0xd) = 0xb;
              *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
              *(ushort *)(param_1 + 0xe) = (ushort)bVar1;
              *(byte *)(param_1 + 0xc1) = *pbVar7;
              *pbVar7 = 0;
              *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
              *(undefined *)(param_1 + 0xbf) = 0;
              *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
              *(undefined *)(param_1 + 0xc0) = 0;
              uVar6 = 0xb;
              goto LAB_0801e0ea;
            }
            if (((uVar5 & 0x4000) != 0) && (cVar4 = sub_0801916C(param_1), cVar4 != '\0')) {
              *(undefined *)(param_1 + 0xbc) = *(undefined *)(param_1 + 0xd);
              *(undefined *)(param_1 + 0xd) = 9;
              *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
              *(ushort *)(param_1 + 0xe) = uVar5 & 0x8000;
              *(byte *)(param_1 + 0xc1) = *pbVar7;
              *pbVar7 = 0;
              *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
              *(undefined *)(param_1 + 0xbf) = 0;
              *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
              *(undefined *)(param_1 + 0xc0) = 0;
              uVar6 = 9;
              goto LAB_0801e0ea;
            }
            if ((*(ushort *)(param_1 + 0x90) & 0x2000) != 0) {
              *(undefined *)(param_1 + 0xbc) = *(undefined *)(param_1 + 0xd);
              *(undefined *)(param_1 + 0xd) = 10;
              *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
              *(undefined2 *)(param_1 + 0xe) = 0;
              *(byte *)(param_1 + 0xc1) = *pbVar7;
              *pbVar7 = 0;
              *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
              *(undefined *)(param_1 + 0xbf) = 0;
              *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
              *(undefined *)(param_1 + 0xc0) = 0;
              uVar6 = 10;
              goto LAB_0801e0ea;
            }
          }
        }
        else {
          *(undefined *)(param_1 + 0xbc) = *(undefined *)(param_1 + 0xd);
          *(undefined *)(param_1 + 0xd) = 0;
          *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
          *(undefined2 *)(param_1 + 0xe) = 1;
          *(byte *)(param_1 + 0xc1) = *pbVar7;
          *pbVar7 = 0;
          *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
          *(undefined *)(param_1 + 0xbf) = 0;
          *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
          *(undefined *)(param_1 + 0xc0) = 0;
        }
      }
      else {
        *(undefined *)(param_1 + 0xbc) = *(undefined *)(param_1 + 0xd);
        *(byte *)(param_1 + 0xd) = bVar2;
        *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
        *(undefined2 *)(param_1 + 0xe) = 2;
        *(byte *)(param_1 + 0xc1) = *pbVar7;
        *pbVar7 = bVar2;
        *(byte *)(param_1 + 0xc2) = *(byte *)(param_1 + 0xbf);
        *(byte *)(param_1 + 0xbf) = bVar2;
        *(byte *)(param_1 + 0xc3) = *(byte *)(param_1 + 0xc0);
        *(byte *)(param_1 + 0xc0) = bVar2;
      }
    }
    uVar6 = 0;
  }
LAB_0801e0ea:
  return CONCAT44(in_lr,uVar6);
}

