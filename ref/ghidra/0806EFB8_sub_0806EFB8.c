// sub_0806EFB8 at 0x0806EFB8 (thumb)

undefined4 sub_0806EFB8(int param_1)

{
  byte bVar1;
  undefined uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 != 0) goto LAB_0806f15c;
      cVar3 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar3;
      if (cVar3 != -1) goto LAB_0806f15c;
      sub_080033F0(param_1 + 0x6c,0);
      *(undefined *)(param_1 + 0xd) = 1;
      if (*(int *)(param_1 + 0x58) < 1) {
        uVar4 = 0xffffff80;
      }
      else {
        uVar4 = 0x80;
      }
      *(undefined4 *)(param_1 + 0x58) = uVar4;
      puVar5 = &DAT_082b1088;
      if (1 < *(byte *)(param_1 + 0x10)) {
        puVar5 = &DAT_082b10a4;
      }
      sub_0800561C(param_1 + 0x74,puVar5);
      uVar2 = 0;
    }
    else {
      if (bVar1 != 2) goto LAB_0806f15c;
      if (*(char *)(param_1 + 0x12) == '\0') {
        sub_080033F0(param_1 + 0x6c,3);
        puVar5 = &DAT_082b10f8;
        if (1 < *(byte *)(param_1 + 0x10)) {
          puVar5 = &DAT_082b1114;
        }
        sub_0800561C(param_1 + 0x74,puVar5);
      }
      *(undefined *)(param_1 + 0xd) = 0;
      uVar2 = 0x3c;
    }
    *(undefined *)(param_1 + 0x12) = uVar2;
    goto LAB_0806f15c;
  }
  iVar6 = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x50) = iVar6;
  if (*(int *)(param_1 + 0x58) < 1) {
    cVar3 = sub_080079CC(*(int *)(param_1 + 0x4c) + 0x100,iVar6 + -0xc00);
    if (cVar3 == '\0') {
      uVar4 = *(undefined4 *)(param_1 + 0x4c);
      iVar6 = *(int *)(param_1 + 0x50);
      iVar7 = -0xc00;
      goto LAB_0806f07a;
    }
LAB_0806f068:
    iVar6 = 0x1000;
  }
  else {
    cVar3 = sub_080079CC(*(int *)(param_1 + 0x4c) + 0x100,iVar6 + 0xc00);
    if (cVar3 != '\0') goto LAB_0806f068;
    uVar4 = *(undefined4 *)(param_1 + 0x4c);
    iVar6 = *(int *)(param_1 + 0x50);
    iVar7 = 0xc00;
LAB_0806f07a:
    iVar6 = sub_08008BC0(uVar4,iVar6 + iVar7);
    iVar6 = *(int *)(param_1 + 0x4c) - iVar6;
  }
  if (iVar6 < 0) {
    iVar6 = -iVar6;
  }
  if (0x800 < iVar6) {
    *(int *)(param_1 + 0x58) = -*(int *)(param_1 + 0x58);
  }
  iVar7 = *(int *)(param_1 + 0x4c) + 0xa00;
  iVar6 = iVar7 - *(int *)(DAT_0202286c + 0x4c);
  if (iVar6 < 0) {
    iVar6 = *(int *)(DAT_0202286c + 0x4c) - iVar7;
  }
  if (iVar6 < 0x400) {
    iVar6 = *(int *)(param_1 + 0x58);
    if (iVar6 < 0) {
      iVar6 = -iVar6;
    }
    if (iVar6 == 0x80) {
      sub_080033F0(param_1 + 0x6c,1);
    }
    if (*(int *)(param_1 + 0x58) < 1) {
      *(undefined4 *)(param_1 + 0x58) = 0xfffffd80;
    }
    else {
      *(undefined4 *)(param_1 + 0x58) = 0x280;
    }
  }
  else {
    iVar6 = *(int *)(param_1 + 0x58);
    if (iVar6 < 0) {
      iVar6 = -iVar6;
    }
    if (iVar6 == 0x280) {
      sub_080033F0(param_1 + 0x6c,0);
    }
    if (*(int *)(param_1 + 0x58) < 1) {
      *(undefined4 *)(param_1 + 0x58) = 0xffffff80;
    }
    else {
      *(undefined4 *)(param_1 + 0x58) = 0x80;
    }
  }
LAB_0806f15c:
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

