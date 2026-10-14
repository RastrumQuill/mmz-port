// sub_0806F370 at 0x0806F370 (thumb)

undefined4 sub_0806F370(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 != 0) goto LAB_0806f4e8;
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 != -1) goto LAB_0806f4e8;
      sub_080033F0(param_1 + 0x6c,0);
      *(undefined *)(param_1 + 0xd) = 1;
      if (*(int *)(param_1 + 0x54) < 1) {
        uVar4 = 0xffffff80;
      }
      else {
        uVar4 = 0x80;
      }
      *(undefined4 *)(param_1 + 0x54) = uVar4;
      puVar6 = &DAT_082b1088;
      if (1 < *(byte *)(param_1 + 0x10)) {
        puVar6 = &DAT_082b10a4;
      }
      sub_0800561C(param_1 + 0x74,puVar6);
      uVar3 = 0;
    }
    else {
      if (bVar1 != 2) goto LAB_0806f4e8;
      if (*(char *)(param_1 + 0x12) == '\0') {
        sub_080033F0(param_1 + 0x6c,3);
        puVar6 = &DAT_082b10f8;
        if (1 < *(byte *)(param_1 + 0x10)) {
          puVar6 = &DAT_082b1114;
        }
        sub_0800561C(param_1 + 0x74,puVar6);
      }
      *(undefined *)(param_1 + 0xd) = 0;
      uVar3 = 0x3c;
    }
    *(undefined *)(param_1 + 0x12) = uVar3;
    goto LAB_0806f4e8;
  }
  iVar5 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x4c) = iVar5;
  uVar4 = sub_08008360(iVar5,*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x50) = uVar4;
  if (*(int *)(param_1 + 0x54) < 1) {
    iVar5 = *(int *)(param_1 + 0x4c);
    iVar7 = -0xa00;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x4c);
    iVar7 = 0xa00;
  }
  iVar5 = sub_08008360(iVar5 + iVar7);
  iVar5 = *(int *)(param_1 + 0x50) - iVar5;
  if (iVar5 < 0) {
    iVar5 = -iVar5;
  }
  if (iVar5 < 0x801) {
    iVar5 = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0x4c);
    if (iVar5 < 0) {
      iVar5 = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0xb8);
    }
    if (0x3000 < iVar5) goto LAB_0806f43e;
  }
  else {
LAB_0806f43e:
    *(int *)(param_1 + 0x54) = -*(int *)(param_1 + 0x54);
  }
  if (*(int *)(param_1 + 0x50) >> 8 == *(int *)(DAT_0202286c + 0x50) >> 8) {
    iVar5 = *(int *)(param_1 + 0x54);
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    if (iVar5 == 0x80) {
      sub_080033F0(param_1 + 0x6c,1);
    }
    if (*(int *)(param_1 + 0x54) < 1) {
      *(undefined4 *)(param_1 + 0x54) = 0xfffffd80;
    }
    else {
      *(undefined4 *)(param_1 + 0x54) = 0x280;
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0x54);
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    if (iVar5 == 0x280) {
      sub_080033F0(param_1 + 0x6c,0);
    }
    if (*(int *)(param_1 + 0x54) < 1) {
      *(undefined4 *)(param_1 + 0x54) = 0xffffff80;
    }
    else {
      *(undefined4 *)(param_1 + 0x54) = 0x80;
    }
  }
LAB_0806f4e8:
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

