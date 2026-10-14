// sub_0810FC3C at 0x0810FC3C (thumb)

undefined4 sub_0810FC3C(int param_1)

{
  int iVar1;
  ushort *puVar2;
  char *pcVar3;
  ushort *puVar4;
  undefined4 in_lr;
  
  puVar4 = (ushort *)(param_1 + 0x250);
  DAT_02000760 = *puVar4;
  pcVar3 = (char *)(param_1 + 0x24e);
  if (*pcVar3 == *(char *)(param_1 + 0x24f)) {
    iVar1 = (*(ushort *)(param_1 + 0x12) >> 1 & 3) * 4;
    puVar2 = (ushort *)(param_1 + 0x24c);
    DAT_02000760 = *(ushort *)((uint)*puVar2 * 2 + *(int *)(&DAT_08885bc4 + iVar1));
    *(char *)(param_1 + 0x24f) = *(char *)(*(int *)(&DAT_08885bd4 + iVar1) + (uint)*puVar2);
    *pcVar3 = '\0';
    *puVar2 = *puVar2 + 1;
  }
  *pcVar3 = *pcVar3 + '\x01';
  DAT_02000764 = DAT_02000760 & ~*puVar4;
  DAT_02000766 = 0;
  *puVar4 = DAT_02000760;
  return in_lr;
}

