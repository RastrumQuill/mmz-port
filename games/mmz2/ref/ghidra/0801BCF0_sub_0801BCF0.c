// sub_0801BCF0 at 0x0801BCF0 (thumb)

longlong sub_0801BCF0(int param_1)

{
  int iVar1;
  char *pcVar2;
  uint in_lr;
  
  pcVar2 = *(char **)(*(int *)(param_1 + 0xc) + 4);
  if (DAT_0202ed30 == '\0') {
    sub_08008188();
  }
  sub_08014FD8(&DAT_0202ed18,pcVar2);
  if (((*pcVar2 != '\x01') &&
      (iVar1 = *(int *)(param_1 + (uint)(byte)pcVar2[2] * 0x10 + 0x10), iVar1 != 0)) &&
     (DAT_0202ed60 = iVar1 + 0x54, (pcVar2[1] & 8U) != 0)) {
    DAT_0202ed48 = *(undefined4 *)(iVar1 + 0x54);
    DAT_0202ed4c = *(undefined4 *)(iVar1 + 0x58);
  }
  return (ulonglong)in_lr << 0x20;
}

