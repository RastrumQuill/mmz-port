// sub_080C3D58 at 0x080C3D58 (thumb)

undefined4 sub_080C3D58(int param_1)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined4 in_lr;
  
  uVar2 = *(byte *)(*(int *)(param_1 + 0x10) + 0x183) - 0x10 >> 2;
  if (uVar2 != 0) {
    puVar1 = (undefined2 *)(*(int *)(param_1 + 0x18) + 0xd6);
    do {
      puVar3 = puVar1;
      *puVar3 = 0x206b;
      puVar3[0x20] = 0x208a;
      puVar3[0x40] = 0x20a8;
      uVar2 = uVar2 - 1;
      puVar1 = puVar3 + 1;
    } while (uVar2 != 0);
    puVar3[1] = 0x206c;
    puVar3[0x21] = 0x208c;
    puVar3[0x41] = 0x20ac;
  }
  return in_lr;
}

