// sub_080B3A00 at 0x080B3A00 (thumb)

undefined4 sub_080B3A00(int param_1)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar3 = sub_0802B3CC(*(undefined4 *)(param_1 + 0x2c));
  if (iVar3 != 0) {
    sub_08005784(param_1 + 0x74,&DAT_08860218);
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0x100;
    iVar4 = *(int *)(DAT_0202dbf0 + 0x54);
    iVar3 = *(int *)(param_1 + 0x54);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0xffffff00;
    }
    cVar1 = sub_080B3AF0(param_1);
    if ((cVar1 == '\0') || ((bool)(~(*(byte *)(param_1 + 10) >> 4) & 1) != iVar3 < iVar4)) {
      uVar2 = 1;
    }
    else {
      uVar2 = 2;
    }
    *(undefined *)(param_1 + 0xd) = uVar2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

