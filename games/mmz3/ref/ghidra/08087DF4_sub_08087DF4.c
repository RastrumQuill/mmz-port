// sub_08087DF4 at 0x08087DF4 (thumb)

undefined4 sub_08087DF4(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017700(param_1,0x6b00);
    sub_08007390(param_1 + 0x74,&DAT_08364f90);
    uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar4 & 0x7fffffff;
    *(byte *)(param_1 + 0x12) = (byte)(uVar4 * 2 >> 0x11) & 1;
    if (*(char *)(param_1 + 0x10) == '\0') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    }
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    bVar1 = *(byte *)(param_1 + 10);
    if ((bVar1 & 0x10) == 0) {
      iVar3 = *(int *)(param_1 + 0x54) + -0x180;
      *(int *)(param_1 + 0x54) = iVar3;
      if (0xc000 < *(int *)(param_1 + 100) - iVar3) {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 100) + -0xc000;
        uVar4 = ~(((uint)bVar1 << 0x18) >> 0x1c) & 1;
        if (uVar4 == 0) {
LAB_08087f64:
          bVar1 = bVar1 & 0xef;
        }
        else {
          bVar1 = bVar1 | 0x10;
        }
LAB_08087f68:
        *(byte *)(param_1 + 10) = bVar1;
        *(char *)(param_1 + 0x4c) = (char)uVar4;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
      }
    }
    else {
      iVar3 = *(int *)(param_1 + 0x54) + 0x180;
      *(int *)(param_1 + 0x54) = iVar3;
      if (*(int *)(param_1 + 100) - iVar3 < 0) {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 100);
        uVar4 = ~(((uint)bVar1 << 0x18) >> 0x1c) & 1;
        if (uVar4 == 0) goto LAB_08087f64;
        bVar1 = bVar1 | 0x10;
        goto LAB_08087f68;
      }
    }
  }
  else {
    bVar1 = *(byte *)(param_1 + 10);
    if ((bVar1 & 0x10) == 0) {
      iVar3 = *(int *)(param_1 + 0x54) + -0x180;
      *(int *)(param_1 + 0x54) = iVar3;
      if (iVar3 - *(int *)(param_1 + 100) < 0) {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 100);
        uVar4 = ~(((uint)bVar1 << 0x18) >> 0x1c) & 1;
        if (uVar4 == 0) goto LAB_08087f64;
        bVar1 = bVar1 | 0x10;
        goto LAB_08087f68;
      }
    }
    else {
      iVar3 = *(int *)(param_1 + 0x54) + 0x180;
      *(int *)(param_1 + 0x54) = iVar3;
      if (0xc000 < iVar3 - *(int *)(param_1 + 100)) {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 100) + 0xc000;
        uVar4 = ~(((uint)bVar1 << 0x18) >> 0x1c) & 1;
        if (uVar4 == 0) goto LAB_08087f64;
        bVar1 = bVar1 | 0x10;
        goto LAB_08087f68;
      }
    }
  }
  bVar1 = *(byte *)(param_1 + 0x13);
  if (bVar1 < 8) {
    if (*(byte *)(param_1 + 0x12) == 0) {
      iVar3 = *(int *)(param_1 + 0x58) + -0x500;
      *(int *)(param_1 + 0x58) = iVar3;
      if (*(int *)(param_1 + 0x68) - iVar3 < 0xc01) goto LAB_08088036;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x68) + -0xc00;
      *(undefined *)(param_1 + 0x12) = 1;
      cVar2 = bVar1 + 1;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x58) + 0x500;
      *(int *)(param_1 + 0x58) = iVar3;
      if (iVar3 - *(int *)(param_1 + 0x68) < 0xc01) goto LAB_08088036;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x68) + 0xc00;
      *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) ^ 1;
      cVar2 = bVar1 + 1;
    }
  }
  else {
    if (*(byte *)(param_1 + 0x12) == 0) {
      iVar3 = *(int *)(param_1 + 0x58) + -0x500;
      *(int *)(param_1 + 0x58) = iVar3;
      iVar6 = *(int *)(param_1 + 0x68);
      if (0x1800 < iVar6 - iVar3) {
        iVar5 = -0x1800;
LAB_0808801e:
        *(int *)(param_1 + 0x58) = iVar6 + iVar5;
        *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) ^ 1;
        *(byte *)(param_1 + 0x13) = bVar1 + 1;
      }
    }
    else {
      iVar3 = *(int *)(param_1 + 0x58) + 0x500;
      *(int *)(param_1 + 0x58) = iVar3;
      iVar6 = *(int *)(param_1 + 0x68);
      iVar5 = 0x1800;
      if (0x1800 < iVar3 - iVar6) goto LAB_0808801e;
    }
    if (*(byte *)(param_1 + 0x13) < 0xb) goto LAB_08088036;
    cVar2 = '\0';
  }
  *(char *)(param_1 + 0x13) = cVar2;
LAB_08088036:
  cVar2 = *(char *)(param_1 + 0xf) + '\x01';
  *(char *)(param_1 + 0xf) = cVar2;
  cVar2 = sub_080FE4D8(cVar2,0xc);
  if (cVar2 == '\0') {
    sub_080C2A08(param_1 + 0x54,*(byte *)(param_1 + 10) >> 4 & 1);
  }
  sub_080177F4(param_1);
  iVar3 = sub_080886F8(param_1);
  if (iVar3 != 0) {
    iVar3 = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0x54) >> 2;
    iVar5 = *(int *)(param_1 + 0xbc) - *(int *)(param_1 + 0x58) >> 2;
    iVar3 = sub_080FE124(iVar3 * iVar3 + iVar5 * iVar5);
    uVar4 = (uint)(iVar3 << 0x10) >> 0xe;
    if (uVar4 < 0x7800) {
      *(uint *)(param_1 + 0xb4) = uVar4;
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

