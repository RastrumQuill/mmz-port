// sub_080B4014 at 0x080B4014 (thumb)

undefined4 sub_080B4014(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  char cVar6;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  sub_08012580(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined *)(param_1 + 0x12) = 0;
  iVar3 = (uint)*(byte *)(param_1 + 0x11) * 0x2000000 + -0x1000000;
  bVar2 = *(byte *)(param_1 + 0x10);
  if (bVar2 == 1) {
    sub_080127E4(param_1,0x1b04);
    bVar2 = *(byte *)(param_1 + 0x74);
    if (bVar2 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xdf;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x20;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(byte *)(param_1 + 0x4d) = bVar2;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf | (byte)((bVar2 & 1) << 5);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    iVar3 = -0x180;
  }
  else {
    if (bVar2 < 2) {
      if (bVar2 == 0) {
        sub_080127E4(param_1,0x1b0c);
        *(int *)(param_1 + 0x5c) = (iVar3 >> 0x18) * 0x140;
        *(int *)(param_1 + 0x60) =
             ((int)(((*(byte *)(param_1 + 0x74) & 1) * -2 + 1) * 0x1000000) >> 0x18) * -0x300;
        *(undefined *)(param_1 + 0x75) = 0;
      }
      goto LAB_080b427a;
    }
    if (bVar2 == 2) {
      sub_080127E4(param_1,0x1b04);
      bVar2 = *(byte *)(param_1 + 0x74);
      if (bVar2 == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xdf;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 0x20;
      }
      *(byte *)(param_1 + 10) = bVar1;
      *(byte *)(param_1 + 0x4d) = bVar2;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf | (byte)((bVar2 & 1) << 5);
      *(int *)(param_1 + 0x5c) = iVar3 >> 0x11;
      iVar3 = 0x980;
    }
    else {
      if (bVar2 != 3) goto LAB_080b427a;
      sub_080127E4(param_1,0x1b10);
      bVar2 = *(byte *)(param_1 + 0x74);
      if (bVar2 == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xdf;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 0x20;
      }
      *(byte *)(param_1 + 10) = bVar1;
      *(byte *)(param_1 + 0x4d) = bVar2;
      pbVar5 = (byte *)(param_1 + 0x4a);
      *pbVar5 = *pbVar5 & 0xdf | (byte)((bVar2 & 1) << 5);
      uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar4 & 0x7fffffff;
      uVar4 = uVar4 * 2 >> 0x11 & 1;
      if (uVar4 == 0) {
        bVar2 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar2 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar2;
      *(char *)(param_1 + 0x4c) = (char)uVar4;
      *pbVar5 = *pbVar5 & 0xef | (byte)(uVar4 << 4);
      cVar6 = -1;
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        cVar6 = '\x01';
      }
      if (*(char *)(param_1 + 0x11) == '\0') {
        uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
        *(uint *)(param_1 + 0x5c) = ((uVar4 * 2 >> 0x11 & 0x1ff) - 0xff) * (int)cVar6;
        iVar3 = -0x400;
      }
      else {
        uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
        *(uint *)(param_1 + 0x5c) = (0xff - (uVar4 * 2 >> 0x11 & 0x1ff)) * (int)cVar6;
        iVar3 = -0x740;
      }
      uVar4 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar4 & 0x7fffffff;
      iVar3 = (uVar4 * 2 >> 0x11 & 0x1ff) + iVar3;
    }
  }
  *(int *)(param_1 + 0x60) = iVar3;
LAB_080b427a:
  sub_080B429C(param_1);
  return in_lr;
}

