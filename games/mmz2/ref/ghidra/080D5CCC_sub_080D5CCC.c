// sub_080D5CCC at 0x080D5CCC (thumb)

undefined4 sub_080D5CCC(undefined4 param_1,int param_2,int param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined4 in_lr;
  
  puVar1 = *(undefined2 **)(&DAT_0834ac20 + param_2 * 4);
  puVar2 = (undefined2 *)(param_3 + 2);
  iVar3 = 10;
  do {
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar1 = puVar1 + 2;
    puVar2 = puVar2 + 0x20;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return in_lr;
}

