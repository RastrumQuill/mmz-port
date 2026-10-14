// sub_080624A8 at 0x080624A8 (thumb)

undefined4 sub_080624A8(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_080033F0(param_1 + 0x6c,3);
    *(undefined *)(param_1 + 0xe) = 0;
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 4;
    *(undefined *)(param_1 + 0x12) = 0xff;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if (*(char *)(param_1 + 0x73) == '\x04') {
    sub_08001EAC(0x89);
  }
  uVar1 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50) + -0x1000);
  if ((uVar1 & 0xf0) != 0x40) {
    uVar2 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = uVar2;
  }
  if ((*(ushort *)(param_1 + 0x90) & 0x100) == 0) {
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  else {
    iVar4 = *(int *)(*(int *)(param_1 + 0x88) + 0x40);
    if (*(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c)) {
      *(undefined *)(param_1 + 0x44) = 1;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      iVar3 = *(int *)(iVar4 + 0x4c) + -0x1000;
    }
    else {
      *(undefined *)(param_1 + 0x44) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      iVar3 = *(int *)(iVar4 + 0x4c) + 0x1000;
    }
    *(int *)(param_1 + 0x4c) = iVar3;
    *(undefined4 *)(iVar4 + 0x50) = *(undefined4 *)(param_1 + 0x50);
  }
  return in_lr;
}

