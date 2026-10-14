// sub_08023A18 at 0x08023A18 (thumb)

undefined4 sub_08023A18(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082a9d8c + (uint)*(byte *)(param_1 + 0xbf) * 4));
  if (*(char *)(param_1 + 0xc0) == '\x04') {
    cVar1 = *(char *)(param_1 + 0x121);
    if (cVar1 != '\0') {
      *(char *)(param_1 + 0x121) = cVar1 + -1;
    }
  }
  return in_lr;
}

