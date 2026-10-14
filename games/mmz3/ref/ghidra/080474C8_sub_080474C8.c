// sub_080474C8 at 0x080474C8 (thumb)

undefined4 sub_080474C8(int param_1)

{
  byte bVar1;
  undefined uVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(undefined2 *)(param_1 + 0xc4) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    pbVar9 = (byte *)(param_1 + 199);
    uVar4 = (ushort)*pbVar9 * 6 + -3 + *(ushort *)(param_1 + 0xc4);
    *(ushort *)(param_1 + 0xc4) = uVar4;
    if (((uVar4 < 0xff80) && (*pbVar9 == 0)) || ((0x80 < uVar4 && (*pbVar9 == 1)))) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    sub_08045E14(param_1);
    break;
  case 2:
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(int *)(param_1 + 100) = *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 100) = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0xb4);
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x68) = (*(int *)(param_1 + 0x58) + 0x5000) - *(int *)(param_1 + 0xb8);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    if (*(char *)(param_1 + 0x10) == '\0') {
      *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
      bVar1 = *(byte *)(param_1 + 0x13) & 0x1f;
      *(byte *)(param_1 + 0x13) = bVar1;
      if (bVar1 < 0x10) {
        uVar2 = 0x19;
      }
      else {
        uVar2 = 0x18;
      }
      *(undefined *)(param_1 + 0x25) = uVar2;
    }
    uVar7 = *(int *)(param_1 + 0x5c) >> 8;
    iVar10 = (int)*(short *)((int)&DAT_080fe64c + (uVar7 * 0x1000000 + 0x40000000 >> 0x17));
    iVar5 = *(int *)(param_1 + 100) * iVar10;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    iVar6 = *(int *)(param_1 + 0x68) * (int)(short)(&DAT_080fe64c)[uVar7 & 0xff];
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    iVar6 = (iVar5 >> 8) + (iVar6 >> 8);
    iVar5 = *(int *)(param_1 + 100) * (int)(short)(&DAT_080fe64c)[uVar7 & 0xff];
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    iVar10 = *(int *)(param_1 + 0x68) * iVar10;
    if (iVar10 < 0) {
      iVar10 = iVar10 + 0xff;
    }
    iVar5 = (iVar10 >> 8) - (iVar5 >> 8);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 0x14;
    *(int *)(param_1 + 100) = iVar6;
    *(int *)(param_1 + 0x68) = iVar5;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xb4) + iVar6;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + iVar5 + -0x5000;
    iVar6 = iVar6 * 0xf8;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    *(int *)(param_1 + 100) = iVar6 >> 8;
    iVar5 = iVar5 * 0xf8;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    *(int *)(param_1 + 0x68) = iVar5 >> 8;
    if (((iVar6 >> 8) + 0x200U < 0x400) && ((iVar5 >> 8) + 0x200U < 0x400)) {
      if (*(char *)(param_1 + 0x10) == '\0') {
        sub_0800471C(0x117);
        *(undefined *)(param_1 + 0xd) = 8;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      else {
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
    }
    break;
  case 4:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    sub_08007390(param_1 + 0x74,&DAT_0835ee24);
    if (*(char *)(param_1 + 0xc6) != '\0') {
      sub_08004230();
      *(char *)(param_1 + 0xc6) = '\0';
    }
  }
  if (*(char *)(param_1 + 0xe) != '\x04') {
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
  }
  return in_lr;
}

