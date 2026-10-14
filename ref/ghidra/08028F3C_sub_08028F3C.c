// sub_08028F3C at 0x08028F3C (thumb)

undefined4 sub_08028F3C(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x24);
  if ((iVar2 != 0) && (*(char *)(iVar2 + 9) == '\x03')) {
    *(undefined4 *)(iVar2 + 0xc) = 2;
    *(undefined4 *)(iVar2 + 0x14) = 0x8028d59;
    *(undefined4 *)(iVar2 + 0x90) = 0;
    *(undefined *)(iVar2 + 0x94) = 0;
    *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfa;
  }
  iVar1 = *(int *)(param_1 + 0xe8);
  if (((iVar2 != iVar1) && (iVar1 != 0)) && (*(char *)(iVar1 + 9) == '\x03')) {
    *(undefined4 *)(iVar1 + 0xc) = 2;
    *(undefined4 *)(iVar1 + 0x14) = 0x8028d59;
    *(undefined4 *)(iVar1 + 0x90) = 0;
    *(undefined *)(iVar1 + 0x94) = 0;
    *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfa;
  }
  return in_lr;
}

