// sub_080B7A84 at 0x080B7A84 (thumb)

undefined4 sub_080B7A84(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    sub_08012738(param_1);
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
    bVar1 = *(byte *)(param_1 + 0x11);
    if ((*(uint *)(DAT_0202ebf0 + 0x14) & 1 << (&DAT_08346f58)[bVar1]) == 0) {
      if (bVar1 < 4) {
        *(byte *)(param_1 + 0x22) = bVar1;
        uVar6 = (uint)*(byte *)(param_1 + 0x11);
        uVar4 = 0x5a00;
        goto LAB_080b7b90;
      }
      *(byte *)(param_1 + 0x22) = bVar1 - 4;
      sub_080127E4(param_1,*(byte *)(param_1 + 0x11) + 0x5afc);
    }
    else {
      DAT_0202e746 = (bVar1 & 1) * 8 + 0x210 + (bVar1 & 2) * 0x80;
      sub_08002638(&DAT_08433e1c,(uint)DAT_0202e746 * 0x20 + 0x10000);
      sub_08002AEC(&DAT_08433e28,(DAT_0202e546 - 0xe) * 0x20 + 0x200);
      DAT_0202e746 = 0x210;
      uVar6 = *(byte *)(param_1 + 0x11) & 3;
      uVar4 = 0xdb00;
LAB_080b7b90:
      sub_080127E4(param_1,uVar6 | uVar4);
    }
    *(undefined *)(param_1 + 0x12) = 0x3e;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080b7a98_caseD_1:
    sub_080128D4(param_1);
    uVar6 = *(byte *)(param_1 + 0x11) & 3;
    iVar7 = uVar6 * 8;
    iVar3 = (uint)*(byte *)(param_1 + 0x12) * *(int *)(&DAT_08346f18 + iVar7);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0x3f;
    }
    iVar2 = (0x40 - (uint)*(byte *)(param_1 + 0x12)) * (uVar6 * 0x3c00 + 0x10e00);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0x3f;
    }
    *(int *)(param_1 + 0x54) = (iVar3 >> 6) + (iVar2 >> 6);
    iVar3 = (uint)*(byte *)(param_1 + 0x12) * *(int *)(&DAT_08346f1c + iVar7);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0x3f;
    }
    iVar7 = 0x40 - (uint)*(byte *)(param_1 + 0x12);
    *(int *)(param_1 + 0x58) = (iVar3 >> 6) + iVar7 * 0x440;
    *(short *)(param_1 + 0x50) = (short)iVar7 * 4;
    *(ushort *)(param_1 + 0x52) = (0x40 - (ushort)*(byte *)(param_1 + 0x12)) * 4;
    if (*(char *)(param_1 + 0x12) == '\0') {
LAB_080b7cd0:
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    else {
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    }
switchD_080b7a98_caseD_6:
    if ((*(uint *)(DAT_0202ebf0 + 0x14) & 1 << (&DAT_08346f58)[*(byte *)(param_1 + 0x11)]) != 0) {
      iVar3 = *(byte *)(param_1 + 0x13) + 1;
      *(char *)(param_1 + 0x13) = (char)iVar3;
      uVar6 = (uint)(iVar3 * 0x1000000) >> 0x1a & 1;
      if (uVar6 == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar1;
      *(char *)(param_1 + 0x4c) = (char)uVar6;
      pbVar5 = (byte *)(param_1 + 0x4a);
      *pbVar5 = *pbVar5 & 0xef | (byte)(uVar6 << 4);
      bVar1 = *(byte *)(param_1 + 0x13) >> 3;
      uVar6 = bVar1 & 1;
      if ((bVar1 & 1) == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xdf;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 0x20;
      }
      *(byte *)(param_1 + 10) = bVar1;
      *(char *)(param_1 + 0x4d) = (char)uVar6;
      *pbVar5 = *pbVar5 & 0xdf | (byte)(uVar6 << 5);
      uVar6 = (uint)*(byte *)(param_1 + 0x13) << 0x18;
      *(uint *)(param_1 + 100) = *(int *)(param_1 + 0x54) + (uVar6 >> 0x1a & 1) * -0x100;
      *(uint *)(param_1 + 0x68) = *(int *)(param_1 + 0x58) + (uVar6 >> 0x1b & 1) * -0x100;
    }
    return in_lr;
  case 1:
    goto switchD_080b7a98_caseD_1;
  case 2:
    sub_08012580(param_1);
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
    uVar6 = (uint)*(byte *)(param_1 + 0x11);
    if ((*(uint *)(DAT_0202ebf0 + 0x14) & 1 << (&DAT_08346f58)[uVar6]) == 0) {
      if (uVar6 < 4) {
        sub_080127E4(param_1,uVar6 | 0x5a00);
      }
      else {
        sub_080127E4(param_1,uVar6 + 0x5afc);
      }
    }
    else {
      sub_080127E4(param_1,uVar6 & 3 | 0xdb00);
      *(int *)(param_1 + 0x40) = param_1 + 100;
    }
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 3:
    sub_080128D4(param_1);
    if (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) goto switchD_080b7a98_caseD_6;
    *(undefined *)(param_1 + 0x12) = 0x20;
    goto LAB_080b7cd0;
  case 4:
    sub_08012738(param_1);
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
    uVar6 = (uint)*(byte *)(param_1 + 0x11);
    if ((*(uint *)(DAT_0202ebf0 + 0x14) & 1 << (&DAT_08346f58)[uVar6]) == 0) {
      if (uVar6 < 4) {
        uVar4 = 0x5a00;
        goto LAB_080b7d2a;
      }
      sub_080127E4(param_1,uVar6 + 0x5afc);
    }
    else {
      uVar6 = uVar6 & 3;
      uVar4 = 0xdb00;
LAB_080b7d2a:
      sub_080127E4(param_1,uVar6 | uVar4);
    }
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 5:
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    *(ushort *)(param_1 + 0x50) = (ushort)*(byte *)(param_1 + 0x12) << 3;
    *(ushort *)(param_1 + 0x52) = (ushort)*(byte *)(param_1 + 0x12) << 3;
    if (*(char *)(param_1 + 0x12) == '\x02') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 0xc);
    }
  default:
    goto switchD_080b7a98_caseD_6;
  }
}

