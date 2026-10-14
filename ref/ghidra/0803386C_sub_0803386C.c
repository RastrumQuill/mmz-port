// sub_0803386C at 0x0803386C (thumb)

undefined4 sub_0803386C(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined uVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0x15);
    *(undefined *)(param_1 + 0xe) = 0;
    bVar1 = *(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c);
    *(bool *)(param_1 + 0x44) = bVar1;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
  }
  sub_080297C0(param_1);
  uVar4 = DAT_02022890 * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar4 & 0x7fffffff;
  uVar4 = uVar4 * 2 >> 0x11 & 0x1f;
  iVar5 = *(int *)(param_1 + 0x4c) - *(int *)(DAT_0202286c + 0x4c);
  if (iVar5 < 0) {
    if (*(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c) < 0x5000) goto LAB_08033900;
LAB_08033972:
    if (*(short *)(param_1 + 0x8c) < (short)(ushort)(*(byte *)(param_1 + 0xd8) >> 1)) {
      if (*(byte *)(DAT_02022b20 + 1) < 5) {
        uVar4 = DAT_02022890 * 0x343fd + 0x269ec3;
        DAT_02022890 = uVar4 & 0x7fffffff;
        uVar4 = sub_080C8CB0(uVar4 * 2 >> 0x11,0x18);
        uVar4 = uVar4 & 0xff;
      }
      if (uVar4 < 0xc) {
        uVar3 = 0x11;
      }
      else if (uVar4 < 0x12) {
        uVar3 = 3;
      }
      else {
        if (uVar4 < 0x18) goto LAB_080339e4;
        uVar3 = 0x1e;
      }
    }
    else if (uVar4 < 0xe) {
      uVar3 = 0x11;
    }
    else if (uVar4 < 0x16) {
      uVar3 = 3;
    }
    else {
LAB_080339e4:
      uVar3 = 0x14;
    }
  }
  else {
    if (0x4fff < iVar5) goto LAB_08033972;
LAB_08033900:
    if (*(short *)(param_1 + 0x8c) < (short)(ushort)(*(byte *)(param_1 + 0xd8) >> 1)) {
      if (*(byte *)(DAT_02022b20 + 1) < 5) {
        uVar4 = DAT_02022890 * 0x343fd + 0x269ec3;
        DAT_02022890 = uVar4 & 0x7fffffff;
        uVar4 = sub_080C8CB0(uVar4 * 2 >> 0x11,0x18);
        uVar4 = uVar4 & 0xff;
      }
      if (uVar4 < 10) {
        uVar3 = 3;
      }
      else if (uVar4 < 0x18) {
        uVar3 = 0x14;
      }
      else {
        uVar3 = 0x1e;
      }
      *(undefined *)(param_1 + 0xd) = uVar3;
      *(undefined *)(param_1 + 0xe) = 1;
      goto LAB_080339e8;
    }
    if (0xb < uVar4) goto LAB_080339e4;
    uVar3 = 3;
  }
  *(undefined *)(param_1 + 0xd) = uVar3;
LAB_080339e8:
  *(undefined *)(param_1 + 0xe) = 1;
  return in_lr;
}

