// sub_0806231C at 0x0806231C (thumb)

undefined4 sub_0806231C(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_080033F0(param_1 + 0x6c,0);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0x18;
    sub_0800561C(param_1 + 0x74,&DAT_082b05f4);
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 8;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if ((*(ushort *)(param_1 + 0x90) & 0x100) != 0) {
    iVar7 = *(int *)(*(int *)(param_1 + 0x88) + 0x40);
    if (*(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c)) {
      *(undefined *)(param_1 + 0x44) = 1;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      iVar3 = *(int *)(iVar7 + 0x4c);
      iVar6 = -0x1000;
    }
    else {
      *(undefined *)(param_1 + 0x44) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      iVar3 = *(int *)(iVar7 + 0x4c);
      iVar6 = 0x1000;
    }
    *(int *)(param_1 + 0x4c) = iVar3 + iVar6;
    *(undefined4 *)(iVar7 + 0x50) = *(undefined4 *)(param_1 + 0x50);
    sub_0800561C(param_1 + 0x74,&DAT_082b0610);
    *(undefined *)(param_1 + 0xd) = 4;
    goto LAB_0806249c;
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar7 = *(int *)(param_1 + 0x4c) + -0x60;
    *(int *)(param_1 + 0x4c) = iVar7;
    if (iVar7 < *(int *)(DAT_0202286c + 0x4c)) goto LAB_0806242c;
  }
  else {
    iVar7 = *(int *)(param_1 + 0x4c) + 0x60;
    *(int *)(param_1 + 0x4c) = iVar7;
    if (*(int *)(DAT_0202286c + 0x4c) < iVar7) {
LAB_0806242c:
      *(undefined *)(param_1 + 0x12) = 1;
    }
  }
  uVar4 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50) + -0x1000);
  if ((uVar4 & 0xf0) != 0x40) {
    uVar5 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = uVar5;
  }
  if (0x200 < *(int *)(param_1 + 0xb8)) {
    return in_lr;
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0x13) + -1;
  *(char *)(param_1 + 0x13) = cVar1;
  if (cVar1 != -1) {
    return in_lr;
  }
  bVar2 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
  *(byte *)(param_1 + 0x44) = bVar2;
  if (bVar2 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
LAB_0806249c:
  *(undefined *)(param_1 + 0xe) = 1;
  return in_lr;
}

