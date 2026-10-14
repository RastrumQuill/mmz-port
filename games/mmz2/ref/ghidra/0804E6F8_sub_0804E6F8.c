// sub_0804E6F8 at 0x0804E6F8 (thumb)

undefined4 sub_0804E6F8(int param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  uint uVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    sub_08006E08(param_1 + 0x74,&DAT_0833b7fc);
    DAT_0202e03c = 1;
    DAT_0202e03e = 0x40;
    DAT_0202e03d = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    iVar4 = DAT_0202e130;
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(DAT_0202e130 + 0x54);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + -0x2800;
    psVar5 = (short *)(param_1 + 0xd0);
    *psVar5 = 0;
    *(undefined4 *)(param_1 + 0x68) = 0xfffffffc;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 100) = 0xfffffff0;
    }
    else {
      *psVar5 = -0xc00;
      *(undefined4 *)(param_1 + 100) = 0x10;
    }
    *psVar5 = 0xc00;
    uVar6 = 0;
    do {
      iVar3 = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 100);
      *(int *)(param_1 + 0x5c) = iVar3;
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - iVar3;
      iVar4 = iVar3 * 2;
      if (iVar4 < 0) {
        iVar4 = iVar3 * -2;
      }
      *psVar5 = *psVar5 + (short)iVar4;
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0x80);
    *(undefined *)(param_1 + 0xd2) = 0xff;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (DAT_0202e03e == 0x100) {
    sub_08006E08(param_1 + 0x74,&DAT_0833b814);
    sub_080032EC(0x5f);
    sub_080032EC(0x39);
  }
  else {
    sub_08006E08(param_1 + 0x74,&DAT_0833b7fc);
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar3 = *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
    iVar4 = iVar3 * 2;
    if (iVar4 < 0) {
      iVar4 = iVar3 * -2;
    }
    *(short *)(param_1 + 0xd0) = *(short *)(param_1 + 0xd0) - (short)iVar4;
    iVar4 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x5c) = iVar4;
    if (iVar4 != 0) goto LAB_0804e950;
  }
  else {
    if (*(char *)(param_1 + 0xf) != '\x01') {
      uVar2 = DAT_0202e03e + 4;
      DAT_0202e03e = uVar2;
      *(short *)(param_1 + 0xd0) = *(short *)(param_1 + 0xd0) + -0x60;
      iVar3 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
      *(int *)(param_1 + 0x5c) = iVar3;
      iVar4 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
      *(int *)(param_1 + 0x60) = iVar4;
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
      if (0x200 < uVar2) {
        *(byte *)(param_1 + 0x4c) = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
        uVar6 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar6 << 4);
        if (uVar6 == 0) {
          bVar1 = *(byte *)(param_1 + 10) & 0xef;
        }
        else {
          bVar1 = *(byte *)(param_1 + 10) | 0x10;
        }
        *(byte *)(param_1 + 10) = bVar1;
        DAT_0202e03c = 0;
        *(undefined *)(param_1 + 0xd) = 0xb;
        *(undefined *)(param_1 + 0xe) = 0;
        return in_lr;
      }
      goto LAB_0804e950;
    }
    uVar2 = DAT_0202e03e + 4;
    DAT_0202e03e = uVar2;
    *(short *)(param_1 + 0xd0) = *(short *)(param_1 + 0xd0) + -0x30;
    iVar3 = *(int *)(param_1 + 0x68);
    iVar4 = *(int *)(param_1 + 0x60) + iVar3;
    *(int *)(param_1 + 0x60) = iVar4;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
    if (uVar2 < 0x101) goto LAB_0804e950;
    *(int *)(param_1 + 0x60) = iVar4 * 4;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(int *)(param_1 + 100) = iVar3 * -2;
      iVar4 = iVar4 * -8;
    }
    else {
      *(int *)(param_1 + 100) = iVar3 << 1;
      iVar4 = iVar4 * 8;
    }
    *(int *)(param_1 + 0x5c) = iVar4;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
LAB_0804e950:
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    DAT_0202e03d = -(char)((ushort)*(undefined2 *)(param_1 + 0xd0) >> 8);
  }
  else {
    DAT_0202e03d = (char)((ushort)*(undefined2 *)(param_1 + 0xd0) >> 8);
  }
  return in_lr;
}

