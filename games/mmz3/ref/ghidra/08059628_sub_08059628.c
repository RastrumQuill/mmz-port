// sub_08059628 at 0x08059628 (thumb)

undefined4 sub_08059628(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0800471C(0x97);
    sub_08007390(param_1 + 0x74,&DAT_083611dc);
    sub_08017700(param_1,0xb204);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar2 = *(int *)(param_1 + 0x60) + 0x20;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar2 = sub_08009B28(*(undefined4 *)(param_1 + 0x54));
  if (iVar2 < 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar2;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080177F4(param_1);
  return in_lr;
}

