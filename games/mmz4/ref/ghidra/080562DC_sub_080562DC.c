// sub_080562DC at 0x080562DC (thumb)

undefined4 sub_080562DC(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar2 = DAT_0202dbf0;
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0xfb);
    sub_0801CF00(param_1,0xa00c);
    iVar3 = DAT_0202dbf0;
    *(int *)(param_1 + 100) = *(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x68) = *(int *)(iVar3 + 0x58) - *(int *)(param_1 + 0x58);
    *(undefined *)(param_1 + 0x12) = 0xe;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  if ((iVar2 != 0) && ((*(uint *)(param_1 + 0x8c) & 0x800) != 0)) {
    *(undefined *)(iVar2 + 0x171) = 1;
    *(undefined *)(iVar2 + 0x172) = 0;
    *(undefined4 *)(iVar2 + 0x60) = 0;
    *(int *)(iVar2 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 100);
    *(int *)(iVar2 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x68);
    if (*(char *)(param_1 + 0x12) == '\x01') {
      sub_08005784(param_1 + 0x74,&DAT_08855128);
    }
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    if (*(char *)(param_1 + 0x12) == '\0') {
      if (iVar2 != 0) {
        *(byte *)(iVar2 + 0x142) = *(byte *)(iVar2 + 0x142) | 0x40;
        *(undefined *)(iVar2 + 0xd) = 4;
        *(undefined *)(iVar2 + 0xe) = 0;
        *(uint *)(iVar2 + 0x128) = ((bVar1 >> 4 & 1) * -2 + 1) * 0x380;
        *(undefined4 *)(iVar2 + 300) = 0xfffffdc0;
        *(undefined4 *)(iVar2 + 0x130) = 0;
        *(undefined4 *)(iVar2 + 0x134) = 0x40;
        *(undefined2 *)(iVar2 + 0x138) = 0x10;
      }
      *(undefined *)(param_1 + 0xe) = 7;
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  return in_lr;
}

