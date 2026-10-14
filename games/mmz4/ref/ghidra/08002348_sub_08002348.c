// sub_08002348 at 0x08002348 (thumb)

undefined4 sub_08002348(void)

{
  undefined2 *puVar1;
  undefined4 in_lr;
  
  puVar1 = &DAT_020008be;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + -1;
  } while (0x200089f < (int)puVar1);
  return in_lr;
}

