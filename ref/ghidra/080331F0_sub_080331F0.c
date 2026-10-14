// sub_080331F0 at 0x080331F0 (thumb)

undefined4 sub_080331F0(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(*(int *)(param_1 + 0x24) + 0x10) = 1;
    *(undefined *)(param_1 + 0x12) = 0x50;
  }
  sub_080297C0(param_1);
  iVar3 = *(int *)(DAT_0202286c + 0x4c);
  *(bool *)(param_1 + 0x44) = *(int *)(param_1 + 0x4c) < iVar3;
  if (*(int *)(param_1 + 0x4c) < iVar3) {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar1;
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

