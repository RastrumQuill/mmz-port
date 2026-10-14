// sub_08029168 at 0x08029168 (thumb)

undefined4 sub_08029168(int param_1)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = 0;
  puVar1 = (undefined2 *)(param_1 + 0x194);
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x40);
  return in_lr;
}

