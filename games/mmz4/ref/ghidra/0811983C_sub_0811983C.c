// sub_0811983C at 0x0811983C (thumb)

undefined4 sub_0811983C(int param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  uint uVar8;
  char *pcVar9;
  undefined4 in_lr;
  
  iVar4 = *(byte *)(param_1 + 0xdd0) + 0x14;
  pcVar9 = (char *)(param_1 + 0xdf7);
  if (*pcVar9 == '\0') {
    sub_0800249C(iVar4,0);
    *pcVar9 = *pcVar9 + '\x01';
  }
  sub_080025D8(iVar4);
  bVar1 = *(byte *)(param_1 + 0xdd0);
  if (bVar1 == 1) {
    if (-0x800 < *(short *)(param_1 + 0xdfc)) {
      *(short *)(param_1 + 0xdfc) = *(short *)(param_1 + 0xdfc) + -0x100;
    }
    if (*(short *)(param_1 + 0xdfe) < 0) {
      *(short *)(param_1 + 0xdfe) = *(short *)(param_1 + 0xdfe) + 0x100;
    }
    if (-0x800 < *(short *)(param_1 + 0xe00)) {
      *(short *)(param_1 + 0xe00) = *(short *)(param_1 + 0xe00) + -0x100;
    }
    sVar6 = *(short *)(param_1 + 0xe02);
    if (*(short *)(param_1 + 0xe02) < -0x7ff) goto LAB_081199bc;
    sVar7 = -0x100;
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) goto LAB_081199bc;
    if (*(short *)(param_1 + 0xdfc) < 0) {
      *(short *)(param_1 + 0xdfc) = *(short *)(param_1 + 0xdfc) + 0x100;
    }
    if (-0x800 < *(short *)(param_1 + 0xdfe)) {
      *(short *)(param_1 + 0xdfe) = *(short *)(param_1 + 0xdfe) + -0x100;
    }
    if (-0x800 < *(short *)(param_1 + 0xe00)) {
      *(short *)(param_1 + 0xe00) = *(short *)(param_1 + 0xe00) + -0x100;
    }
    sVar6 = *(short *)(param_1 + 0xe02);
    if (*(short *)(param_1 + 0xe02) < -0x7ff) goto LAB_081199bc;
    sVar7 = -0x100;
  }
  else if (bVar1 == 2) {
    if (-0x800 < *(short *)(param_1 + 0xdfc)) {
      *(short *)(param_1 + 0xdfc) = *(short *)(param_1 + 0xdfc) + -0x100;
    }
    if (-0x800 < *(short *)(param_1 + 0xdfe)) {
      *(short *)(param_1 + 0xdfe) = *(short *)(param_1 + 0xdfe) + -0x100;
    }
    if (*(short *)(param_1 + 0xe00) < 0) {
      *(short *)(param_1 + 0xe00) = *(short *)(param_1 + 0xe00) + 0x100;
    }
    sVar6 = *(short *)(param_1 + 0xe02);
    if (*(short *)(param_1 + 0xe02) < -0x7ff) goto LAB_081199bc;
    sVar7 = -0x100;
  }
  else {
    if (bVar1 != 3) goto LAB_081199bc;
    if (-0x800 < *(short *)(param_1 + 0xdfc)) {
      *(short *)(param_1 + 0xdfc) = *(short *)(param_1 + 0xdfc) + -0x100;
    }
    if (-0x800 < *(short *)(param_1 + 0xdfe)) {
      *(short *)(param_1 + 0xdfe) = *(short *)(param_1 + 0xdfe) + -0x100;
    }
    if (-0x800 < *(short *)(param_1 + 0xe00)) {
      *(short *)(param_1 + 0xe00) = *(short *)(param_1 + 0xe00) + -0x100;
    }
    sVar6 = *(short *)(param_1 + 0xe02);
    if (-1 < *(short *)(param_1 + 0xe02)) goto LAB_081199bc;
    sVar7 = 0x100;
  }
  *(short *)(param_1 + 0xe02) = sVar6 + sVar7;
LAB_081199bc:
  DAT_02000a54 = 8;
  DAT_02000a58 = 0x80;
  iVar5 = sub_08000A70(0x140);
  if (iVar5 != 0) {
    sub_08000AB4(0,iVar5,0x140);
    uVar8 = 0;
    do {
      *(short *)(uVar8 * 2 + iVar5) =
           (short)(char)((ushort)*(undefined2 *)(param_1 + 0xdfc + (uVar8 >> 5) * 2) >> 8);
      uVar8 = uVar8 + 1 & 0xff;
    } while (uVar8 < 0x60);
    DAT_03001724 = &DAT_04000010;
    DAT_03001728 = 0xa2600001;
    DAT_03001720 = iVar5;
  }
  cVar3 = sub_08117C68(param_1);
  if (cVar3 == '\0') {
    bVar1 = (byte)DAT_02000764;
    if ((DAT_02000764 & 1) == 0) {
      bVar2 = (byte)DAT_02000766;
      if ((DAT_02000766 & 0x40) == 0) {
        if ((DAT_02000766 & 0x80) != 0) {
          sub_08002B10(1);
          iVar5 = *(byte *)(param_1 + 0xdd0) + 1;
          *(byte *)(param_1 + 0xdd0) = (char)iVar5 + (char)(iVar5 >> 2) * -4;
          *(byte *)(param_1 + 0xdf7) = bVar2 & 0x40;
          sub_08002624(iVar4);
        }
      }
      else {
        sub_08002B10(1);
        iVar5 = *(byte *)(param_1 + 0xdd0) + 3;
        *(byte *)(param_1 + 0xdd0) = (char)iVar5 + (char)(iVar5 >> 2) * -4;
        *(byte *)(param_1 + 0xdf7) = bVar1 & 1;
        sub_08002624(iVar4);
      }
      if (-1 < *(char *)(param_1 + 0xdd2)) {
        *(char *)(param_1 + 0xdd2) = *(char *)(param_1 + 0xdd2) + '\x01';
      }
      sub_0811A75C(param_1);
      sub_0810D214(&DAT_0886a17c + (ushort)(&DAT_08869ac0)[*(byte *)(param_1 + 0xdd0) + 0x78],1,0x12
                  );
    }
    else {
      sub_08002B10(2);
      sub_0811A75C(param_1);
      *(undefined *)(param_1 + 3) = 1;
      *(undefined *)(param_1 + 0xdf7) = 0;
    }
  }
  return in_lr;
}

