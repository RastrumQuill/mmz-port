// sub_0801B374 at 0x0801B374 (thumb)

undefined * sub_0801B374(int param_1)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)(param_1 + 0x208);
  if (*(byte *)(param_1 + 0x218) != 2) {
    puVar1 = &UNK_082a973c + (uint)*(byte *)(param_1 + 0x218) * 0x10;
  }
  return puVar1;
}

