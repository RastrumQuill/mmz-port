// sub_080B84B4 at 0x080B84B4 (thumb)

undefined4 sub_080B84B4(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x194);
    sub_08005784(param_1 + 0x74,&DAT_08860d08);
    sub_0801CF00(param_1,0xb601);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x68) = 0x2000;
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  iVar1 = (int)*(short *)((int)&DAT_08128c10 +
                         ((0x10 - (uint)*(byte *)(param_1 + 0x12)) * 0x4000000 >> 0x17)) *
          *(int *)(param_1 + 0x68);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x60) + (iVar1 >> 8);
  if (cVar2 == '\0') {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

