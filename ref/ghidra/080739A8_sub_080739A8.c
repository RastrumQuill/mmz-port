// sub_080739A8 at 0x080739A8 (thumb)

undefined4 sub_080739A8(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0xe) == '\0') goto LAB_08073a4a;
  *(undefined *)(param_1 + 0xe) = 0;
  sub_080033F0(param_1 + 0x6c,3);
  bVar1 = *(int *)(DAT_0202286c + 0x4c) < *(int *)(param_1 + 0x4c);
  *(bool *)(param_1 + 0x44) = bVar1;
  if (bVar1) {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar2;
  if (*(char *)(param_1 + 0x10) == '\0') {
    if (*(int *)(param_1 + 0x4c) < *(int *)(iVar5 + 0xb8) + 0x7800) {
      uVar4 = 0xfffffe80;
    }
    else {
LAB_08073a24:
      uVar4 = 0x180;
    }
  }
  else {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) goto LAB_08073a24;
    uVar4 = 0xfffffe80;
  }
  *(undefined4 *)(param_1 + 0x54) = uVar4;
  *(undefined4 *)(param_1 + 0x58) = 0xfffffd00;
  *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 8;
  sub_0800561C(param_1 + 0x74,&DAT_082b153c);
LAB_08073a4a:
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  iVar5 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x4c) = iVar5;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x40;
  cVar3 = sub_080079CC(iVar5 + *(int *)(param_1 + 0x54) * 8);
  if (cVar3 != '\0') {
    *(int *)(param_1 + 0x54) = -*(int *)(param_1 + 0x54);
    bVar2 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    *(byte *)(param_1 + 0x44) = bVar2;
    if (bVar2 == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
  }
  iVar5 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  if (iVar5 < *(int *)(param_1 + 0x50)) {
    uVar4 = sub_08008360(*(undefined4 *)(param_1 + 0x4c));
    *(undefined4 *)(param_1 + 0x50) = uVar4;
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

