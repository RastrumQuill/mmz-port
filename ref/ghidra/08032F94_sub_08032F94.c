// sub_08032F94 at 0x08032F94 (thumb)

undefined4 sub_08032F94(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,4);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar1 = 0x200;
    }
    else {
      uVar1 = 0xfffffe00;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar1;
    *(undefined4 *)(param_1 + 0x58) = 0xfffffc00;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_0800561C(param_1 + 0x74,&DAT_082ad494);
  }
  sub_080297C0(param_1);
  iVar2 = *(int *)(param_1 + 0x58) + 0x40;
  *(int *)(param_1 + 0x58) = iVar2;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar2;
  iVar2 = sub_08008360();
  if (iVar2 < *(int *)(param_1 + 0x50)) {
    uVar1 = sub_08008360(*(undefined4 *)(param_1 + 0x4c));
    *(undefined4 *)(param_1 + 0x50) = uVar1;
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

