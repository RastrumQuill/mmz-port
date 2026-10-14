// sub_08023C08 at 0x08023C08 (thumb)

undefined4 sub_08023C08(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  pcVar2 = (char *)(param_1 + 0xc0);
  if (*pcVar2 == '\x04') {
    cVar1 = sub_08018254();
    if (((cVar1 == '\0') && (*(char *)(param_1 + 0x71) == '\x05')) &&
       (*(char *)(param_1 + 0x72) < '\x03')) {
      *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
      *(undefined *)(param_1 + 0xbf) = 3;
      *(char *)(param_1 + 0xc3) = *pcVar2;
      *pcVar2 = '\x04';
    }
  }
  else if (((int)*(char *)(param_1 + 0x71) ==
            (uint)(byte)(&DAT_082a9936)[*(byte *)(param_1 + 0x11f)]) &&
          (*(char *)(param_1 + 0x72) < '\x02')) {
    *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
    *(undefined *)(param_1 + 0xbf) = 3;
    *(char *)(param_1 + 0xc3) = *pcVar2;
    *pcVar2 = *pcVar2;
    sub_08023CA8(param_1);
  }
  return in_lr;
}

