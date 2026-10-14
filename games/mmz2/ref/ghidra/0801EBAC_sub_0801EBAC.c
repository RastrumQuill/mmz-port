// sub_0801EBAC at 0x0801EBAC (thumb)

ulonglong sub_0801EBAC(int param_1,ushort param_2)

{
  uint uVar1;
  ushort *puVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar3 = 8;
  uVar1 = 0;
  puVar2 = (ushort *)(param_1 + 0x10);
  do {
    puVar2 = puVar2 + -1;
    uVar3 = uVar3 - 1;
    if ((*puVar2 & param_2) != 0) {
      uVar1 = uVar1 | 1 << (uVar3 & 0xff);
    }
  } while (uVar3 != 0);
  return CONCAT44(in_lr,uVar1) & 0xffffffff000000ff;
}

