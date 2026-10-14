// sub_0801021C at 0x0801021C (thumb)

undefined4 sub_0801021C(int param_1)

{
  undefined2 uVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 in_lr;
  
  iVar6 = DAT_0202e044;
  iVar10 = DAT_0202e040;
  uVar1 = DAT_0202e03e;
  uVar4 = (uint)DAT_0202e03d;
  if (*(ushort *)(param_1 + 0x10) != (ushort)DAT_0202e03c) {
    *(undefined *)(param_1 + 0xe) = 0;
  }
  if (*(char *)(param_1 + 0xe) != '\0') goto LAB_08010356;
  DAT_02000f90 = DAT_02000f90 & 0xfff8 | 1;
  uVar7 = *(uint *)(param_1 + 0x60) | *(uint *)(param_1 + 100) | 0x80;
  (&DAT_02000f94)[(uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14] = (ushort)uVar7 | 0x4044;
  if (DAT_0202e03c == 1) {
    sub_08002824(&DAT_08372330,(uVar7 & 0x1f00) << 3,0x400);
    sub_080027AC(&DAT_087d3bd4,0x4000);
    puVar5 = &DAT_087d3be0;
LAB_08010340:
    sub_08002AEC(puVar5,0);
  }
  else if (DAT_0202e03c < 2) {
    if (DAT_0202e03c == 0) {
      sub_08002880(0,(uVar7 & 0x1f00) << 3,0x400);
    }
  }
  else if (DAT_0202e03c < 4) {
    sub_08002824(&DAT_08372738,(uVar7 & 0x1f00) << 3,0x400);
    sub_080027AC(&DAT_087d3be8,0x4000);
    puVar5 = &DAT_087d3bf4;
    goto LAB_08010340;
  }
  *(ushort *)(param_1 + 0x10) = (ushort)DAT_0202e03c;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_08010356:
  if (DAT_0202e03c == 3) {
    uVar4 = uVar4 * -0x1000000 >> 0x18;
    sVar2 = sub_080EF150((int)(short)(&DAT_080ef450)[uVar4 + 0x40 & 0xff] << 8,uVar1);
    DAT_02000fac = -sVar2;
    iVar9 = (int)(short)(&DAT_080ef450)[uVar4];
    sVar3 = sub_080EF150(iVar9 << 8,uVar1);
    DAT_02000fae = -sVar3;
  }
  else {
    sVar2 = sub_080EF150((int)(short)(&DAT_080ef450)[uVar4 + 0x40 & 0xff] << 8,uVar1);
    iVar9 = (int)(short)(&DAT_080ef450)[uVar4];
    DAT_02000fac = sVar2;
    DAT_02000fae = sub_080EF150(iVar9 << 8,uVar1);
  }
  DAT_02000fb0 = sub_080EF150(iVar9 * -0x100,uVar1);
  if (DAT_0202e03c == 1) {
    iVar10 = *(int *)(param_1 + 0x34) * 0x100 - iVar10;
    iVar9 = iVar10 * DAT_02000fac;
    if (iVar9 < 0) {
      iVar9 = iVar9 + 0xff;
    }
    iVar8 = (*(int *)(param_1 + 0x38) * 0x100 - (iVar6 + -0x1800)) + -0x1800;
    iVar6 = iVar8 * DAT_02000fae;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    DAT_02000fb4 = (iVar9 >> 8) + (iVar6 >> 8) + 0x8000;
    iVar10 = iVar10 * DAT_02000fb0;
    if (iVar10 < 0) {
      iVar10 = iVar10 + 0xff;
    }
    iVar8 = iVar8 * sVar2;
    if (iVar8 < 0) {
      iVar8 = iVar8 + 0xff;
    }
    iVar10 = (iVar10 >> 8) + (iVar8 >> 8);
    iVar6 = 0x1800;
  }
  else {
    iVar10 = *(int *)(param_1 + 0x34) * 0x100 - iVar10;
    iVar9 = iVar10 * DAT_02000fac;
    if (iVar9 < 0) {
      iVar9 = iVar9 + 0xff;
    }
    iVar8 = (*(int *)(param_1 + 0x38) * 0x100 - (iVar6 + -0x4b00)) + -0x4b00;
    iVar6 = iVar8 * DAT_02000fae;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    DAT_02000fb4 = (iVar9 >> 8) + (iVar6 >> 8) + 0x2b00;
    iVar10 = iVar10 * DAT_02000fb0;
    if (iVar10 < 0) {
      iVar10 = iVar10 + 0xff;
    }
    iVar8 = iVar8 * sVar2;
    if (iVar8 < 0) {
      iVar8 = iVar8 + 0xff;
    }
    iVar10 = (iVar10 >> 8) + (iVar8 >> 8);
    iVar6 = 0x4b00;
  }
  DAT_02000fb8 = iVar10 + iVar6;
  if ((DAT_0202e038 != 0) &&
     ((*(uint *)(&DAT_0202e160 + (uint)(*(byte *)(DAT_0202e038 + 0x1d) >> 5) * 4) &
      1 << (*(byte *)(DAT_0202e038 + 0x1d) & 0x1f)) != 0)) {
    DAT_03002ec4 = 0x40;
    DAT_03002ec6 = 0x20;
  }
  DAT_02000fb2 = sVar2;
  if (DAT_0202d002 != 0) {
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

