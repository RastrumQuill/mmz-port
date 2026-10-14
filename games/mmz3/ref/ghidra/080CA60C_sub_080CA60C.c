// sub_080CA60C at 0x080CA60C (thumb)

undefined4 sub_080CA60C(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_0836c4f0);
    sub_08017700(param_1,0x1105);
    *(undefined *)(param_1 + 0x12) = 0x30;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar3 = *(int *)(param_1 + 0x58) + -0x80;
  *(int *)(param_1 + 0x58) = iVar3;
  bVar1 = iVar3 < DAT_0202e48c;
  if (bVar1) {
    *(int *)(param_1 + 0x58) = DAT_0202e48c;
  }
  iVar3 = sub_08009C90(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (0 < iVar3) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
  }
  if ((0 < iVar3 || bVar1) &&
     (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == '\0')) {
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080177F4(param_1);
  return in_lr;
}

