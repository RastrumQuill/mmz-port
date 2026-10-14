// sub_08014910 at 0x08014910 (thumb)

longlong sub_08014910(int param_1)

{
  int iVar1;
  char *pcVar2;
  uint in_lr;
  
  pcVar2 = *(char **)(*(int *)(param_1 + 0xc) + 4);
  if (DAT_02022c5c == '\0') {
    sub_08006328();
  }
  sub_08013C28(&DAT_02022c44,pcVar2);
  if ((*pcVar2 != '\x01') &&
     (iVar1 = *(int *)(param_1 + (uint)*(ushort *)(pcVar2 + 2) * 0x10 + 0x10), iVar1 != 0)) {
    DAT_02022c8c = iVar1 + 0x4c;
    DAT_02022c7c = *(undefined4 *)(iVar1 + 0x4c);
    DAT_02022c80 = *(undefined4 *)(iVar1 + 0x50);
  }
  return (ulonglong)in_lr << 0x20;
}

