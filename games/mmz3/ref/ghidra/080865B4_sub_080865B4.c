// sub_080865B4 at 0x080865B4 (thumb)

undefined4 sub_080865B4(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x10) * '\b' + '\x02';
    *(undefined *)(param_1 + 0xe) = 1;
  }
  sub_080177F4(param_1);
  iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar4;
  iVar3 = -0xa00;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    iVar3 = 0xa00;
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if ((cVar1 == -1) ||
     (sVar2 = sub_08009A3C(iVar4 + iVar3,*(undefined4 *)(param_1 + 0x58)), sVar2 != 0)) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

