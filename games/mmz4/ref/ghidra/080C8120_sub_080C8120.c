// sub_080C8120 at 0x080C8120 (thumb)

undefined4 sub_080C8120(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_08862a98);
    sub_0801CF00(param_1,0x8309);
    *(undefined *)(param_1 + 0x12) = 0x30;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  if ((*(byte *)(iVar3 + 10) & 0x10) == 0) {
    iVar2 = -0x800;
  }
  else {
    iVar2 = 0x800;
  }
  *(int *)(param_1 + 0x54) = *(int *)(iVar3 + 0x54) + iVar2;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar3 + 0x58);
  if ((*(byte *)(iVar3 + 0xc) < 2) && (*(int *)(iVar3 + 0x2c) == 0)) {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8);
    sub_080C8328(param_1);
  }
  return in_lr;
}

