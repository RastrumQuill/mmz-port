// sub_080225A0 at 0x080225A0 (thumb)

longlong sub_080225A0(int param_1)

{
  int iVar1;
  char *pcVar2;
  uint in_lr;
  
  pcVar2 = *(char **)(*(int *)(param_1 + 0xc) + 4);
  if (DAT_020302a0 == '\0') {
    sub_08008E20();
  }
  sub_0801A7F4(&DAT_02030288,pcVar2);
  if (((*pcVar2 != '\x01') &&
      (iVar1 = *(int *)(param_1 + (uint)(byte)pcVar2[2] * 0x10 + 0x10), iVar1 != 0)) &&
     (DAT_020302d0 = iVar1 + 0x54, (pcVar2[1] & 8U) != 0)) {
    DAT_020302b8 = *(undefined4 *)(iVar1 + 0x54);
    DAT_020302bc = *(undefined4 *)(iVar1 + 0x58);
  }
  return (ulonglong)in_lr << 0x20;
}

