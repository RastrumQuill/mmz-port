// sub_080CC2C4 at 0x080CC2C4 (thumb)

undefined4 sub_080CC2C4(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  sub_0801CFF0();
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar2;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
  if (*(int *)(param_1 + 0x28) != 0) {
    *(int *)(param_1 + 0x58) = iVar2 + *(int *)(*(int *)(param_1 + 0x28) + 0x60);
  }
  if (*(byte *)(param_1 + 0x12) < 0x10) {
    if (*(byte *)(param_1 + 0x13) == (*(byte *)(param_1 + 0x12) & 1)) {
      sub_08005784(param_1 + 0x74,&DAT_088631b4);
    }
    else {
      sub_08005784(param_1 + 0x74,&DAT_088632a4);
    }
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8);
    sub_080CBCD8(param_1);
  }
  return in_lr;
}

