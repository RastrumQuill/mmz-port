// sub_08029184 at 0x08029184 (thumb)

undefined4 sub_08029184(int param_1)

{
  ushort uVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = 0x3f;
  puVar2 = (undefined2 *)(param_1 + 0x210);
  do {
    puVar2[1] = *puVar2;
    uVar1 = DAT_020301a4;
    puVar2 = puVar2 + -1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(ushort *)(param_1 + 0x194) = DAT_020301a4 & 0xfff;
  *(ushort *)(param_1 + 0x214) = (*(ushort *)(param_1 + 0x216) ^ uVar1) & uVar1;
  *(ushort *)(param_1 + 0x216) = uVar1;
  return in_lr;
}

