// sub_0805F328 at 0x0805F328 (thumb)

undefined4 sub_0805F328(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  undefined4 local_14;
  undefined4 local_10;
  
  if (DAT_0202e910 == 0xb) {
    if (*(char *)(param_1 + 0xe) == '\0') {
      if (*(int *)(param_1 + 0xc0) != 0) {
        *(undefined *)(*(int *)(param_1 + 0xc0) + 0x77) = 1;
        *(undefined4 *)(param_1 + 0xc0) = 0;
      }
      iVar5 = DAT_0202dbf0;
      *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54);
      bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar5 + 0x54);
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
      if (bVar1) {
        bVar2 = *(byte *)(param_1 + 10) | 0x10;
      }
      else {
        bVar2 = *(byte *)(param_1 + 10) & 0xef;
      }
      *(byte *)(param_1 + 10) = bVar2;
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        uVar4 = 0x1c0;
      }
      else {
        uVar4 = 0xfffffe40;
      }
      *(undefined4 *)(param_1 + 0x5c) = uVar4;
      *(undefined4 *)(param_1 + 0x60) = 0xfffffd00;
      sub_0801CF00(param_1,0xa51c);
      sub_08002B10(0x122);
      if (*(short *)(param_1 + 0xca) != 0) {
        sub_08002B5C(0x5d);
        *(undefined2 *)(param_1 + 0xca) = 0;
      }
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      if (((DAT_0202e918 & 1) != 0) && ((DAT_0202e922 & 1) == 0)) {
        DAT_0202e918 = DAT_0202e918 & 0xfffe | 0x10;
      }
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    sub_0801CFF0(param_1);
    if (*(char *)(param_1 + 0xd) != '\0') {
      if ((*(char *)(param_1 + 0xd) == '\x01') &&
         (cVar3 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar3, cVar3 == -1)) {
        DAT_0202e922 = DAT_0202e922 | 2;
        *(undefined *)(param_1 + 0xd) = 2;
      }
      goto LAB_0805f5fe;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar5 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar5;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    if (iVar5 <= *(int *)(param_1 + 0xb8)) goto LAB_0805f5fe;
    sub_0801CF00(param_1,0xa51d);
    sub_0801CFF0(param_1);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xb8);
    *(undefined *)(param_1 + 0x12) = 0x80;
  }
  else {
    if (*(char *)(param_1 + 0xe) == '\0') {
      if (*(int *)(param_1 + 0xc0) != 0) {
        *(undefined *)(*(int *)(param_1 + 0xc0) + 0x77) = 1;
        *(undefined4 *)(param_1 + 0xc0) = 0;
      }
      iVar5 = DAT_0202dbf0;
      *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54);
      bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar5 + 0x54);
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
      if (bVar1) {
        bVar2 = *(byte *)(param_1 + 10) | 0x10;
      }
      else {
        bVar2 = *(byte *)(param_1 + 10) & 0xef;
      }
      *(byte *)(param_1 + 10) = bVar2;
      sub_0801CF00(param_1,0xa51c);
      sub_08002B10(0x123);
      if (*(short *)(param_1 + 0xca) != 0) {
        sub_08002B5C(0x5d);
        *(undefined2 *)(param_1 + 0xca) = 0;
      }
      *(undefined *)(param_1 + 0x12) = 0x40;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      if (((DAT_0202e918 & 1) != 0) && ((DAT_0202e922 & 1) == 0)) {
        DAT_0202e918 = DAT_0202e918 & 0xfffe | 0x10;
      }
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    sub_0801CFF0(param_1);
    if (*(char *)(param_1 + 0xd) != '\0') {
      if (*(char *)(param_1 + 0xd) == '\x01') {
        if (*(byte *)(*(int *)(param_1 + 0x2c) + 0xc) < 2) goto LAB_0805f5fe;
        DAT_0202e922 = DAT_0202e922 | 2;
        *(undefined *)(param_1 + 0x12) = 0x20;
      }
      else {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      }
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      goto LAB_0805f5fe;
    }
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x80) == 0) goto LAB_0805f5fe;
    local_14 = 0x600;
    local_10 = 0xffffe100;
    uVar4 = sub_080D2578(param_1,&local_14);
    *(undefined4 *)(param_1 + 0x2c) = uVar4;
  }
  *(undefined *)(param_1 + 0xd) = 1;
LAB_0805f5fe:
  if (*(int *)(param_1 + 0x54) < DAT_0202ea30 + -0x6800) {
    *(int *)(param_1 + 0x54) = DAT_0202ea30 + -0x6800;
  }
  if (DAT_0202ea30 + 0x67ff < *(int *)(param_1 + 0x54)) {
    *(int *)(param_1 + 0x54) = DAT_0202ea30 + 0x67ff;
  }
  return in_lr;
}

