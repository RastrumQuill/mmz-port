// sub_08001294 at 0x08001294 (thumb)

undefined4 sub_08001294(void)

{
  int iVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  pcVar2 = &DAT_03002a68;
  iVar1 = 0;
  do {
    if (*pcVar2 != '\x01') {
      sub_08001390(iVar1);
    }
    iVar1 = iVar1 + 1;
    pcVar2 = pcVar2 + 0x18;
  } while (iVar1 < 3);
  return in_lr;
}

