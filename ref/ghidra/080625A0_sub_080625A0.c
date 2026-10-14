// sub_080625A0 at 0x080625A0 (thumb)

undefined4 sub_080625A0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_080033F0(param_1 + 0x6c,1);
    *(undefined *)(param_1 + 0xe) = 0;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar1 = 0x200;
    }
    else {
      uVar1 = 0xfffffe00;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar1;
    *(undefined4 *)(param_1 + 0x58) = 0xfffffe00;
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 8;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  iVar2 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x4c) = iVar2;
  iVar4 = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x50) = iVar4;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x40;
  uVar3 = sub_080079CC(iVar2,iVar4 + -0x1000);
  if ((uVar3 & 0xf0) != 0x40) {
    iVar2 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    if (iVar2 < *(int *)(param_1 + 0x50)) {
      uVar1 = sub_08008360(*(undefined4 *)(param_1 + 0x4c));
      *(undefined4 *)(param_1 + 0x50) = uVar1;
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 1;
    }
  }
  return in_lr;
}

