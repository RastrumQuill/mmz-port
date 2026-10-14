// sub_080EB5BC at 0x080EB5BC (thumb)

undefined4 sub_080EB5BC(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(byte *)(param_1 + 0xddb) - 1;
  bVar1 = (byte)iVar2;
  *(byte *)(param_1 + 0xddb) = bVar1;
  if (iVar2 == 0) {
    *(byte *)(param_1 + 3) = bVar1;
    *(undefined2 *)(param_1 + 4) = 0;
  }
  return in_lr;
}

