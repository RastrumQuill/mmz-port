// sub_0806CABC at 0x0806CABC (thumb)

undefined4 sub_0806CABC(int param_1)

{
  char cVar1;
  undefined uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xaa03);
    sub_08002B10(0xc6);
    sub_08001D30(&DAT_08c449c4,(DAT_0202e13a - 0x336) * 0x20 + 0x10000);
    sub_08002208(&DAT_08c449d0,(DAT_0202df3a - 7) * 0x20 + 0x200);
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  cVar1 = *(char *)(param_1 + 0xf);
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + 0x71) < '\x02') {
      return in_lr;
    }
    sub_08005784(param_1 + 0x74,&DAT_08858ca0);
    iVar5 = *(int *)(param_1 + 0x54);
    if (*(int *)(DAT_0202dbf0 + 0x54) < iVar5) {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0xcc) - (iVar5 + 0x2800);
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 200) - (iVar5 + -0x2800);
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    }
    uVar3 = FUN_081288bc(*(int *)(param_1 + 0x5c) >> 1,0xc);
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffd00;
LAB_0806cc44:
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    return in_lr;
  }
  if (cVar1 == '\x01') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar5 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar5;
    if (iVar5 < 1) {
      return in_lr;
    }
    sub_0801CF00(param_1,0xaa04);
    sub_0801CFF0(param_1);
    goto LAB_0806cc44;
  }
  if (cVar1 == '\x02') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar5 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar5;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    if (iVar5 <= *(int *)(param_1 + 0xb8)) {
      return in_lr;
    }
    sub_0801CF00(param_1,0xaa05);
    sub_08002B10(0xd3);
    sub_0801CFF0(param_1);
    sub_08005784(param_1 + 0x74,&DAT_08858c70);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xb8);
    goto LAB_0806cc44;
  }
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
  if (*(short *)(param_1 + 0xa4) < 0x10) {
    *(undefined *)(param_1 + 0xdd) = 0x3c;
    uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar4 & 0x7fffffff;
    if (0x11 < (uVar4 * 2 >> 0x11 & 0x1f)) {
      *(undefined *)(param_1 + 0xdc) = 3;
      goto LAB_0806cce0;
    }
LAB_0806ccd8:
    uVar2 = 2;
  }
  else {
    *(undefined *)(param_1 + 0xdd) = 0x50;
    uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar4 & 0x7fffffff;
    if (0x13 < (uVar4 * 2 >> 0x11 & 0x1f)) goto LAB_0806ccd8;
    uVar2 = 1;
  }
  *(undefined *)(param_1 + 0xdc) = uVar2;
LAB_0806cce0:
  *(undefined *)(param_1 + 0xd) = 0x1e;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

