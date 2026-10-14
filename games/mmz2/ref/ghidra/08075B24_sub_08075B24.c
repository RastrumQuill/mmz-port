// sub_08075B24 at 0x08075B24 (thumb)

undefined4 sub_08075B24(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined2 uVar3;
  int iVar4;
  char *pcVar5;
  undefined2 *puVar6;
  ushort *puVar7;
  uint uVar8;
  short *psVar9;
  int iVar10;
  undefined4 in_lr;
  
  if ((*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) && (*(byte *)(param_1 + 0xd) < 9)) {
    sub_080128D4(param_1);
    cVar1 = *(char *)(param_1 + 0xd);
    if (cVar1 == '\0') {
      iVar10 = *(int *)(param_1 + 0x5c);
      iVar4 = iVar10 * (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x12) + 0x40 & 0xff];
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xff;
      }
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (iVar4 >> 8);
      iVar4 = iVar10 * (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x12)];
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xff;
      }
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (iVar4 >> 8);
      *(int *)(param_1 + 0x5c) = iVar10 + -0x10;
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      sub_080127E4(param_1,0x3202);
      sub_080128D4(param_1);
    }
    else if (cVar1 == '\x01') {
      iVar10 = *(int *)(param_1 + 0x5c);
      iVar4 = iVar10 * (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x12) + 0x40 & 0xff];
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xff;
      }
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (iVar4 >> 8);
      iVar4 = iVar10 * (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x12)];
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xff;
      }
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (iVar4 >> 8);
      *(int *)(param_1 + 0x5c) = iVar10 + -0x10;
      if (iVar10 + -0x10 != 0) {
        return in_lr;
      }
      sub_080127E4(param_1,0x3203);
      sub_080128D4(param_1);
    }
    else if (cVar1 == '\x02') {
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      sub_080126A0(param_1);
      sub_080127E4(param_1,0x3300);
      sub_080128D4(param_1);
      *(undefined *)(param_1 + 0xbd) = 0;
      puVar6 = (undefined2 *)(param_1 + 0xbe);
      *puVar6 = 0x10;
      *(undefined *)(param_1 + 0x24) = *(undefined *)(param_1 + 0xbd);
      *(undefined2 *)(param_1 + 0x50) = *puVar6;
      *(undefined2 *)(param_1 + 0x52) = *puVar6;
      uVar3 = sub_080032EC(0x4e);
      *(undefined2 *)(param_1 + 0xc0) = uVar3;
    }
    else if (cVar1 == '\x03') {
      pcVar5 = (char *)(param_1 + 0xbd);
      *pcVar5 = *pcVar5 + -3;
      puVar7 = (ushort *)(param_1 + 0xbe);
      *puVar7 = *puVar7 + 8;
      *(char *)(param_1 + 0x24) = *pcVar5;
      *(ushort *)(param_1 + 0x50) = *puVar7;
      *(ushort *)(param_1 + 0x52) = *puVar7;
      if (*puVar7 < 0x100) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0x12) = 0x80;
      *(undefined *)(param_1 + 0x13) = 0;
    }
    else if (cVar1 == '\x04') {
      cVar1 = *(char *)(param_1 + 0xbd) + -3;
      *(char *)(param_1 + 0xbd) = cVar1;
      *(char *)(param_1 + 0x24) = cVar1;
      if ((*(byte *)(param_1 + 0x12) & 3) == 0) {
        uVar8 = DAT_0202e188 * 0x343fd + 0x269ec3;
        DAT_0202e188 = uVar8 & 0x7fffffff;
        sub_080B4EDC(param_1,0,(uVar8 * 2 >> 0x11 & 0xf) + (uint)*(byte *)(param_1 + 0x13) & 0xff);
      }
      if ((*(byte *)(param_1 + 0x12) & 7) == 0) {
        uVar8 = DAT_0202e188 * 0x343fd + 0x269ec3;
        DAT_0202e188 = uVar8 & 0x7fffffff;
        sub_080754C8(param_1,0,uVar8 * 2 >> 0x11 & 1,*(undefined *)(param_1 + 0x13));
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + 'B';
      }
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      if (cVar1 != -1) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0x12) = 0x80;
    }
    else if (cVar1 == '\x05') {
      cVar1 = *(char *)(param_1 + 0xbd) + -3;
      *(char *)(param_1 + 0xbd) = cVar1;
      *(char *)(param_1 + 0x24) = cVar1;
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      if (cVar1 != -1) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0x12) = 0x40;
    }
    else if (cVar1 == '\x06') {
      cVar1 = sub_080EF150(0x20 - (uint)*(byte *)(param_1 + 0x12),0xb);
      cVar1 = *(char *)(param_1 + 0xbd) + cVar1;
      *(char *)(param_1 + 0xbd) = cVar1;
      *(char *)(param_1 + 0x24) = cVar1;
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      if (cVar1 != -1) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0x12) = 0x80;
      *(undefined *)(param_1 + 0x13) = 0;
    }
    else if (cVar1 == '\a') {
      cVar1 = *(char *)(param_1 + 0xbd) + '\x03';
      *(char *)(param_1 + 0xbd) = cVar1;
      *(char *)(param_1 + 0x24) = cVar1;
      if ((*(byte *)(param_1 + 0x12) & 3) == 0) {
        uVar8 = DAT_0202e188 * 0x343fd + 0x269ec3;
        DAT_0202e188 = uVar8 & 0x7fffffff;
        sub_080B4EDC(param_1,1,(uVar8 * 2 >> 0x11 & 0xf) + (uint)*(byte *)(param_1 + 0x13) & 0xff);
      }
      if ((*(byte *)(param_1 + 0x12) & 7) == 0) {
        uVar8 = DAT_0202e188 * 0x343fd + 0x269ec3;
        DAT_0202e188 = uVar8 & 0x7fffffff;
        sub_080754C8(param_1,1,uVar8 * 2 >> 0x11 & 1,*(undefined *)(param_1 + 0x13));
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + -0x42;
      }
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      if (cVar1 != -1) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0x12) = 0x40;
    }
    else {
      pcVar5 = (char *)(param_1 + 0xbd);
      *pcVar5 = *pcVar5 + '\x03';
      psVar9 = (short *)(param_1 + 0xbe);
      *psVar9 = *psVar9 + 3;
      *(char *)(param_1 + 0x24) = *pcVar5;
      *(short *)(param_1 + 0x50) = *psVar9;
      *(short *)(param_1 + 0x52) = *psVar9;
      if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
        bVar2 = *(byte *)(param_1 + 10) | 1;
      }
      else {
        bVar2 = *(byte *)(param_1 + 10) & 0xfe;
      }
      *(byte *)(param_1 + 10) = bVar2;
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      if (cVar1 != -1) {
        return in_lr;
      }
    }
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else {
    sub_08003338((int)*(short *)(param_1 + 0xc0));
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

