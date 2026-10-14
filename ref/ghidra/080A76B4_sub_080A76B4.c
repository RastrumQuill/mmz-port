// sub_080A76B4 at 0x080A76B4 (thumb)

undefined4 sub_080A76B4(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x24);
  cVar1 = '\x03';
  if (iVar3 != 0) {
    do {
      if (*(byte *)(iVar3 + 0xc) < 2) {
        iVar3 = *(int *)(iVar3 + 0x24);
      }
      else {
        *(char *)(param_1 + 200) = *(char *)(param_1 + 200) + -1;
        iVar2 = *(int *)(iVar3 + 0x20);
        *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(iVar3 + 0x24);
        iVar3 = *(int *)(iVar3 + 0x24);
        *(int *)(iVar3 + 0x20) = iVar2;
      }
      cVar1 = cVar1 + -1;
    } while ((iVar3 != 0) && (cVar1 != '\0'));
  }
  return in_lr;
}

