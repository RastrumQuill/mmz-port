// sub_08097A18 at 0x08097A18 (thumb)

undefined4 sub_08097A18(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  undefined4 local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    bVar1 = *(byte *)(param_1 + 0xbe);
    if (bVar1 == 2) {
      iVar3 = *(int *)(param_1 + 0x58);
      iVar4 = iVar3 + -0x1800;
      *(int *)(param_1 + 0x58) = iVar4;
      if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
        iVar4 = 0x1800;
LAB_08097a80:
        iVar4 = iVar3 + iVar4;
      }
LAB_08097a82:
      *(int *)(param_1 + 0x58) = iVar4;
    }
    else if (bVar1 < 3) {
      if (bVar1 == 1) {
        iVar3 = *(int *)(param_1 + 0x58);
        iVar4 = iVar3 + -0x1200;
        *(int *)(param_1 + 0x58) = iVar4;
        if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
          iVar4 = 0x1200;
          goto LAB_08097a80;
        }
        goto LAB_08097a82;
      }
    }
    else {
      if (bVar1 == 3) {
        iVar3 = *(int *)(param_1 + 0x58);
        iVar4 = iVar3 + -0x2300;
        *(int *)(param_1 + 0x58) = iVar4;
        bVar1 = *(byte *)(param_1 + 10);
        if ((bVar1 & 0x20) != 0) {
          iVar4 = iVar3 + 0x2300;
        }
        *(int *)(param_1 + 0x58) = iVar4;
        uVar5 = ~(((uint)bVar1 << 0x18) >> 0x1d) & 1;
        if (uVar5 == 0) {
LAB_08097af4:
          bVar1 = bVar1 & 0xdf;
        }
        else {
          bVar1 = bVar1 | 0x20;
        }
      }
      else {
        if (bVar1 != 4) goto LAB_08097b14;
        iVar3 = *(int *)(param_1 + 0x58);
        iVar4 = iVar3 + -0x2b00;
        *(int *)(param_1 + 0x58) = iVar4;
        bVar1 = *(byte *)(param_1 + 10);
        if ((bVar1 & 0x20) != 0) {
          iVar4 = iVar3 + 0x2b00;
        }
        *(int *)(param_1 + 0x58) = iVar4;
        uVar5 = ~(((uint)bVar1 << 0x18) >> 0x1d) & 1;
        if (uVar5 == 0) goto LAB_08097af4;
        bVar1 = bVar1 | 0x20;
      }
      *(byte *)(param_1 + 10) = bVar1;
      *(char *)(param_1 + 0x4d) = (char)uVar5;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf | (byte)(uVar5 << 5);
    }
LAB_08097b14:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  local_14 = *(undefined4 *)(param_1 + 0x54);
  local_10 = *(int *)(param_1 + 0x58) + -0x800;
  sub_080B2484(1,&local_14);
  sub_080C693C(param_1,&local_14);
  sub_0800471C(0x2a);
  sVar2 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (sVar2 == 0) goto LAB_08097ba2;
  iVar3 = sub_08009B28(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  iVar4 = sub_08009C90(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (iVar3 < 1) {
    if (iVar4 < 0) {
      iVar3 = *(int *)(param_1 + 0x58) + iVar3;
    }
    else {
      if (iVar4 <= -iVar3) goto LAB_08097b9c;
      iVar3 = *(int *)(param_1 + 0x58) + iVar3;
    }
  }
  else {
LAB_08097b9c:
    iVar3 = *(int *)(param_1 + 0x58) + iVar4;
  }
  *(int *)(param_1 + 0x58) = iVar3;
LAB_08097ba2:
  sub_08024FE4(1,param_1 + 0x54);
  if (DAT_0203016c < 9999) {
    DAT_0203016c = DAT_0203016c + 1;
  }
  sub_080250C4(param_1,param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

