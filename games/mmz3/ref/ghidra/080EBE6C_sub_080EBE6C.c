// sub_080EBE6C at 0x080EBE6C (thumb)

undefined4 sub_080EBE6C(int param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  undefined2 uVar4;
  ushort uVar5;
  short sVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  char *pcVar12;
  uint uVar13;
  int iVar14;
  undefined4 in_lr;
  undefined4 local_30 [2];
  uint local_28;
  uint *local_24;
  
  switch(*(undefined *)(param_1 + 6)) {
  case 0:
    DAT_02030c4c = 0;
    *(undefined2 *)(param_1 + 8) = 0x20;
    *(undefined2 *)(param_1 + 10) = 0x4b0;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  case 1:
    bVar1 = sub_080EC838(param_1);
    bVar2 = *(byte *)(param_1 + 0x236);
    *(byte *)(param_1 + 0x236) = bVar1 | bVar2;
    if ((bVar1 | bVar2) == 0) {
      sVar6 = *(short *)(param_1 + 10) + -1;
      *(short *)(param_1 + 10) = sVar6;
      if (sVar6 == 0) {
        if ((*(ushort *)(param_1 + 8) & 0x60) != 0) {
          *(undefined2 *)(param_1 + 8) = 0;
        }
        *(undefined *)(param_1 + 0x235) = 0x20;
        cVar3 = *(char *)(param_1 + 6) + '\x01';
        break;
      }
      if ((DAT_02002134 & 8) == 0) goto switchD_080ebe8a_caseD_e;
      sub_0800471C(2);
      if ((*(ushort *)(param_1 + 8) & 0x60) != 0) {
        *(undefined2 *)(param_1 + 8) = 0;
      }
    }
    else if ((*(ushort *)(param_1 + 8) & 0x60) != 0) {
      uVar4 = 0;
LAB_080ec468:
      *(undefined2 *)(param_1 + 8) = uVar4;
    }
    cVar3 = '\x03';
    break;
  case 2:
    if (*(char *)(param_1 + 0x235) == '\0') {
      DAT_02002400 = 0;
      DAT_020023c4 = 8;
      DAT_020023c6 = 8;
      *(undefined *)(param_1 + 0x238) = 3;
      *(undefined *)(param_1 + 6) = 0;
      *(undefined *)(param_1 + 5) = 4;
    }
    goto switchD_080ebe8a_caseD_e;
  case 3:
    uVar5 = *(short *)(param_1 + 8) + 1;
    *(ushort *)(param_1 + 8) = uVar5;
    if ((uVar5 & 0x20) == 0) goto switchD_080ebe8a_caseD_e;
    DAT_020023c4 = 8;
    DAT_020023c6 = 8;
    DAT_02002400 = 0x3e43;
    *(undefined2 *)(param_1 + 8) = 0x20;
    *(char *)(param_1 + 0x238) = (char)*(undefined2 *)(param_1 + 0x10);
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  case 4:
    bVar1 = sub_080EC838(param_1);
    bVar2 = *(byte *)(param_1 + 0x236);
    *(byte *)(param_1 + 0x236) = bVar2 | bVar1;
    if (*(short *)(param_1 + 8) < 0x40) {
      *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + 2;
    }
    else if ((bVar2 | bVar1) != 0) {
      *(undefined2 *)(param_1 + 8) = 0;
      *(undefined *)(param_1 + 6) = 6;
    }
    cVar3 = *(char *)(param_1 + 0x238);
    if ((DAT_02002136 & 0x80) != 0) {
      do {
        bVar2 = sub_080FE390(*(byte *)(param_1 + 0x238) + 1,3);
        *(byte *)(param_1 + 0x238) = bVar2;
        if ((bVar2 == 0) || ((bVar2 == 1 && (*(short *)(param_1 + 0x10) != 0)))) break;
      } while ((bVar2 != 2) || (sVar6 = sub_08008B7C(), sVar6 == 0));
    }
    if ((DAT_02002136 & 0x40) != 0) {
      do {
        bVar2 = sub_080FE390(*(byte *)(param_1 + 0x238) + 2,3);
        *(byte *)(param_1 + 0x238) = bVar2;
        if ((bVar2 == 0) || ((bVar2 == 1 && (*(short *)(param_1 + 0x10) != 0)))) break;
      } while ((bVar2 != 2) || (sVar6 = sub_08008B7C(), sVar6 == 0));
    }
    if (cVar3 != *(char *)(param_1 + 0x238)) {
      sub_0800471C(1);
    }
    if ((*(char *)(param_1 + 0x236) != '\0') || ((DAT_02002134 & 9) == 0))
    goto switchD_080ebe8a_caseD_e;
    sub_0800471C(2);
    *(undefined *)(param_1 + 0x235) = 0x20;
    *(undefined2 *)(param_1 + 8) = 0;
    cVar3 = *(char *)(param_1 + 6) + '\x01';
    break;
  case 5:
    *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + 1;
    if (*(char *)(param_1 + 0x235) == '\0') {
      DAT_02002400 = 0;
      *(undefined *)(param_1 + 6) = 0;
      *(undefined *)(param_1 + 5) = 4;
      return in_lr;
    }
    goto switchD_080ebe8a_caseD_e;
  case 6:
    cVar3 = sub_080EC838(param_1);
    sVar6 = *(short *)(param_1 + 8) + 1;
    *(short *)(param_1 + 8) = sVar6;
    if (sVar6 < 0x20) goto switchD_080ebe8a_caseD_e;
    *(undefined *)(param_1 + 0x236) = 0;
    DAT_02002400 = 0;
    sub_080EA120(&DAT_02030eb0);
    if (cVar3 == '\0') {
      cVar3 = '\v';
    }
    else if (*(char *)(param_1 + 0x252) == '\0') {
      sub_080EA244(0x73);
      *(undefined *)(param_1 + 0x238) = 0;
      cVar3 = *(char *)(param_1 + 6) + '\x01';
    }
    else {
      sub_0800471C(6);
      sub_080EA1B8(*(undefined2 *)(&DAT_0838b64a + *(int *)(param_1 + 0x24c) * 2));
      (&DAT_02002358)[(byte)(&DAT_0838b658)[*(int *)(param_1 + 0x24c)]] =
           (char)*(undefined2 *)
                  ((int)&DAT_080fe64c +
                  (((byte)(&DAT_0838b658)[*(int *)(param_1 + 0x24c)] + 0x18) * 0x1000000 >> 0x17));
      sub_08008500();
      *(undefined *)(param_1 + 0x253) = 1;
      cVar3 = '\r';
    }
    break;
  case 7:
    cVar3 = sub_080EC838(param_1);
    sub_080EA16C();
    if ((DAT_02030c1a != 0) && (DAT_02030c1a != 4)) goto switchD_080ebe8a_caseD_e;
    if ((DAT_02002136 & 0x80) == 0) {
      if ((DAT_02002136 & 0x40) != 0) {
        sub_0800471C(1);
        goto LAB_080ec21c;
      }
    }
    else {
      sub_0800471C(1);
LAB_080ec21c:
      *(byte *)(param_1 + 0x238) = *(byte *)(param_1 + 0x238) + 1 & 1;
    }
    iVar7 = 0;
    if ((DAT_02030c1e != '\0') || (DAT_02030c1c == '\x01')) {
      iVar7 = 1;
    }
    sub_080E9604(&DAT_0836f268,iVar7 * -7 + 8,
                 (uint)*(byte *)(param_1 + 0x238) * 2 + 2 + (uint)DAT_02030c1d);
    if (cVar3 == '\0') {
      cVar3 = '\v';
    }
    else if ((DAT_02002134 & 2) == 0) {
      if ((DAT_02002134 & 1) == 0) goto switchD_080ebe8a_caseD_e;
      sub_0800471C(2);
      if (*(byte *)(param_1 + 0x238) == 0) {
        *(undefined *)(param_1 + 0x253) = 1;
        cVar3 = *(char *)(param_1 + 6) + '\x01';
      }
      else {
        *(undefined *)(param_1 + 0x253) = 2;
        cVar3 = '\n';
      }
    }
    else {
      sub_0800471C(3);
      *(undefined *)(param_1 + 0x253) = 2;
      cVar3 = '\n';
    }
    break;
  case 8:
    cVar3 = sub_080EC838(param_1);
    sub_080EA16C();
    if (DAT_02030c1a != 0) {
LAB_080ec416:
      DAT_02030c18 = DAT_02030c18 | 2;
      goto switchD_080ebe8a_caseD_e;
    }
    if (cVar3 != '\0') goto switchD_080ebe8a_caseD_e;
    iVar7 = *(int *)(param_1 + 0x24c);
    if (iVar7 < 0) {
      cVar3 = '\v';
    }
    else {
      uVar11 = (byte)(&DAT_0838b5d0)[iVar7] + 0x3e;
      if (((int)(uint)(byte)(&DAT_02002430)[(int)uVar11 >> 3] >> (uVar11 & 7) & 1U) == 0) {
        sub_080EA1B8(*(undefined2 *)(&DAT_0838b4e0 + ((byte)(&DAT_0838b5d0)[iVar7] - 1) * 2));
      }
      else {
        DAT_02030be4 = &DAT_0836f268 + (ushort)(&DAT_0836e9d8)[iVar7 + 800];
        sub_080EA1B8(0x75);
      }
      cVar3 = DAT_02002475;
      sub_08008530((&DAT_0838b5d0)[*(int *)(param_1 + 0x24c)]);
      if (cVar3 == DAT_02002475) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0x20;
      }
      *(undefined2 *)(param_1 + 8) = uVar4;
      sub_0800471C(6);
      cVar3 = *(char *)(param_1 + 6) + '\x01';
    }
    break;
  case 9:
    sub_080EA16C();
    if (*(short *)(param_1 + 8) != 0) {
      uVar11 = *(ushort *)(param_1 + 8) - 1;
      *(short *)(param_1 + 8) = (short)uVar11;
      iVar7 = (int)(uVar11 * 0x10000) >> 0x10;
      if (iVar7 < 0x11) {
        if (iVar7 < 0x10) goto LAB_080ec3e6;
      }
      else {
        uVar11 = 0x20 - uVar11;
LAB_080ec3e6:
        DAT_02002420 = (ushort)((uVar11 & 0xf) << 4) | (ushort)(uVar11 & 0xf);
      }
      if (*(short *)(param_1 + 8) == 0x10) {
        sub_080ECAE4(param_1);
      }
    }
    goto LAB_080ec45e;
  case 10:
    cVar3 = sub_080EC838(param_1);
    sub_080EA16C();
    if (DAT_02030c1a != 0) goto LAB_080ec416;
    if (cVar3 != '\0') goto switchD_080ebe8a_caseD_e;
    if (*(int *)(param_1 + 0x24c) < 0) goto switchD_080ebe8a_caseD_b;
    goto LAB_080ec466;
  case 0xb:
switchD_080ebe8a_caseD_b:
    sub_0800471C(4);
    sub_080EA1B8(0x74);
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  case 0xc:
    sub_080EA16C();
    if (DAT_02030c1a != 0) goto switchD_080ebe8a_caseD_e;
    *(undefined2 *)(param_1 + 8) = 0x20;
    *(undefined *)(param_1 + 6) = 3;
switchD_080ebe8a_caseD_d:
    sub_080EA16C();
LAB_080ec45e:
    if (DAT_02030c1a != 0) goto switchD_080ebe8a_caseD_e;
LAB_080ec466:
    uVar4 = 0x20;
    goto LAB_080ec468;
  case 0xd:
    goto switchD_080ebe8a_caseD_d;
  default:
    goto switchD_080ebe8a_caseD_e;
  }
  *(char *)(param_1 + 6) = cVar3;
switchD_080ebe8a_caseD_e:
  sub_080041E4(0xf0);
  cVar3 = *(char *)(param_1 + 0x235);
  if (cVar3 == '\0') {
    bVar2 = *(byte *)(param_1 + 0x234);
    if (bVar2 < 0x20) {
      bVar2 = bVar2 + 1;
      *(byte *)(param_1 + 0x234) = bVar2;
      DAT_03002ec0 = '@' - bVar2;
      DAT_03002ec1 = DAT_03002ec0;
      DAT_03002ec2 = DAT_03002ec0;
    }
  }
  else {
    DAT_03002ec0 = cVar3 + -1;
    *(char *)(param_1 + 0x235) = DAT_03002ec0;
    DAT_03002ec1 = DAT_03002ec0;
    DAT_03002ec2 = DAT_03002ec0;
    *(undefined *)(param_1 + 0x234) = 0x20;
  }
  if (*(byte *)(param_1 + 6) < 7) {
    uVar5 = *(ushort *)(param_1 + 8);
    uVar11 = (uint)uVar5;
    if ((uVar5 & 0x40) == 0) {
      local_28 = (int)((uint)(ushort)(&DAT_080fe64c)[(uVar11 & 0x3f) * 2] << 0x10) >> 0x14 & 0xffff;
      if ((uVar5 & 0x20) == 0) {
        uVar5 = 8 - (short)((uVar11 & 0x1f) >> 2);
      }
      else {
        uVar5 = (ushort)((uVar11 & 0x1f) >> 2);
      }
      DAT_02002402 = uVar5 & 0x1f | (0x10 - uVar5) * 0x100;
    }
    else {
      local_28 = 0;
      if (*(byte *)(param_1 + 6) < 4) {
        local_28 = 2;
      }
      DAT_02002402 = 0x808;
    }
    if ((local_28 != 0) && (iVar7 = sub_08001B60(0x500), iVar7 != 0)) {
      DAT_03001708 = &DAT_04000010;
      DAT_0300170c = 0xa6600002;
      puVar8 = (undefined4 *)(iVar7 + 0x2fc);
      DAT_03001704 = iVar7;
      do {
        *puVar8 = 0;
        puVar8 = puVar8 + -1;
      } while (iVar7 <= (int)puVar8);
      iVar14 = 0xc0;
      local_24 = (uint *)(iVar7 + 0x300);
      uVar11 = local_28 >> 1;
      do {
        uVar13 = DAT_02030c4c * 0x41c64e6d + 0x3039;
        DAT_02030c4c = uVar13;
        iVar9 = sub_080FE4D8(uVar13 >> 0x10,local_28);
        DAT_02030c4c = uVar13 * 0x41c64e6d + 0x3039;
        iVar10 = sub_080FE4D8(DAT_02030c4c >> 0x10,local_28);
        *local_24 = (iVar9 - uVar11) * 0x10000 | iVar10 - uVar11 & 0xffff;
        local_24 = local_24 + 1;
        iVar14 = iVar14 + 1;
      } while (iVar14 < 0x120);
      if (iVar14 < 0x140) {
        puVar8 = (undefined4 *)(iVar14 * 4 + iVar7);
        do {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
          iVar14 = iVar14 + 1;
        } while (iVar14 < 0x140);
      }
    }
    if (*(byte *)(param_1 + 6) < 4) {
      *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + 1;
      local_30[0] = 0;
      sub_080FE110(local_30,&DAT_02030eb0,0x1000200);
      sub_080043C4(&DAT_02030eb0,&DAT_085222a0,5,0,0xe);
    }
    else {
      sVar6 = sub_08008B7C();
      if (sVar6 == 0) {
        iVar7 = 0x3fc;
        if (*(char *)(param_1 + 0x238) != '\0') {
          iVar7 = 0x3fe;
        }
        sub_080E9604(&DAT_0836f268 + *(ushort *)((int)&DAT_0836e9d8 + iVar7),7,0xd);
        iVar7 = 0x400;
        if (*(char *)(param_1 + 0x238) != '\x01') {
          iVar7 = 0x402;
        }
        sub_080E9604(&DAT_0836f268 + *(ushort *)((int)&DAT_0836e9d8 + iVar7),6,0xf);
      }
      else {
        pcVar12 = (char *)(param_1 + 0x238);
        iVar7 = 0x3fc;
        if (*pcVar12 != '\0') {
          iVar7 = 0x3fe;
        }
        sub_080E9604(&DAT_0836f268 + *(ushort *)((int)&DAT_0836e9d8 + iVar7),7,0xc);
        iVar7 = 0x400;
        if (*pcVar12 != '\x01') {
          iVar7 = 0x402;
        }
        sub_080E9604(&DAT_0836f268 + *(ushort *)((int)&DAT_0836e9d8 + iVar7),6,0xe);
        iVar7 = 0x404;
        if (*pcVar12 != '\x02') {
          iVar7 = 0x406;
        }
        sub_080E9604(&DAT_0836f268 + *(ushort *)((int)&DAT_0836e9d8 + iVar7),5,0x10);
      }
    }
  }
  return in_lr;
}

