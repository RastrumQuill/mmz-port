// sub_0801CA94 at 0x0801CA94 (thumb)

undefined4 sub_0801CA94(int param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = 8;
  puVar1 = (undefined2 *)&UNK_082a974c;
  puVar2 = (undefined2 *)(param_1 + 0xa0);
  do {
    puVar1 = puVar1 + -1;
    puVar2 = puVar2 + -1;
    iVar3 = iVar3 + -1;
    *puVar2 = *puVar1;
  } while (iVar3 != 0);
  *(undefined *)(param_1 + 0xa0) = 0;
  *(undefined *)(param_1 + 0xa1) = 0;
  return in_lr;
}

