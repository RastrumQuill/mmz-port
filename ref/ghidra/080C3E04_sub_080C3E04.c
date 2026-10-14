// sub_080C3E04 at 0x080C3E04 (thumb)

void sub_080C3E04(int param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  
  puVar2 = (undefined2 *)(*(int *)(param_1 + 0x18) + 0xa8);
  puVar1 = (undefined2 *)(&DAT_082cbfee + (uint)*(byte *)(*(int *)(param_1 + 0x10) + 0x179) * 0x12);
  iVar3 = 9;
  do {
    *puVar2 = *puVar1;
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}

