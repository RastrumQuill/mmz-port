// sub_080281F0 at 0x080281F0 (thumb)

longlong sub_080281F0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint in_lr;
  
  if ((uint)*(byte *)(param_2 + 0xd) != *(byte *)(param_1 + 0x10) - 0x20) {
    iVar2 = *(byte *)(param_2 + 0xd) + 0x20;
    *(char *)(param_1 + 0x10) = (char)iVar2;
    cVar1 = *(char *)(param_1 + 0x71);
    iVar2 = iVar2 * 2;
    if (*(char *)(param_1 + 0xd) == '\x01') {
      iVar2 = iVar2 + 1;
    }
    sub_08025C94(param_1,*(undefined2 *)(&DAT_082ab348 + iVar2 * 2),(short)cVar1,
                 (short)*(char *)(param_1 + 0x72));
    sub_08028330(param_1,cVar1);
  }
  return (ulonglong)in_lr << 0x20;
}

