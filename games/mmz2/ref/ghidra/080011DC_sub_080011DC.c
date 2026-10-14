// sub_080011DC at 0x080011DC (thumb)

undefined4 sub_080011DC(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = 0;
  puVar1 = (undefined2 *)(param_1 + 0x10);
  do {
    *(undefined *)(param_1 + 0xc + iVar2) = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return in_lr;
}

