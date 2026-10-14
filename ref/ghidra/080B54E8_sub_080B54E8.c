// sub_080B54E8 at 0x080B54E8 (thumb)

undefined4 sub_080B54E8(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = 5;
    do {
      iVar1 = iVar2 + -1;
      if (*(char *)(param_1 + 9) == (&UNK_082b789b)[iVar2]) {
        return 1;
      }
      iVar2 = iVar1;
    } while (iVar1 != 0);
  }
  return 0;
}

