// sub_080B173C at 0x080B173C (thumb)

undefined4 sub_080B173C(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  if (*(char *)(param_1 + 0xbc) != '\0') {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    local_1c = *(int *)(param_1 + 0x54) + 0x800;
    local_18 = *(int *)(param_1 + 0x58) + 0x800;
    iVar3 = *(int *)(param_1 + 0x28);
    if (*(short *)(iVar3 + 4) != 2) {
      *(int *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x1c) + 1;
      sub_0800471C(0x137);
    }
    sub_0800471C(0x2a);
    sub_080B2484(1,&local_1c);
    goto LAB_080b1962;
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
LAB_080b1956:
    cVar2 = *(char *)(*(int *)(param_1 + 0x28) + 0xc);
    if (cVar2 != '\0') {
      *(char *)(*(int *)(param_1 + 0x28) + 0xc) = cVar2 + -1;
    }
LAB_080b1962:
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
    return in_lr;
  }
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
        sub_080177F4(param_1);
        iVar3 = sub_0800A104(*(int *)(param_1 + 0x54) + 0xc00,*(int *)(param_1 + 0x58) + -0x1000);
        if (iVar3 == *(int *)(param_1 + 0x58) + 0xb00) {
          return in_lr;
        }
        *(undefined4 *)(param_1 + 0x60) = 0;
        *(undefined4 *)(param_1 + 0x5c) = 0xffffff80;
        *(undefined *)(param_1 + 0x13) = 0x28;
        goto LAB_080b1914;
      }
      if (bVar1 != 3) {
        return in_lr;
      }
      iVar3 = *(int *)(param_1 + 0x60) + 0x20;
      *(int *)(param_1 + 0x60) = iVar3;
      if (0x700 < iVar3) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      sub_080177F4(param_1);
      if ((*(char *)(param_1 + 0x13) != '\0') &&
         (cVar2 = *(char *)(param_1 + 0x13) + -1, *(char *)(param_1 + 0x13) = cVar2, cVar2 != '\0'))
      {
        return in_lr;
      }
      goto LAB_080b1956;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_0801749C(param_1);
    *(undefined *)(param_1 + 0x24) = 0;
    *(undefined2 *)(param_1 + 0x50) = 0x100;
    *(undefined2 *)(param_1 + 0x52) = 0x100;
    cVar2 = *(char *)(param_1 + 0x11);
    if (cVar2 == '\0') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      sub_0800736C(param_1 + 0x74,&DAT_08369fec,param_1 + 0x54,1);
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = 0;
      uVar4 = 0xe08;
LAB_080b1840:
      sub_08017700(param_1,uVar4);
    }
    else {
      if (cVar2 == '\x01') {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
        sub_0800736C(param_1 + 0x74,&DAT_0836a004,param_1 + 0x54,1);
        *(int *)(param_1 + 0xa0) = param_1;
        *(undefined4 *)(param_1 + 0x98) = 0;
        uVar4 = 0xe07;
        goto LAB_080b1840;
      }
      if (cVar2 == '\x02') {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
        sub_0800736C(param_1 + 0x74,&DAT_0836a01c,param_1 + 0x54,1);
        *(int *)(param_1 + 0xa0) = param_1;
        *(undefined4 *)(param_1 + 0x98) = 0;
        sub_08017700(param_1,0xe09);
      }
    }
    *(undefined4 *)(param_1 + 0x98) = 0x80b1c41;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0xffffff58;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar3 = *(int *)(param_1 + 0x60) + 0x10;
  *(int *)(param_1 + 0x60) = iVar3;
  if (0x700 < iVar3) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sub_080177F4(param_1);
  iVar3 = sub_08009B28(*(int *)(param_1 + 0x54) + -0x800,*(int *)(param_1 + 0x58) + 0xb00);
  if (iVar3 == 0) {
    return in_lr;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
LAB_080b1914:
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  return in_lr;
}

