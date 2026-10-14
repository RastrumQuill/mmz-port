// sub_08054CC4 at 0x08054CC4 (thumb)

undefined4 sub_08054CC4(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  int *extraout_r1;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  int local_44 [4];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  int local_24;
  int local_20;
  
  local_44[0] = -0x1000;
  local_44[1] = 0x2000;
  local_44[2] = 0x1000;
  local_44[3] = 0x2000;
  uStack_34 = 0xfffff000;
  uStack_30 = 0x4000;
  local_2c = 0x1000;
  uStack_28 = 0x4000;
  piVar4 = &local_24;
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      sub_0801CFF0(param_1,piVar4);
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x60);
      iVar5 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar5;
      if (0x700 < iVar5) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
      iVar5 = *(int *)(param_1 + 0x5c);
      if (iVar5 < 0) {
        iVar5 = iVar5 + 0x1f;
      }
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 100) + (iVar5 >> 5);
      sub_08055258(param_1);
      sub_08055278(param_1);
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 == '\0') {
        cVar2 = sub_08128A9C(*(undefined *)(param_1 + 0x13),3);
        if (cVar2 == '\0') {
          sub_08002B10(0x35);
        }
        uVar6 = *(byte *)(param_1 + 0x13) & 3;
        uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
        local_24 = *(int *)(param_1 + 0x54) + local_44[uVar6 * 2] + (uVar3 * 2 >> 0x11 & 0x3fff) +
                   -0x1fff;
        uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
        DAT_0202dc38 = uVar3 & 0x7fffffff;
        local_20 = *(int *)(param_1 + 0x58) + local_44[uVar6 * 2 + 1] + (uVar3 * 2 >> 0x11 & 0x3fff)
                   + -0x1fff;
        iVar5 = sub_080D0894(1);
        if (iVar5 != 0) {
          *(byte *)(iVar5 + 0x49) = *(byte *)(iVar5 + 0x49) | 0xc;
        }
        uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
        DAT_0202dc38 = uVar3 & 0x7fffffff;
        *(byte *)(param_1 + 0x12) = ((byte)(uVar3 * 2 >> 0x11) & 7) + 8;
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
      }
      if (*(int *)(param_1 + 0x58) <= *(int *)(param_1 + 0xbc) + 0x18000) {
        return in_lr;
      }
      sub_0800D7F4(1);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      goto LAB_08054f92;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08002B10(0x53);
    if (((DAT_0202e918 & 1) != 0) && ((DAT_0202e922 & 1) == 0)) {
      DAT_0202e918 = DAT_0202e918 & 0xfffe | 0x10;
    }
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar4 = (int *)0x2c01;
    if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) == 0x2c01) {
      sub_0801CF00(param_1,0x2c00);
      piVar4 = extraout_r1;
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x58);
    *(undefined *)(param_1 + 0x12) = 8;
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0x80;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  sub_0801CFF0(param_1,piVar4);
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x60);
  iVar5 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar5;
  if (0x700 < iVar5) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  iVar5 = *(int *)(param_1 + 0x5c);
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0x1f;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 100) + (iVar5 >> 5);
  sub_08055258(param_1);
  sub_08055278(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    cVar2 = sub_08128A9C(*(undefined *)(param_1 + 0x13),3);
    if (cVar2 == '\0') {
      sub_08002B10(0x35);
    }
    uVar6 = *(byte *)(param_1 + 0x13) & 3;
    uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    local_24 = *(int *)(param_1 + 0x54) + local_44[uVar6 * 2] + (uVar3 * 2 >> 0x11 & 0x3fff) +
               -0x1fff;
    uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar3 & 0x7fffffff;
    local_20 = *(int *)(param_1 + 0x58) + local_44[uVar6 * 2 + 1] + (uVar3 * 2 >> 0x11 & 0x3fff) +
               -0x1fff;
    iVar5 = sub_080D0894(1);
    if (iVar5 != 0) {
      *(byte *)(iVar5 + 0x49) = *(byte *)(iVar5 + 0x49) | 0xc;
    }
    uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar3 & 0x7fffffff;
    *(byte *)(param_1 + 0x12) = ((byte)(uVar3 * 2 >> 0x11) & 7) + 8;
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  }
  iVar5 = *(int *)(param_1 + 0x68) + -1;
  *(int *)(param_1 + 0x68) = iVar5;
  if (iVar5 != 0) {
    return in_lr;
  }
  DAT_0202e922 = DAT_0202e922 | 2;
LAB_08054f92:
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  return in_lr;
}

