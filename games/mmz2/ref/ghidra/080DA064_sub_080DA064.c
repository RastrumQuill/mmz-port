// sub_080DA064 at 0x080DA064 (thumb)

undefined4 sub_080DA064(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x11);
  bVar2 = *(byte *)(param_1 + 0x10);
  iVar3 = sub_080DABF4();
  if ((DAT_0202ebb4 & 2) == 0) {
    puVar4 = &DAT_0834b954;
  }
  else {
    puVar4 = &DAT_0834b93c;
  }
  *(uint *)(param_1 + 0x54) =
       *(int *)(puVar4 + (uint)bVar2 * 8) + (8 - (uint)*(byte *)(iVar3 + 6)) * (uint)bVar1 * 0x200;
  if (*(char *)(iVar3 + 2) == '\x02') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
  }
  return in_lr;
}

