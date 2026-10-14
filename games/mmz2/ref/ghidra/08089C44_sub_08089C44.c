// sub_08089C44 at 0x08089C44 (thumb)

undefined4 sub_08089C44(int param_1)

{
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 0x201) == 0x201) {
    *(int *)(*(int *)(param_1 + 0x2c) + 0xbc) =
         *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x2c) + 0x54) -
         *(int *)(*(int *)(param_1 + 0x2c) + 0x54);
  }
  return in_lr;
}

