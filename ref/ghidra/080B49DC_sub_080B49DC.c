// sub_080B49DC at 0x080B49DC (thumb)

undefined4 sub_080B49DC(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined4 in_lr;
  
  puVar2 = *(undefined2 **)(&DAT_082b7ef4 + ((param_2 << 0x18) >> 0x16));
  iVar1 = 0x10;
  puVar3 = (undefined2 *)(param_3 + 0x86);
  do {
    iVar4 = 10;
    puVar5 = puVar3 + 0x20;
    iVar1 = iVar1 + -1;
    do {
      *puVar3 = *puVar2;
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    puVar3 = puVar5;
  } while (iVar1 != 0);
  return in_lr;
}

