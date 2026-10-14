// sub_08046FEC at 0x08046FEC (thumb)

undefined4 sub_08046FEC(int param_1)

{
  short sVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  ushort *puVar10;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(undefined *)(param_1 + 0xc9) = 0;
    *(undefined2 *)(param_1 + 0xc4) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    pbVar9 = (byte *)(param_1 + 199);
    uVar5 = (ushort)*pbVar9 * 6 + -3 + *(ushort *)(param_1 + 0xc4);
    *(ushort *)(param_1 + 0xc4) = uVar5;
    if (((uVar5 < 0xfe80) && (*pbVar9 == 0)) || ((0x80 < uVar5 && (*pbVar9 == 1)))) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    goto LAB_080471d0;
  case 2:
    *(undefined2 *)(param_1 + 0xc4) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    puVar10 = (ushort *)(param_1 + 0xc4);
    if (*(char *)(param_1 + 0x13) == '\0') {
      uVar7 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar7 & 0x7fffffff;
      if ((uVar7 * 2 >> 0x11 & 1) != 0) {
        sub_0800471C(0x115);
      }
      sub_0809F3F0(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),0);
    }
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
    *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) & 0x1f;
    uVar5 = *puVar10;
    *puVar10 = uVar5 + 1;
    if (0x100 < (ushort)(uVar5 + 1)) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    if (*(char *)(param_1 + 199) == '\0') {
      iVar4 = (short)(&DAT_080fe64c)[*(byte *)puVar10] * 0x1c0;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xff;
      }
      iVar4 = *(int *)(param_1 + 0x54) + (iVar4 >> 8);
    }
    else {
      iVar4 = (short)(&DAT_080fe64c)[*(byte *)puVar10] * 0x1c0;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xff;
      }
      iVar4 = *(int *)(param_1 + 0x54) - (iVar4 >> 8);
    }
    *(int *)(param_1 + 0x54) = iVar4;
    iVar4 = *(short *)((int)&DAT_080fe64c + ((*(byte *)puVar10 + 0x40) * 0x1000000 >> 0x17)) * 0x2c;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (iVar4 >> 8);
    break;
  case 4:
    *(undefined *)(param_1 + 0x13) = 2;
    *(undefined *)(param_1 + 0xc9) = 1;
    *(undefined2 *)(param_1 + 0xc4) = 0xfe80;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    cVar3 = *(char *)(param_1 + 0x13);
    if (cVar3 != '\0') {
      *(char *)(param_1 + 0x13) = cVar3 + -1;
      if (cVar3 == '\x01') {
        *(char *)(param_1 + 0xc9) = cVar3 + -1;
      }
    }
    if (*(char *)(*(int *)(param_1 + 0x2c) + 0xc9) != '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    *(short *)(param_1 + 0xc4) =
         (ushort)*(byte *)(param_1 + 199) * 6 + -3 + *(short *)(param_1 + 0xc4);
LAB_080471d0:
    sub_08045E14(param_1);
    break;
  case 6:
    *(undefined *)(param_1 + 0xc9) = 0;
    sVar1 = *(short *)(param_1 + 0xc4);
    iVar4 = (int)sVar1;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0x1ff;
    }
    *(short *)(param_1 + 0xc4) = sVar1 + (short)(iVar4 >> 9) * -0x200;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    puVar10 = (ushort *)(param_1 + 0xc4);
    bVar2 = false;
    pbVar9 = (byte *)(param_1 + 199);
    if (((*puVar10 < 0xff80) && (*pbVar9 == 0)) || ((0x180 < *puVar10 && (*pbVar9 == 1)))) {
      bVar2 = true;
    }
    *puVar10 = (ushort)*pbVar9 * 6 + -3 + *puVar10;
    iVar6 = (int)(short)*puVar10;
    iVar4 = iVar6;
    if (iVar6 < 0) {
      iVar4 = iVar6 + 0x1ff;
    }
    uVar7 = iVar6 + (iVar4 >> 9) * -0x200;
    *puVar10 = (ushort)uVar7;
    uVar7 = uVar7 & 0xffff;
    if ((((uVar7 < 0xff80) && (*pbVar9 == 0)) || ((0x180 < uVar7 && (*pbVar9 == 1)))) && (!bVar2)) {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 1;
    }
    sub_08045E14(param_1);
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  cVar3 = sub_080FE4D8(*(undefined *)(param_1 + 0x12),7);
  if (cVar3 == '\0') {
    uVar7 = DAT_0202f608 * 0x343fd + 0x269ec3;
    uVar8 = (uVar7 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar8 & 0x7fffffff;
    sub_080BC060(*(int *)(param_1 + 0x54) + ((uVar7 * 0x20 >> 0x15) - 0x400),
                 *(int *)(param_1 + 0x58) + (uVar8 * 0x40 >> 0x16) + 0x800,0,0,
                 *(undefined *)(param_1 + 0x10));
  }
  sub_080041E4(*(undefined *)(param_1 + 0xc6));
  sub_080177F4(param_1);
  return in_lr;
}

