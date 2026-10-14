// sub_0803712C at 0x0803712C (thumb)

undefined8 sub_0803712C(int param_1)

{
  undefined *puVar1;
  undefined4 in_lr;
  
  puVar1 = (undefined *)(param_1 + 0x1e4);
  if (*(byte *)(param_1 + 500) != 2) {
    puVar1 = &UNK_083347a0 + (uint)*(byte *)(param_1 + 500) * 0x10;
  }
  return CONCAT44(in_lr,puVar1);
}

