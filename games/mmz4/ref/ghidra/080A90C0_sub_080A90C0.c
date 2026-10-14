// sub_080A90C0 at 0x080A90C0 (thumb)

undefined4 sub_080A90C0(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(byte *)(iVar3 + 0xe1) == (*(byte *)(param_1 + 0x10) & 1)) {
      sub_0801CF00(param_1,0x930a);
    }
    *(undefined *)(param_1 + 0x12) = 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  if ((CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) == -0x6cf6) &&
     (*(short *)(iVar3 + 0xdc) != 0)) {
    bVar1 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar1 + 1;
    if ((bVar1 & 0x3f) == 0) {
      sub_08002B10(0x2c);
      iVar2 = sub_081284E0((*(int *)(param_1 + 0x54) - *(int *)(DAT_0202dbf0 + 0x54)) * 0x100 >>
                           0x10,((*(int *)(param_1 + 0x58) + 0xf00) - *(int *)(DAT_0202dbf0 + 0x58))
                                * 0x100 >> 0x10);
      sub_080BD0F0(param_1 + 0x54,0x300,(uint)(iVar2 << 0x10) >> 0x18);
    }
  }
  if (*(char *)(iVar3 + 0xd) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

