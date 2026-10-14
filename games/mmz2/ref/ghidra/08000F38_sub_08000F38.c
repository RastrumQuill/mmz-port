// sub_08000F38 at 0x08000F38 (thumb)

undefined4 sub_08000F38(int param_1)

{
  short sVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined4 in_lr;
  
  puVar2 = *(undefined2 **)(param_1 + 0xc);
  puVar3 = *(undefined2 **)(param_1 + 4);
  for (sVar1 = *(short *)(param_1 + 0x20); sVar1 != 0; sVar1 = sVar1 + -1) {
    *puVar3 = *puVar2;
    puVar3 = puVar3 + *(short *)(param_1 + 0x1e);
    puVar2 = puVar2 + *(short *)(param_1 + 0x1c);
  }
  *(undefined2 **)(param_1 + 0xc) = puVar2;
  return in_lr;
}

