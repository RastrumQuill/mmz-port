// sub_080DA0C4 at 0x080DA0C4 (thumb)

undefined4 sub_080DA0C4(int param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 in_lr;
  
  if ((DAT_0202ebb4 & 2) == 0) {
    puVar5 = &DAT_0834b954;
  }
  else {
    puVar5 = &DAT_0834b93c;
  }
  *(uint *)(param_1 + 0x54) =
       *(int *)(puVar5 + (uint)*(byte *)(param_1 + 0x10) * 8) +
       (uint)*(byte *)(param_1 + 0x11) * 0x1000;
  iVar4 = sub_080DABF4(param_1);
  if (*(char *)(iVar4 + 2) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 3;
    iVar4 = *(int *)(iVar4 + 0x10);
    cVar2 = sub_08037C34(iVar4,*(byte *)(param_1 + 0x11) + 1);
    if ((int)cVar2 == (uint)*(byte *)(iVar4 + 0x212 + (uint)*(byte *)(param_1 + 0x10))) {
      bVar1 = *(byte *)(param_1 + 0x49);
      bVar3 = 4;
    }
    else {
      bVar1 = *(byte *)(param_1 + 0x49);
      bVar3 = 8;
    }
    *(byte *)(param_1 + 0x49) = bVar1 & 0xf3 | bVar3;
    sub_080DA158(param_1);
  }
  return in_lr;
}

