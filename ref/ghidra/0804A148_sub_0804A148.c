// sub_0804A148 at 0x0804A148 (thumb)

undefined4 sub_0804A148(int param_1)

{
  byte bVar1;
  undefined uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_080033F0(param_1 + 0x6c,9);
    *(undefined *)(param_1 + 0xe) = 0;
    *(char *)(param_1 + 0x44) = *(char *)(param_1 + 0xbc);
    if (*(char *)(param_1 + 0xbc) == '\0') {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(undefined *)(param_1 + 0x13) = 0x78;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if (*(char *)(param_1 + 0xbc) == '\0') {
    iVar7 = *(int *)(param_1 + 0x4c);
    *(int *)(param_1 + 0x4c) = iVar7 + -0x8c;
    iVar4 = -0x108c;
  }
  else {
    iVar7 = *(int *)(param_1 + 0x4c);
    *(int *)(param_1 + 0x4c) = iVar7 + 0x8c;
    iVar4 = 0x108c;
  }
  iVar5 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  if (*(int *)(param_1 + 0x50) + 0x440 <= iVar5) {
    *(undefined *)(param_1 + 0xd) = 1;
    goto LAB_0804a316;
  }
  *(int *)(param_1 + 0x50) = iVar5;
  iVar5 = sub_08008360(iVar7 + iVar4,iVar5 + 0x800);
  iVar8 = iVar5 - *(int *)(param_1 + 0x50);
  if (iVar8 < 0) {
    if (0x1000 < *(int *)(param_1 + 0x50) - iVar5) goto LAB_0804a228;
LAB_0804a258:
    cVar3 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar3;
    if (cVar3 != -1) {
      return in_lr;
    }
    if (*(char *)(param_1 + 0xbc) == '\0') {
      if (0 < (*(int *)(DAT_0202286c + 0x4c) >> 8) - (*(int *)(param_1 + 0x4c) >> 8)) {
        uVar6 = DAT_02022890 * 0x343fd + 0x269ec3;
        DAT_02022890 = uVar6 & 0x7fffffff;
        if (6 < (uVar6 * 2 >> 0x11 & 0xf)) goto LAB_0804a2ea;
        *(undefined *)(param_1 + 0x44) = 1;
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
        goto LAB_0804a30e;
      }
    }
    else if ((*(int *)(DAT_0202286c + 0x4c) >> 8) - (*(int *)(param_1 + 0x4c) >> 8) < 0) {
      uVar6 = DAT_02022890 * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar6 & 0x7fffffff;
      if (6 < (uVar6 * 2 >> 0x11 & 0xf)) {
LAB_0804a2ea:
        *(undefined *)(param_1 + 0x13) = 0x78;
        return in_lr;
      }
      *(undefined *)(param_1 + 0x44) = 0;
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
LAB_0804a30e:
      *(byte *)(param_1 + 10) = bVar1;
    }
    uVar2 = 3;
  }
  else {
    if (iVar8 < 0x1001) goto LAB_0804a258;
LAB_0804a228:
    iVar8 = *(int *)(param_1 + 0x50);
    if (iVar8 < iVar5) {
      uVar2 = 0x10;
    }
    else {
      uVar2 = sub_080C8AD0(iVar8 - iVar5,0x1e0);
    }
    *(undefined *)(param_1 + 0x12) = uVar2;
    uVar6 = sub_080079CC(iVar7 + iVar4,iVar8 + -0x800);
    if ((uVar6 & 0x80) != 0) goto LAB_0804a258;
    uVar2 = 5;
  }
  *(undefined *)(param_1 + 0xd) = uVar2;
LAB_0804a316:
  *(undefined *)(param_1 + 0xe) = 1;
  return in_lr;
}

