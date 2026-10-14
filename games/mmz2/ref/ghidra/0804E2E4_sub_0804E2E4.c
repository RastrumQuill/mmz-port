// sub_0804E2E4 at 0x0804E2E4 (thumb)

undefined4 sub_0804E2E4(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08003338((int)*(short *)(param_1 + 0xd6));
    *(short *)(param_1 + 0xd6) = -1;
    pbVar5 = (byte *)(param_1 + 0xd2);
    if (*pbVar5 == 0xff) {
      *pbVar5 = 0;
    }
    else {
      uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar2 & 0x7fffffff;
      if ((uVar2 * 2 >> 0x11 & (uint)(byte)(&DAT_0833b864)[*pbVar5]) == 0) {
        *(undefined *)(param_1 + 0xd) = 0xe;
        *(undefined *)(param_1 + 0xe) = 0;
        return in_lr;
      }
      bVar1 = sub_080EF1E8(*pbVar5 + 1,3);
      *pbVar5 = bVar1;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    DAT_0202e03c = 0;
    sub_080127E4(param_1,0x310a);
    sub_08006E08(param_1 + 0x74,&DAT_0833b76c);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    uVar3 = sub_080B5244(param_1,0,0);
    *(undefined4 *)(param_1 + 0x28) = uVar3;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar4 = *(int *)(param_1 + 0xc4) + -0x5000;
    }
    else {
      iVar4 = *(int *)(param_1 + 200) + 0x5000;
    }
    *(int *)(param_1 + 0x54) = iVar4;
    *(byte *)(param_1 + 0x4c) = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    uVar2 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar2 << 4);
    if (uVar2 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    DAT_0202e03e = 0x100;
    DAT_0202e03d = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0x900;
    *(undefined *)(param_1 + 0xbd) = 0x40;
    sub_080032EC(0x39);
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  pbVar5 = (byte *)(param_1 + 0xbd);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xcc) + (short)(&DAT_080ef450)[*pbVar5] * 8;
  *pbVar5 = *pbVar5 + 1;
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 == 1) {
    sub_080127E4(param_1,0x3104);
    sub_08006E08(param_1 + 0x74,&DAT_0833b6f4);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      DAT_0202e03c = 2;
    }
    else {
      DAT_0202e03c = 3;
    }
    *(undefined *)(*(int *)(param_1 + 0x28) + 0x11) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  else {
    if (bVar1 < 2) {
      if ((bVar1 == 0) && (sub_080128D4(param_1), *(int *)(param_1 + 0x5c) < 0x200)) {
        *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      }
      goto LAB_0804e4f0;
    }
    if (bVar1 != 2) goto LAB_0804e4f0;
  }
  sub_080128D4(param_1);
LAB_0804e4f0:
  iVar4 = *(int *)(param_1 + 0x5c) + -0x40;
  *(int *)(param_1 + 0x5c) = iVar4;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar4 = *(int *)(param_1 + 0x54) - iVar4;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x54) + iVar4;
  }
  *(int *)(param_1 + 0x54) = iVar4;
  if (*(int *)(param_1 + 0x5c) == 0) {
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0x20;
  }
  return in_lr;
}

