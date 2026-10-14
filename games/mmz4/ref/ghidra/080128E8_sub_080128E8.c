// sub_080128E8 at 0x080128E8 (thumb)

undefined4 sub_080128E8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    DAT_0202ea58 = 0x1e0000;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

