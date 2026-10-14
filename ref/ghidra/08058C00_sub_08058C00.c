// sub_08058C00 at 0x08058C00 (thumb)

undefined4 sub_08058C00(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_080033F0(param_1 + 0x6c,0);
    *(undefined *)(param_1 + 0xe) = 0;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar1 = 0xffffff00;
    }
    else {
      uVar1 = 0x100;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar1;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar3 = *(int *)(param_1 + 0x4c);
    iVar4 = iVar3 - *(int *)(DAT_0202286c + 0x4c);
    iVar2 = *(int *)(param_1 + 0x54) + -0x18;
    *(int *)(param_1 + 0x54) = iVar2;
    uVar1 = 0xfffffe00;
    if (-0x201 < iVar2) goto LAB_08058ca8;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x4c);
    iVar4 = *(int *)(DAT_0202286c + 0x4c) - iVar3;
    iVar2 = *(int *)(param_1 + 0x54) + 0x18;
    *(int *)(param_1 + 0x54) = iVar2;
    uVar1 = 0x200;
    if (iVar2 < 0x201) goto LAB_08058ca8;
  }
  *(undefined4 *)(param_1 + 0x54) = uVar1;
LAB_08058ca8:
  if (iVar4 < 0) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xf) = 2;
  }
  if (*(int *)(DAT_0202286c + 0x50) - *(int *)(param_1 + 0x50) >> 8 < 0x19) {
    uVar1 = 0xffffffe0;
  }
  else {
    uVar1 = 0x20;
  }
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  iVar3 = iVar3 + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x4c) = iVar3;
  iVar2 = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x50) = iVar2;
  if ((((0xf0 < (((*(int *)(DAT_0202286c + 0x50) >> 8) - (iVar2 >> 8)) + 0x78U & 0xffff)) ||
       (0x1200000 < (uint)((((*(int *)(DAT_0202286c + 0x4c) >> 8) - (iVar3 >> 8)) + 0x90) * 0x10000)
       )) || (iVar3 < 0x71000)) || (0xf8000 < iVar3)) {
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0x12) = 0;
  }
  return in_lr;
}

