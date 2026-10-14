// sub_08022D58 at 0x08022D58 (thumb)

undefined8 sub_08022D58(int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 in_lr;
  
  uVar2 = *(byte *)(param_1 + 10) >> 4 & 1 ^ param_2;
  iVar1 = (int)(-uVar2 | uVar2) >> 0x1f;
  uVar7 = *(ushort *)(param_1 + 0xe8 + iVar1 * -2);
  if (((*(uint *)(param_1 + 0xc) & 0xffff00) != 0x20400) &&
     (((*(char *)(param_1 + 0x94) == '\0' || ((*(uint *)(param_1 + 0x8c) & 1) != 0)) &&
      ((*(byte *)(param_1 + 0x18c) & 0x43) == 0)))) {
    uVar7 = uVar7 & 0xfffb;
  }
  if (*(char *)(param_1 + 0x94) == '\0') {
    uVar7 = uVar7 & 0xfff7;
  }
  if ((uVar7 & 0xd) == 0) {
    uVar4 = 0;
  }
  else {
    iVar9 = iVar1 * -8 + param_1 + 0xd8;
    iVar3 = *(int *)(iVar9 + 0x40);
    iVar5 = *(int *)(iVar9 + 0x44);
    iVar8 = *(int *)(iVar9 + 0x54);
    iVar10 = iVar3;
    iVar11 = iVar5;
    if ((*(ushort *)(param_1 + 0xe0 + iVar1 * -2) & 0x80) == 0) {
      if (((uVar7 & 0xc) != 0) && (*(int *)(iVar9 + 0x24) == iVar8)) {
        iVar10 = *(int *)(iVar9 + 0x50);
        iVar11 = iVar8;
      }
    }
    else {
      iVar10 = *(int *)(iVar9 + 0x50);
      iVar11 = iVar8;
      if ((uVar7 & 1) != 0) {
        iVar10 = iVar3;
        iVar11 = iVar5;
      }
    }
    if (param_3 == 0) {
      uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
      uVar6 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar6 & 0x7fffffff;
      sub_080AD6CC((((int)((uVar2 * 2 >> 0x11 & 7) + 1) >> 1) + -2) * 0x100 + iVar10,
                   (((int)((uVar6 * 2 >> 0x11 & 7) + 1) >> 1) + -2) * 0x100 + iVar11);
    }
    else {
      sub_080AD524(iVar10,iVar11,8,(-param_2 | param_2) >> 0x1f);
    }
    uVar4 = 1;
  }
  return CONCAT44(in_lr,uVar4);
}

