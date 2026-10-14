// sub_080C080C at 0x080C080C (thumb)

undefined4 sub_080C080C(int param_1)

{
  byte bVar1;
  byte bVar2;
  ushort *puVar3;
  int iVar4;
  undefined4 in_lr;
  undefined auStack_2c [4];
  undefined auStack_28 [8];
  undefined *local_20 [2];
  
  sub_08128B5C(auStack_2c,&DAT_081299e0,3);
  sub_08128B5C(auStack_28,&DAT_081299e3,5);
  iVar4 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0x11);
  bVar2 = *(byte *)(param_1 + 0xb4);
  if (*(char *)(param_1 + 0xf) == '\0') {
    local_20[0] = auStack_2c;
    local_20[1] = auStack_28;
    sub_08005784(param_1 + 0x74,&DAT_08861bd0);
    puVar3 = (ushort *)(iVar4 + 0xb4);
    *puVar3 = (ushort)(1 << local_20[bVar1][bVar2]) | *puVar3;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  return in_lr;
}

