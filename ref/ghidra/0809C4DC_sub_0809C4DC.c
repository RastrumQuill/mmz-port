// sub_0809C4DC at 0x0809C4DC (thumb)

undefined4 sub_0809C4DC(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  undefined4 in_lr;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0x20) + 0x4c);
  bVar1 = *(byte *)(*(int *)(param_1 + 0x20) + 10) >> 4;
  *(byte *)(param_1 + 0x44) = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  if ((bVar1 & 1) == 0) {
    iVar3 = *(int *)(param_1 + 0x54);
  }
  else {
    iVar3 = -*(int *)(param_1 + 0x54);
  }
  iVar4 = iVar4 + iVar3;
  if (iVar4 == *(int *)(param_1 + 0x4c)) {
    cVar5 = '\x14';
  }
  else {
    *(int *)(param_1 + 0x4c) = iVar4;
    cVar5 = '\x15';
  }
  if (cVar5 != *(char *)(param_1 + 0x12)) {
    sub_080033F0(param_1 + 0x6c,cVar5);
    *(char *)(param_1 + 0x12) = cVar5;
  }
  return in_lr;
}

