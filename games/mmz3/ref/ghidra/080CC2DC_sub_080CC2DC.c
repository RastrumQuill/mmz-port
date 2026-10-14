// sub_080CC2DC at 0x080CC2DC (thumb)

undefined4 sub_080CC2DC(int param_1)

{
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 8) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0xbc) =
         *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xc) + 0x2c) + 0x58);
  }
  return in_lr;
}

