// sub_080F3928 at 0x080F3928 (thumb)

undefined4 sub_080F3928(int param_1)

{
  byte bVar1;
  short sVar2;
  byte *pbVar3;
  byte *pbVar4;
  char cVar5;
  ushort uVar6;
  undefined2 uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 in_lr;
  int local_24;
  
  iVar8 = *(int *)(param_1 + 0x64ac);
  uVar6 = sub_08025A04();
  if ((short)(uVar6 & 0xff) < (short)*(ushort *)(iVar8 + 0xa4)) {
    uVar6 = sub_08025A04(iVar8);
    *(ushort *)(iVar8 + 0xa4) = uVar6 & 0xff;
  }
  *(undefined *)(param_1 + 0xdcc) = 0;
  *(undefined *)(param_1 + 0xdce) = 0;
  *(undefined *)(param_1 + 0xdcf) = 0xff;
  *(undefined *)(param_1 + 0xdd0) = 0;
  *(undefined *)(param_1 + 0xdd1) = 0;
  *(undefined *)(param_1 + 0xdda) = 0;
  *(undefined *)(param_1 + 0xddc) = *(undefined *)(iVar8 + 0xc4);
  if (*(char *)(iVar8 + 0xce) == '\x02') {
    *(undefined *)(param_1 + 0xddc) = 7;
  }
  if (*(char *)(iVar8 + 0xce) == '\x01') {
    *(undefined *)(param_1 + 0xddc) = 6;
  }
  *(undefined *)(param_1 + 0xddd) = 0;
  sub_0800393C(&DAT_08547410,(DAT_020023c6 & 0xc) << 0xc);
  sub_08003E14(&DAT_0854741c,0);
  sub_0800393C(&DAT_085475dc,(DAT_020023c6 & 0xc) * 0x1000);
  sub_08003E14(&DAT_085475e8,0);
  iVar12 = param_1 + 0xed8;
  sub_080FE110(&DAT_085246b8,iVar12,0x1e0);
  pbVar3 = DAT_02030160;
  bVar1 = *DAT_02030160;
  *(ushort *)(param_1 + 0xef0) = bVar1 + 0x148 | 0x4000;
  *(ushort *)(param_1 + 0xf30) = bVar1 + 0x168 | 0x4000;
  uVar6 = 6 - pbVar3[1] & 0xff;
  *(ushort *)(param_1 + 0xf70) = uVar6 + 0x140 | 0x4000;
  *(ushort *)(param_1 + 0xfb0) = uVar6 + 0x160 | 0x4000;
  uVar13 = *(undefined4 *)(pbVar3 + 0xc);
  uVar6 = sub_080FE460(uVar13,0x20f580);
  *(ushort *)(param_1 + 0xf76) = (uVar6 & 0xff) + 0x174 | 0x6000;
  uVar9 = sub_080FE460(uVar13,0x34bc0);
  uVar6 = sub_080FE4D8(uVar9,10);
  *(ushort *)(param_1 + 0xf78) = (uVar6 & 0xff) + 0x174 | 0x6000;
  uVar9 = sub_080FE460(uVar13,0xe10);
  uVar9 = sub_080FE4D8(uVar9,0x3c);
  uVar6 = sub_080FE460(uVar9,10);
  *(ushort *)(param_1 + 0xf7c) = (uVar6 & 0xff) + 0x174 | 0x6000;
  uVar6 = sub_080FE4D8(uVar9,10);
  *(ushort *)(param_1 + 0xf7e) = (uVar6 & 0xff) + 0x174 | 0x6000;
  uVar9 = sub_080FE460(uVar13,0x3c);
  uVar9 = sub_080FE4D8(uVar9,0x3c);
  uVar6 = sub_080FE460(uVar9,10);
  *(ushort *)(param_1 + 0xf82) = (uVar6 & 0xff) + 0x174 | 0x6000;
  uVar6 = sub_080FE4D8(uVar9,10);
  *(ushort *)(param_1 + 0xf84) = (uVar6 & 0xff) + 0x174 | 0x6000;
  if (999 < *(ushort *)(iVar8 + 0xba)) {
    uVar7 = sub_080FE460(*(ushort *)(iVar8 + 0xba),1000);
    uVar6 = sub_080FE4D8(uVar7,10);
    *(ushort *)(param_1 + 0xf8a) = (uVar6 & 0xff) + 0x174 | 0x6000;
  }
  if (99 < *(ushort *)(iVar8 + 0xba)) {
    uVar7 = sub_080FE460(*(ushort *)(iVar8 + 0xba),100);
    uVar6 = sub_080FE4D8(uVar7,10);
    *(ushort *)(param_1 + 0xf8c) = (uVar6 & 0xff) + 0x174 | 0x6000;
  }
  if (9 < *(ushort *)(iVar8 + 0xba)) {
    uVar7 = sub_080FE460(*(ushort *)(iVar8 + 0xba),10);
    uVar6 = sub_080FE4D8(uVar7,10);
    *(ushort *)(param_1 + 0xf8e) = (uVar6 & 0xff) + 0x174 | 0x6000;
  }
  uVar6 = sub_080FE4D8(*(undefined2 *)(iVar8 + 0xba),10);
  *(ushort *)(param_1 + 0xf90) = (uVar6 & 0xff) + 0x174 | 0x6000;
  cVar5 = sub_08025A74(iVar8);
  if (cVar5 == '\x14') {
    uVar14 = 0;
    do {
      iVar10 = uVar14 * 0x40 + iVar12;
      sVar2 = (short)uVar14 * 0x20;
      *(ushort *)(iVar10 + 0x112) = sVar2 + 0x109U | 0x2000;
      *(ushort *)(iVar10 + 0x114) = sVar2 + 0x10aU | 0x2000;
      *(ushort *)(iVar10 + 0x116) = sVar2 + 0x10bU | 0x2000;
      *(ushort *)(iVar10 + 0x118) = sVar2 + 0x107U | 0x2000;
      *(ushort *)(iVar10 + 0x11a) = sVar2 + 0x108U | 0x2000;
      uVar14 = uVar14 + 1 & 0xff;
    } while (uVar14 < 2);
  }
  else {
    cVar5 = sub_08025A74(iVar8);
    if (cVar5 == '\x18') {
      uVar14 = 0;
      do {
        iVar10 = uVar14 * 0x40 + iVar12;
        sVar2 = (short)uVar14 * 0x20;
        *(ushort *)(iVar10 + 0x112) = sVar2 + 0x109U | 0x2000;
        *(ushort *)(iVar10 + 0x114) = sVar2 + 0x10cU | 0x2000;
        *(ushort *)(iVar10 + 0x116) = sVar2 + 0x10dU | 0x2000;
        *(ushort *)(iVar10 + 0x118) = sVar2 + 0x10eU | 0x2000;
        *(ushort *)(iVar10 + 0x11a) = sVar2 + 0x108U | 0x2000;
        uVar14 = uVar14 + 1 & 0xff;
      } while (uVar14 < 2);
    }
    else {
      cVar5 = sub_08025A74(iVar8);
      if (cVar5 == '\x1c') {
        uVar14 = 0;
        do {
          iVar10 = uVar14 * 0x40 + iVar12;
          sVar2 = (short)uVar14 * 0x20;
          *(ushort *)(iVar10 + 0x112) = sVar2 + 0x109U | 0x2000;
          *(ushort *)(iVar10 + 0x114) = sVar2 + 0x10cU | 0x2000;
          *(ushort *)(iVar10 + 0x116) = sVar2 + 0x10fU | 0x2000;
          *(ushort *)(iVar10 + 0x118) = sVar2 + 0x110U | 0x2000;
          *(ushort *)(iVar10 + 0x11a) = sVar2 + 0x111U | 0x2000;
          uVar14 = uVar14 + 1 & 0xff;
        } while (uVar14 < 2);
      }
      else {
        cVar5 = sub_08025A74(iVar8);
        if (cVar5 == ' ') {
          uVar14 = 0;
          do {
            iVar10 = uVar14 * 0x40 + iVar12;
            sVar2 = (short)uVar14 * 0x20;
            *(ushort *)(iVar10 + 0x112) = sVar2 + 0x109U | 0x2000;
            *(ushort *)(iVar10 + 0x114) = sVar2 + 0x10cU | 0x2000;
            *(ushort *)(iVar10 + 0x116) = sVar2 + 0x10fU | 0x2000;
            *(ushort *)(iVar10 + 0x118) = sVar2 + 0x112U | 0x2000;
            *(ushort *)(iVar10 + 0x11a) = sVar2 + 0x113U | 0x2000;
            uVar14 = uVar14 + 1 & 0xff;
          } while (uVar14 < 2);
        }
      }
    }
  }
  pbVar3 = DAT_02030160;
  local_24 = iVar8 + 0xbc;
  iVar12 = param_1 + 0xed8;
  if (DAT_02030160[4] == 0) {
    uVar14 = 0;
    do {
      *(ushort *)(uVar14 * 2 + iVar12 + 0x11e) =
           (byte)(&DAT_0838baec)[(uint)pbVar3[2] * 2] + 0x300 + (short)uVar14 | 0xf000;
      uVar14 = uVar14 + 1 & 0xff;
    } while (uVar14 < 8);
  }
  else {
    uVar14 = 0;
    do {
      *(ushort *)(uVar14 * 2 + iVar12 + 0x11e) =
           (byte)(&DAT_0838bad4)[(uint)pbVar3[4] * 2] + 0x300 + (short)uVar14 | 0xf000;
      pbVar4 = DAT_02030160;
      uVar14 = uVar14 + 1 & 0xff;
    } while (uVar14 < 8);
    uVar11 = (uint)(byte)(&DAT_0838bad5)[(uint)DAT_02030160[4] * 2];
    uVar14 = uVar11 + (byte)(&DAT_0838baed)[(uint)DAT_02030160[2] * 2];
    if (9 < uVar14) {
      uVar11 = (int)(char)(&DAT_0838bad5)[(uint)DAT_02030160[4] * 2] - (uVar14 - 9) & 0xff;
    }
    if ((&DAT_0838baed)[(uint)*(byte *)(param_1 + 0xdcc) * 2] == '\b') {
      uVar11 = uVar11 + 1 & 0xff;
    }
    uVar14 = 0;
    if ((byte)(&DAT_0838baed)[(uint)DAT_02030160[2] * 2] != 0) {
      do {
        *(ushort *)((uVar11 + uVar14) * 2 + iVar12 + 0x15e) =
             (byte)(&DAT_0838baec)[(uint)pbVar4[2] * 2] + 0x300 + (short)uVar14 | 0xf000;
        uVar14 = uVar14 + 1 & 0xff;
      } while (uVar14 < (byte)(&DAT_0838baed)[(uint)pbVar4[2] * 2]);
    }
  }
  sub_080040A8(4,0);
  if (*(byte *)(param_1 + 0xddc) != 0) {
    sub_080040A8(*(byte *)(param_1 + 0xddc) + 0xab,0);
    sub_080041E4(*(byte *)(param_1 + 0xddc) + 0xab);
    sub_08004230(*(byte *)(param_1 + 0xddc) + 0xab);
  }
  sub_0800393C(&DAT_085d7a10,(DAT_0202fa2c - 0x200) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d7a1c,(DAT_0202f82c - 4) * 0x20 + 0x200);
  sub_0800393C(&DAT_085d7a24,(DAT_0202fa2e - 0x27a) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d7a30,(DAT_0202f82e - 6) * 0x20 + 0x200);
  sub_0800393C(&DAT_085d830c,(DAT_0202fb12 - 0x2e1) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d8318,(DAT_0202f912 - 7) * 0x20 + 0x200);
  for (uVar14 = 0; iVar12 = sub_08025A74(iVar8), uVar14 < (uint)(iVar12 << 0x18) >> 0x1a;
      uVar14 = uVar14 + 1 & 0xff) {
    sub_080E62CC(param_1,uVar14,0);
  }
  *(undefined *)(param_1 + 0xddb) = 0;
  sub_080E5D60(param_1,0,0);
  uVar9 = sub_080E59EC(param_1,*(undefined *)(iVar8 + 0xc0),0,0);
  *(undefined4 *)(param_1 + 0xde0) = uVar9;
  *(byte *)(param_1 + 0xddb) = *(byte *)(param_1 + 0xddb) | 1;
  sub_080E5D60(param_1,1,0);
  uVar9 = sub_080E59EC(param_1,*(undefined *)(iVar8 + 0xc1),1,0);
  *(undefined4 *)(param_1 + 0xde4) = uVar9;
  *(byte *)(param_1 + 0xddb) = *(byte *)(param_1 + 0xddb) | 2;
  uVar14 = 0;
  do {
    if (*(char *)(local_24 + uVar14) != -1) {
      sub_080E6094(param_1,uVar14,*(undefined *)(param_1 + 0xdda));
      *(char *)(param_1 + 0xdda) = *(char *)(param_1 + 0xdda) + '\x01';
    }
    uVar14 = uVar14 + 1 & 0xff;
  } while (uVar14 < 4);
  if (*(char *)(param_1 + 0xdda) != '\0') {
    sub_080E5D60(param_1,2,0);
    *(byte *)(param_1 + 0xddb) = *(byte *)(param_1 + 0xddb) | 4;
  }
  bVar1 = *(byte *)(iVar8 + 0xcb);
  if ((((bVar1 & 2) != 0) || ((bVar1 & 4) != 0)) || ((bVar1 & 8) != 0)) {
    sub_080E5D60(param_1,3,0);
    sub_080E64A0(param_1,0,0);
    *(byte *)(param_1 + 0xddb) = *(byte *)(param_1 + 0xddb) | 8;
  }
  bVar1 = *(byte *)(iVar8 + 0xcc);
  if ((((bVar1 & 2) != 0) || ((bVar1 & 4) != 0)) ||
     (((bVar1 & 0x10) != 0 || (((bVar1 & 0x20) != 0 || ((bVar1 & 8) != 0)))))) {
    sub_080E5D60(param_1,4,0);
    sub_080E64A0(param_1,0,1);
    *(byte *)(param_1 + 0xddb) = *(byte *)(param_1 + 0xddb) | 0x10;
  }
  bVar1 = *(byte *)(iVar8 + 0xcd);
  if ((((((bVar1 & 2) != 0) || ((bVar1 & 4) != 0)) || ((bVar1 & 8) != 0)) ||
      (((bVar1 & 0x10) != 0 || ((bVar1 & 0x20) != 0)))) ||
     (((bVar1 & 0x40) != 0 || ((bVar1 & 0x80) != 0)))) {
    sub_080E5D60(param_1,5,0);
    sub_080E64A0(param_1,0,2);
    *(byte *)(param_1 + 0xddb) = *(byte *)(param_1 + 0xddb) | 0x20;
  }
  *(undefined4 *)(param_1 + 0xdec) = 0;
  sub_080E5D60(param_1,6,0);
  bVar1 = *(byte *)(param_1 + 0xddb);
  *(byte *)(param_1 + 0xddb) = bVar1 | 0x40;
  if ((bVar1 & 0x38) != 0) {
    sub_080F381C(param_1 + 0xed8,&DAT_08525ad0,0xc,7);
  }
  sub_08003B28(param_1 + 0xed8,(DAT_020023c6 & 0x1f00) << 3,0x1000);
  *(undefined *)(param_1 + 2) = 2;
  return in_lr;
}

