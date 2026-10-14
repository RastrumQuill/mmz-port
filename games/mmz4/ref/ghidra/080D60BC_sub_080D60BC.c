// sub_080D60BC at 0x080D60BC (thumb)

undefined4 sub_080D60BC(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  uVar4 = (uint)*(byte *)(iVar3 + 10) << 0x18;
  uVar10 = uVar4 >> 0x1c & 1;
  uVar6 = uVar4 >> 0x1d & 1;
  uVar9 = (uint)*(byte *)(param_1 + 0x11);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_0801CC9C(param_1);
  uVar4 = uVar10;
  if (uVar9 == 1) {
    uVar4 = uVar10 ^ 1;
  }
  if (uVar4 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(char *)(param_1 + 0x4c) = (char)uVar4;
  pbVar7 = (byte *)(param_1 + 0x4a);
  *pbVar7 = *pbVar7 & 0xef | (byte)(uVar4 << 4);
  bVar2 = *(byte *)(iVar3 + 10) >> 5;
  uVar4 = bVar2 & 1;
  if ((bVar2 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(char *)(param_1 + 0x4d) = (char)uVar4;
  *pbVar7 = *pbVar7 & 0xdf | (byte)(uVar4 << 5);
  if ((*(char *)(param_1 + 0x78) == '\x02') && (uVar9 == 2)) {
    uVar9 = 1;
  }
  sub_0801CF00(param_1,*(undefined2 *)(&DAT_088649d0 + uVar9 * 2));
  if ((char)uVar10 != 0) {
    uVar9 = 2 - uVar9;
  }
  cVar1 = *(char *)(param_1 + 0x78);
  if (cVar1 == '\x02') {
    iVar8 = *(int *)(param_1 + 0x74) >> 6;
    iVar3 = (char)uVar10 + 1;
    if (iVar3 * 0x1000000 >> 0x18 == 2) {
      iVar3 = 0xff;
    }
    iVar5 = iVar8;
    if (iVar8 < 0) {
      iVar5 = -iVar8;
    }
    iVar3 = iVar3 << 0x18;
    if (iVar5 < 0x80) {
      iVar8 = iVar3 >> 0x11;
    }
    iVar5 = iVar8;
    if (iVar8 < 0) {
      iVar5 = -iVar8;
    }
    if (0x100 < iVar5) {
      iVar8 = iVar3 >> 0x10;
    }
    uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    uVar10 = uVar4 & 0x7fffffff;
    DAT_0202dc38 = uVar10;
    *(uint *)(param_1 + 0x5c) =
         (uVar9 - 1) * 0x100 + (iVar3 >> 0x18) * (uVar4 * 2 >> 0x11 & 0x17f) + iVar8;
    if (uVar6 != 0) goto LAB_080d62e0;
    uVar4 = uVar10 * 0x343fd + 0x269ec3;
    uVar9 = uVar4 * 0x80 >> 0x17;
LAB_080d62c0:
    DAT_0202dc38 = uVar4 & 0x7fffffff;
    *(uint *)(param_1 + 0x60) = -0x200 - uVar9;
  }
  else {
    if (cVar1 == '\x01') {
      uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      *(uint *)(param_1 + 0x5c) = (uVar9 - 1) * 0x100 + (uVar4 * 2 >> 0x11 & 0x1ff) + -0x100;
      uVar4 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar4 & 0x7fffffff;
      *(uint *)(param_1 + 0x60) = -0x200 - (uVar4 * 2 >> 0x11 & 0x1ff);
      goto LAB_080d62f2;
    }
    uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    uVar10 = uVar4 & 0x7fffffff;
    DAT_0202dc38 = uVar10;
    *(uint *)(param_1 + 0x5c) = (uVar9 - 1) * 0x100 + (uVar4 * 2 >> 0x11 & 0x1ff) + -0x100;
    if (uVar6 == 0) {
      uVar4 = uVar10 * 0x343fd + 0x269ec3;
      uVar9 = uVar4 * 2 >> 0x11 & 0x1ff;
      goto LAB_080d62c0;
    }
LAB_080d62e0:
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  if (uVar6 != 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0xa00;
  }
LAB_080d62f2:
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  sub_080D5EC0(param_1);
  return in_lr;
}

