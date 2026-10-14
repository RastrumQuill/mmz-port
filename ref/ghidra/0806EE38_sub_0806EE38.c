// sub_0806EE38 at 0x0806EE38 (thumb)

undefined4 sub_0806EE38(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    iVar4 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x4c) = iVar4;
    if (*(int *)(param_1 + 0x54) < 1) {
      iVar4 = iVar4 + -0xa00;
    }
    else {
      iVar4 = iVar4 + 0xa00;
    }
    iVar4 = sub_0800869C(iVar4,*(undefined4 *)(param_1 + 0x50));
    iVar4 = *(int *)(param_1 + 0x50) - iVar4;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    if (0x800 < iVar4) {
      *(int *)(param_1 + 0x54) = -*(int *)(param_1 + 0x54);
    }
    if ((*(int *)(DAT_0202286c + 0x50) >> 8) + -0x28 < *(int *)(param_1 + 0x50) >> 8) {
      iVar4 = *(int *)(param_1 + 0x54);
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
      if (iVar4 == 0x80) {
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
      iVar4 = *(int *)(param_1 + 0x54);
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
      if (iVar4 == 0x280) {
        sub_080033F0(param_1 + 0x6c,0);
      }
      if (*(int *)(param_1 + 0x54) < 1) {
        *(undefined4 *)(param_1 + 0x54) = 0xffffff80;
      }
      else {
        *(undefined4 *)(param_1 + 0x54) = 0x80;
      }
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 == -1) {
        sub_080033F0(param_1 + 0x6c,0);
        *(undefined *)(param_1 + 0xd) = 1;
        if (*(int *)(param_1 + 0x54) < 1) {
          uVar3 = 0xffffff80;
        }
        else {
          uVar3 = 0x80;
        }
        *(undefined4 *)(param_1 + 0x54) = uVar3;
        *(undefined *)(param_1 + 0x12) = 0;
        puVar5 = &DAT_082b1088;
        if (1 < *(byte *)(param_1 + 0x10)) {
          puVar5 = &DAT_082b10a4;
        }
        sub_0800561C(param_1 + 0x74,puVar5);
      }
    }
  }
  else if (bVar1 == 2) {
    if (*(char *)(param_1 + 0x12) == '\0') {
      sub_080033F0(param_1 + 0x6c,3);
      puVar5 = &DAT_082b10f8;
      if (1 < *(byte *)(param_1 + 0x10)) {
        puVar5 = &DAT_082b1114;
      }
      sub_0800561C(param_1 + 0x74,puVar5);
    }
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0x12) = 0x3c;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

