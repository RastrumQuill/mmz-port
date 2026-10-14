// sub_0803115C at 0x0803115C (thumb)

undefined4 sub_0803115C(int param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = 8;
  puVar1 = (undefined2 *)&UNK_083347b0;
  puVar2 = (undefined2 *)(param_1 + 0x14);
  do {
    puVar1 = puVar1 + -1;
    puVar2 = puVar2 + -1;
    iVar3 = iVar3 + -1;
    *puVar2 = *puVar1;
  } while (iVar3 != 0);
  *(undefined *)(param_1 + 0x14) = 0;
  *(undefined *)(param_1 + 0x15) = 0;
  return in_lr;
}

