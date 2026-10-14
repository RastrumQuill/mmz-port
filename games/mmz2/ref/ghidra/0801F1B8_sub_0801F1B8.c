// sub_0801F1B8 at 0x0801F1B8 (thumb)

undefined4 sub_0801F1B8(int param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = 4;
  puVar1 = (undefined *)(param_1 + param_2 * 4 + 0x6c);
  do {
    puVar1 = puVar1 + -1;
    iVar2 = iVar2 + -1;
    *puVar1 = 0;
  } while (iVar2 != 0);
  return in_lr;
}

