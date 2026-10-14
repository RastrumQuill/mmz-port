// sub_080BAE24 at 0x080BAE24 (thumb)

undefined4 sub_080BAE24(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x194);
    sub_08005784(param_1 + 0x74,&DAT_08861090);
    sub_0801CF00(param_1,0xb600);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x68) = *(int *)(iVar2 + 0xb8) - (*(int *)(param_1 + 0x58) + -0x7fff);
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  iVar2 = (int)*(short *)((int)&DAT_08128c10 +
                         ((0x10 - (uint)*(byte *)(param_1 + 0x12)) * 0x4000000 >> 0x17)) *
          *(int *)(param_1 + 0x68);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x60) + (iVar2 >> 8);
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

