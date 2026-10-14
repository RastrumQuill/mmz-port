// sub_08040B18 at 0x08040B18 (thumb)

undefined4 sub_08040B18(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  pcVar2 = (char *)(iVar1 + 0xbd);
  if ((*pcVar2 == '\0') && ((*(uint *)(param_1 + 0x14) & 4) != 0)) {
    sub_080E82F0(iVar1 + 0x54,*(undefined *)(*(int *)(iVar1 + 0x28) + 0x14f),
                 *(byte *)(iVar1 + 10) >> 4 & 1,*(undefined *)(iVar1 + 0xe));
    if (DAT_0202e900 != -1) {
      DAT_0202e900 = DAT_0202e900 + 1;
    }
    *pcVar2 = *pcVar2 + '\x01';
  }
  return in_lr;
}

