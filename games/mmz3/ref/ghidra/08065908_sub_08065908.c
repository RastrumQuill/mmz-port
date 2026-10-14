// sub_08065908 at 0x08065908 (thumb)

undefined4 sub_08065908(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  short *psVar4;
  undefined4 uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  undefined4 in_lr;
  int local_28;
  int local_24;
  
  iVar9 = *(int *)(param_1 + 0xb4);
  bVar6 = *(byte *)(param_1 + 0xe);
  if (bVar6 == 1) {
LAB_0806595e:
    psVar4 = (short *)(param_1 + 0xba);
    if (*psVar4 == 0) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else {
      *psVar4 = *psVar4 + -1;
    }
    return in_lr;
  }
  if (bVar6 < 2) {
    if (bVar6 != 0) {
      return in_lr;
    }
    sub_08007390(param_1 + 0x74,&DAT_083624a0);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(ushort *)(param_1 + 0xba) = (ushort)*(byte *)(param_1 + 0xb8) * 0x11;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    goto LAB_0806595e;
  }
  if (bVar6 == 2) {
    sub_08007390(param_1 + 0x74,&DAT_08362488);
    *(undefined *)(param_1 + 0x12) = 0;
    bVar6 = *(byte *)(param_1 + 10);
    *(byte *)(param_1 + 10) = bVar6 | 1;
    if (*(char *)(param_1 + 0xb8) == '\0') {
      bVar1 = *(byte *)(iVar9 + 0xbe);
      if (bVar1 == 0) {
        bVar6 = bVar6 & 0xef | 1;
      }
      else {
        bVar6 = bVar6 | 0x11;
      }
      *(byte *)(param_1 + 10) = bVar6;
      uVar3 = bVar1 & 1;
      *(char *)(param_1 + 0x4c) = (char)uVar3;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
      uVar3 = (uint)*(byte *)(iVar9 + 0xbf);
      if (uVar3 == 0) {
        bVar6 = *(byte *)(param_1 + 10) & 0xdf;
      }
      else {
        bVar6 = *(byte *)(param_1 + 10) | 0x20;
      }
      *(byte *)(param_1 + 10) = bVar6;
    }
    else {
      uVar3 = (uint)(*(byte *)(iVar9 + 0xbf) ^ *(byte *)(iVar9 + 0xbe));
      if (uVar3 == 0) {
        bVar6 = bVar6 & 0xef | 1;
      }
      else {
        bVar6 = bVar6 | 0x11;
      }
      *(byte *)(param_1 + 10) = bVar6;
      uVar3 = uVar3 & 1;
      *(char *)(param_1 + 0x4c) = (char)uVar3;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
      uVar3 = (uint)*(byte *)(iVar9 + 0xbf);
      if (uVar3 == 0) {
        bVar6 = *(byte *)(param_1 + 10) & 0xdf;
      }
      else {
        bVar6 = *(byte *)(param_1 + 10) | 0x20;
      }
      *(byte *)(param_1 + 10) = bVar6;
    }
    *(char *)(param_1 + 0x4d) = (char)(uVar3 & 1);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf | (byte)((uVar3 & 1) << 5);
    *(undefined4 *)(param_1 + 0x5c) = 0xc0;
    *(uint *)(param_1 + 0x5c) = ((uint)*(byte *)(iVar9 + 0xbe) * -2 + 1) * 0xc0;
    *(uint *)(param_1 + 0x60) = (uint)*(byte *)(iVar9 + 0xbe) << 0xf;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (bVar6 != 3) {
    return in_lr;
  }
  iVar8 = *(int *)(param_1 + 0x60);
  iVar2 = *(short *)((int)&DAT_080fe64c + ((uint)(((iVar8 >> 8) + 0x40) * 0x1000000) >> 0x17)) *
          0x48;
  *(int *)(param_1 + 0x54) = iVar2;
  *(int *)(param_1 + 0x54) = iVar2 + *(int *)(iVar9 + 0xb4);
  iVar2 = *(short *)((int)&DAT_080fe64c + ((uint)((iVar8 >> 8) << 0x18) >> 0x17)) * -0x48;
  *(int *)(param_1 + 0x58) = iVar2;
  *(int *)(param_1 + 0x58) = iVar2 + *(int *)(iVar9 + 0xb8);
  pbVar10 = (byte *)(iVar9 + 0xbe);
  if (*(char *)(param_1 + 0x12) == '\0') {
    iVar2 = (uint)*(byte *)(param_1 + 0xb8) * 0xba3 + 0x666;
    if (*pbVar10 != 0) {
      iVar2 = 0x8000 - iVar2;
    }
    if (iVar2 < iVar8) {
      if (*pbVar10 == 1) {
LAB_08065b14:
        if (iVar8 != iVar2) goto LAB_08065b9e;
      }
    }
    else if (*pbVar10 == 0) goto LAB_08065b14;
    *(undefined *)(param_1 + 0x12) = 1;
    iVar2 = (0x80 - (*(int *)(param_1 + 0x60) >> 8)) * 5;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0x7f;
    }
    iVar8 = (iVar2 >> 7) * -0x20;
    iVar7 = iVar8 + 0x80;
    if (*(char *)(iVar9 + 0xbf) != '\0') {
      iVar7 = iVar8 + 0x100;
    }
    local_28 = *(short *)((int)&DAT_080fe64c + ((uint)((iVar7 + 0x40) * 0x1000000) >> 0x17)) * 0xc +
               *(int *)(param_1 + 0x54);
    local_24 = *(short *)((int)&DAT_080fe64c + ((uint)(iVar7 << 0x18) >> 0x17)) * -0xc +
               *(int *)(param_1 + 0x58);
    sub_0800471C(0x2c);
    uVar5 = 0xfffffe00;
    if (*(char *)(iVar9 + 0xbf) != '\0') {
      uVar5 = 0x200;
    }
    sub_0809C41C(&local_28,uVar5,(iVar2 >> 7) * 0x20 - 0x80U & 0xff);
  }
LAB_08065b9e:
  iVar8 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x60) = iVar8;
  iVar2 = 0x7f00;
  if (*pbVar10 != 0) {
    iVar2 = 0x100;
  }
  if (iVar2 < iVar8) {
    if (*pbVar10 == 1) {
LAB_08065bc8:
      if (*(int *)(param_1 + 0x60) != iVar2) goto LAB_08065bd6;
    }
  }
  else if (*pbVar10 == 0) goto LAB_08065bc8;
  *(int *)(param_1 + 0x60) = iVar2;
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
LAB_08065bd6:
  iVar2 = *(int *)(param_1 + 0x60) >> 8;
  uVar3 = 0;
  bVar6 = *(byte *)(param_1 + 0xb8);
  if (bVar6 == 0) {
    uVar3 = -(uint)*(byte *)(iVar9 + 0xbf) >> 0x1f;
  }
  if (*pbVar10 != uVar3) {
    iVar2 = 0x80 - iVar2;
  }
  iVar2 = iVar2 * 5;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0x7f;
  }
  iVar2 = iVar2 >> 7;
  if (4 < iVar2) {
    iVar2 = 4;
  }
  if (bVar6 == 0) {
    iVar2 = iVar2 + 5;
  }
  sub_08017700(param_1,*(undefined2 *)(&UNK_083624ba + iVar2 * 2));
  sub_08017934(param_1);
  return in_lr;
}

