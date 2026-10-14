// sub_080848F4 at 0x080848F4 (thumb)

undefined4 sub_080848F4(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0x60;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar2 = *(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54);
    iVar3 = 0x7800;
  }
  else {
    iVar2 = *(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54);
    iVar3 = -0x1000;
  }
  if ((0x6800 < (uint)(iVar2 + iVar3)) ||
     (0x7000 < (uint)(*(int *)(DAT_0202f5c0 + 0x58) - *(int *)(param_1 + 0x58)))) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080177F4(param_1);
  return in_lr;
}

