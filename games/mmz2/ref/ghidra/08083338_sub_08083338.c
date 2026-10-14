// sub_08083338 at 0x08083338 (thumb)

undefined4 sub_08083338(int param_1)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  ushort *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    bVar2 = *(byte *)(param_1 + 10) >> 4;
    uVar6 = bVar2 & 1;
    sub_08012580(param_1);
    if ((bVar2 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(char *)(param_1 + 0x4c) = (char)uVar6;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar6 << 4);
    sub_080127E4(param_1,0x6e00);
    sub_08006E08(param_1 + 0x74,&DAT_083410e8);
    uVar6 = sub_08038EC0(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),
                         *(int *)(param_1 + 0xb4),*(int *)(param_1 + 0xb8));
    *(int *)(param_1 + 0x5c) = (int)(short)(&DAT_080ef450)[(uVar6 & 0xff) + 0x40 & 0xff] << 1;
    *(int *)(param_1 + 0x60) = (int)(short)(&DAT_080ef450)[uVar6 & 0xff] << 1;
    iVar7 = *(int *)(param_1 + 0xb4);
    uVar6 = iVar7 - *(int *)(param_1 + 0x54);
    if ((int)uVar6 < 0) {
      uVar6 = *(int *)(param_1 + 0x54) - iVar7;
    }
    iVar7 = *(int *)(param_1 + 0xb8);
    uVar3 = iVar7 - *(int *)(param_1 + 0x58);
    if ((int)uVar3 < 0) {
      uVar3 = *(int *)(param_1 + 0x58) - iVar7;
    }
    uVar3 = uVar3 & 0xffff;
    if (uVar3 < (uVar6 & 0xffff)) {
      uVar4 = *(undefined4 *)(param_1 + 0x5c);
      uVar3 = uVar6 & 0xffff;
    }
    else {
      uVar4 = *(undefined4 *)(param_1 + 0x60);
    }
    iVar7 = sub_080EF150(uVar3,uVar4);
    if (iVar7 < 0) {
      iVar7 = -iVar7;
    }
    *(short *)(param_1 + 0xc0) = (short)iVar7;
    if (*(short *)(param_1 + 0xc0) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(short *)(param_1 + 0xc0) = 1;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  puVar5 = (ushort *)(param_1 + 0xc0);
  if (((*puVar5 & 7) == 0) &&
     (uVar6 = DAT_0202e188 * 0x343fd + 0x269ec3, DAT_0202e188 = uVar6 & 0x7fffffff,
     (uVar6 * 2 >> 0x11 & 3) == 0)) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar7 = -0xc00;
    }
    else {
      iVar7 = 0xc00;
    }
    sub_080AC8A4(*(int *)(param_1 + 0x54) + iVar7,*(undefined4 *)(param_1 + 0x58),0);
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  uVar1 = *puVar5;
  *puVar5 = uVar1 - 1;
  if ((ushort)(uVar1 - 1) == 0) {
    if (*(byte *)(param_1 + 0x11) == (*(byte *)(param_1 + 10) >> 4 & 1)) {
      *(undefined *)(param_1 + 0xd) = 1;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 5;
      *(undefined *)(param_1 + 0xbf) = 1;
    }
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

