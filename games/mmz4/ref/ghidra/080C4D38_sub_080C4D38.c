// sub_080C4D38 at 0x080C4D38 (thumb)

undefined4 sub_080C4D38(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_08862280);
    *(uint *)(param_1 + 0x5c) = ((bVar1 >> 4 & 1) * 2 + -1) * 0x200;
    uVar3 = *(uint *)(param_1 + 0xb4);
    if ((int)uVar3 < 0) {
      uVar3 = uVar3 + 0x1ff;
    }
    cVar2 = (char)((int)uVar3 >> 9);
    *(char *)(param_1 + 0x12) = cVar2;
    if ((*(uint *)(param_1 + 0xb4) & 0x1ff) != 0) {
      *(char *)(param_1 + 0x12) = cVar2 + '\x01';
    }
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

