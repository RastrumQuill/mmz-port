// sub_08111728 at 0x08111728 (thumb)

undefined4 sub_08111728(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 in_lr;
  char cVar11;
  
  uVar10 = 0;
  uVar9 = 0;
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
LAB_0811183a:
    pcVar7 = (char *)(param_1 + 0x244);
    cVar11 = *pcVar7;
    if ((DAT_02000766 & 0x80) != 0) {
      *pcVar7 = cVar11 + '\x01';
    }
    if ((DAT_02000766 & 0x40) != 0) {
      *pcVar7 = *pcVar7 + -1 + *(char *)(param_1 + 0x245);
    }
    cVar2 = sub_08128A9C(*pcVar7,*(undefined *)(param_1 + 0x245));
    *pcVar7 = cVar2;
    if (cVar11 != cVar2) {
      sub_08002B10(1);
    }
    if (*(short *)(param_1 + 8) < 0x10) {
      uVar5 = *(short *)(param_1 + 8) + 1;
      *(ushort *)(param_1 + 8) = uVar5;
      DAT_02000a42 = uVar5 & 0x1f | (0x10 - uVar5) * 0x100;
    }
    if (0x1f < *(short *)(param_1 + 10)) {
      if ((DAT_02000764 & 9) == 0) {
        if ((DAT_02000764 & 2) != 0) {
          sub_08002B10(3);
          sub_08002624(0x33);
          *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
        }
      }
      else {
        sub_08002B10(2);
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x02';
      }
      goto LAB_08111998;
    }
    sVar3 = *(short *)(param_1 + 10) + 1;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) goto LAB_08111998;
      DAT_02000a00 = DAT_02000a00 & 0xf0f8 | 0x3900;
      DAT_02000a0a = 0x606;
      DAT_02000a18 = 0;
      sub_08001D30(&DAT_08b6c1b8,(DAT_02000a08 & 0xc) << 0xc);
      sub_08002208(&DAT_08b6c1c4,0);
      sub_08002734(0x38,&DAT_08b2c000,0x27,0,0);
      sub_0800249C(0x33,0);
      DAT_02000a40 = 0x3e41;
      DAT_02000a42 = 0x10;
      sub_0810CE60();
      sub_0810CF70();
      cVar11 = DAT_02000a82 == '>';
      if (DAT_02000a83 == 'D') {
        cVar11 = cVar11 + '\x01';
      }
      if (DAT_02000a84 == 'J') {
        cVar11 = cVar11 + '\x01';
      }
      if (DAT_02000a85 == 'P') {
        cVar11 = cVar11 + '\x01';
      }
      if (DAT_02000a86 == 'V') {
        cVar11 = cVar11 + '\x01';
      }
      if (DAT_02000a87 == '\\') {
        cVar11 = cVar11 + '\x01';
      }
      if (DAT_02000a88 == 'a') {
        cVar11 = cVar11 + '\x01';
      }
      *(char *)(param_1 + 0x245) = cVar11;
      *(undefined2 *)(param_1 + 8) = 0x10;
      *(undefined2 *)(param_1 + 10) = 0;
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      goto LAB_0811183a;
    }
    if (bVar1 != 2) {
      if (bVar1 == 3) {
        if (*(short *)(param_1 + 8) == 0) {
          *(undefined *)(param_1 + 6) = 0;
          *(undefined *)(param_1 + 5) = 2;
        }
        else {
          uVar5 = *(short *)(param_1 + 8) - 1;
          *(ushort *)(param_1 + 8) = uVar5;
          DAT_02000a42 = uVar5 & 0x1f | (0x10 - uVar5) * 0x100;
        }
      }
      goto LAB_08111998;
    }
    if (*(short *)(param_1 + 10) == 0) {
      sub_08002624(0x33);
      sub_08002B5C(0x95);
      sub_0810F0B0(param_1,4);
      goto LAB_08111998;
    }
    sVar3 = *(short *)(param_1 + 10) + -1;
  }
  *(short *)(param_1 + 10) = sVar3;
  DAT_03002ec0 = (undefined)sVar3;
  DAT_03002ec1 = DAT_03002ec0;
  DAT_03002ec2 = DAT_03002ec0;
LAB_08111998:
  sub_080025D8(0x33);
  iVar6 = 0;
  if (*(char *)(param_1 + 0x245) != '\0') {
    uVar4 = 0;
    do {
      iVar8 = (int)uVar4 >> 0x10;
      if ((&DAT_02000990)[(byte)(&DAT_08885c24)[iVar8]] ==
          *(char *)((int)&DAT_08128c10 + (((byte)(&DAT_08885c24)[iVar8] + 0x18) * 0x1000000 >> 0x17)
                   )) {
        if ((uint)*(byte *)(param_1 + 0x244) == iVar6 >> 0x10) {
          *(char *)(param_1 + 0x246) = (char)uVar9;
        }
        if ((uint)*(byte *)(param_1 + 0x244) == iVar6 >> 0x10) {
          iVar6 = (uint)(ushort)(&DAT_08885c2c)[iVar8] << 1;
        }
        else {
          iVar6 = ((ushort)(&DAT_08885c2c)[iVar8] + 1) * 2;
        }
        sub_0810D214(&DAT_0886a17c + *(ushort *)((int)&DAT_08869ac0 + iVar6),(&DAT_08885c3a)[iVar8],
                     ((short)uVar10 * 2 + 10) - (uint)*(byte *)(param_1 + 0x245));
        uVar10 = (int)(short)uVar10 + 1U & 0xffff;
      }
      uVar4 = uVar4 + 0x10000;
      uVar9 = uVar4 >> 0x10;
      iVar6 = uVar10 << 0x10;
    } while ((iVar6 >> 0x10 < (int)(uint)*(byte *)(param_1 + 0x245)) && ((int)uVar4 >> 0x10 < 7));
  }
  return in_lr;
}

