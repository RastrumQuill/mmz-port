// sub_08002D0C at 0x08002D0C (thumb)

undefined4 sub_08002D0C(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 in_lr;
  
  iVar1 = 0;
  puVar2 = &DAT_02000e40;
  do {
    if ((&DAT_02000e40)[iVar1] != '\0') {
      *(undefined2 *)(puVar2 + 0x20) = 1;
    }
    puVar2 = puVar2 + 0x14;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  return in_lr;
}

