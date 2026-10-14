// sub_08097EE0 at 0x08097EE0 (thumb)

undefined4 sub_08097EE0(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 in_lr;
  undefined4 local_14;
  int local_10;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 1) goto LAB_08098004;
  if (1 < bVar1) {
    if (bVar1 != 2) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    if (*(char *)(param_1 + 0x12) != '\0') {
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
    return in_lr;
  }
  if (bVar1 != 0) {
    return in_lr;
  }
  uVar6 = 0;
  bVar1 = *(byte *)(param_1 + 0xbe);
  if (bVar1 == 2) {
    uVar6 = 0xffffe800;
    if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
      uVar6 = 0x1800;
    }
  }
  else if (bVar1 < 3) {
    if ((bVar1 == 1) && (uVar6 = 0xffffee00, (*(byte *)(param_1 + 10) & 0x20) != 0)) {
      uVar6 = 0x1200;
    }
  }
  else {
    if (bVar1 == 3) {
      uVar6 = 0xffffdd00;
      bVar1 = *(byte *)(param_1 + 10);
      if ((bVar1 & 0x20) != 0) {
        uVar6 = 0x2300;
      }
      uVar5 = ~(uint)(bVar1 >> 5) & 1;
      if (uVar5 == 0) {
LAB_08097f98:
        bVar1 = bVar1 & 0xdf;
      }
      else {
        bVar1 = bVar1 | 0x20;
      }
    }
    else {
      if (bVar1 != 4) goto LAB_08097fb8;
      uVar6 = 0xffffd500;
      bVar1 = *(byte *)(param_1 + 10);
      if ((bVar1 & 0x20) != 0) {
        uVar6 = 0x2b00;
      }
      uVar5 = ~(uint)(bVar1 >> 5) & 1;
      if (uVar5 == 0) goto LAB_08097f98;
      bVar1 = bVar1 | 0x20;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(char *)(param_1 + 0x4d) = (char)uVar5;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf | (byte)(uVar5 << 5);
  }
LAB_08097fb8:
  sub_08096D00(param_1,0,uVar6);
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(uint *)(param_1 + 0x5c) = (uint)(0 < *(int *)(param_1 + 0xb4)) * -0x500 + 0x280;
  *(undefined4 *)(param_1 + 0x60) = 0xfffffb80;
  *(undefined *)(param_1 + 0x12) = 0x14;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_08098004:
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar4 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar4;
  if (0x700 < iVar4) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  sub_080177F4(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if ((cVar2 == '\0') ||
     (sVar3 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
     sVar3 != 0)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    local_14 = *(undefined4 *)(param_1 + 0x54);
    local_10 = *(int *)(param_1 + 0x58) + 0x100;
    sub_080B2484(1,&local_14);
    sub_080C693C(param_1,&local_14);
    sub_0800471C(0x2a);
    sub_08024FE4(1,param_1 + 0x54);
    if (DAT_0203016c < 9999) {
      DAT_0203016c = DAT_0203016c + 1;
    }
    sub_080250C4(param_1,param_1 + 0x54);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

