// sub_08099B60 at 0x08099B60 (thumb)

void sub_08099B60(int param_1)

{
  byte bVar1;
  int iVar2;
  
  if ((*(char *)(param_1 + 0x73) == '\x04') &&
     (iVar2 = *(byte *)(param_1 + 0x13) - 1, *(char *)(param_1 + 0x13) = (char)iVar2, iVar2 == 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 8);
  }
  else {
    if (*(char *)(param_1 + 0x72) == '\x01') {
      bVar1 = *(byte *)(param_1 + 10) | 1;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
    }
    *(byte *)(param_1 + 10) = bVar1;
  }
  return;
}

