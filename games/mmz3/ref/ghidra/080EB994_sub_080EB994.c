// sub_080EB994 at 0x080EB994 (thumb)

undefined4 sub_080EB994(int param_1)

{
  int iVar1;
  ushort *puVar2;
  char *pcVar3;
  ushort *puVar4;
  undefined4 in_lr;
  
  puVar4 = (ushort *)(param_1 + 0x24c);
  DAT_02002130 = *puVar4;
  pcVar3 = (char *)(param_1 + 0x24a);
  if (*pcVar3 == *(char *)(param_1 + 0x24b)) {
    iVar1 = (*(ushort *)(param_1 + 0x12) >> 1 & 3) * 4;
    puVar2 = (ushort *)(param_1 + 0x248);
    DAT_02002130 = *(ushort *)((uint)*puVar2 * 2 + *(int *)(&DAT_0838b4a8 + iVar1));
    *(char *)(param_1 + 0x24b) = *(char *)(*(int *)(&DAT_0838b4b8 + iVar1) + (uint)*puVar2);
    *pcVar3 = '\0';
    *puVar2 = *puVar2 + 1;
  }
  *pcVar3 = *pcVar3 + '\x01';
  DAT_02002134 = DAT_02002130 & ~*puVar4;
  DAT_02002136 = 0;
  *puVar4 = DAT_02002130;
  return in_lr;
}

