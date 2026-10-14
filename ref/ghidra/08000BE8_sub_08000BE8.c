// sub_08000BE8 at 0x08000BE8 (thumb)

undefined4 sub_08000BE8(int param_1)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined4 in_lr;
  
  puVar4 = *(undefined2 **)(param_1 + 0xc);
  puVar5 = *(undefined2 **)(param_1 + 4);
  bVar1 = *(byte *)(param_1 + 0xb);
  bVar2 = *(byte *)(param_1 + 10);
  sVar3 = *(short *)(param_1 + 8);
  if (sVar3 != 0) {
    do {
      *puVar5 = *puVar4;
      puVar5 = (undefined2 *)((int)puVar5 + ((int)((uint)bVar2 << 0x18) >> 0x17));
      puVar4 = (undefined2 *)((int)puVar4 + ((int)((uint)bVar1 << 0x18) >> 0x17));
      sVar3 = sVar3 + -1;
    } while (sVar3 != 0);
  }
  *(undefined2 **)(param_1 + 0xc) = puVar4;
  return in_lr;
}

