// sub_08032104 at 0x08032104 (thumb)

undefined4 sub_08032104(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0x12);
    *(undefined4 *)(param_1 + 0x54) = 0x180;
    *(undefined4 *)(param_1 + 0x58) = 0x100;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x54) = 0xfffffe80;
    }
    *(undefined *)(param_1 + 0xe) = 0;
    sub_0807B13C(param_1,1);
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
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

