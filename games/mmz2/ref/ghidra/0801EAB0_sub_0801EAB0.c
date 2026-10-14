// sub_0801EAB0 at 0x0801EAB0 (thumb)

undefined4 sub_0801EAB0(int param_1)

{
  undefined uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 0x195) = 0;
  sub_0801EAF8(param_1);
  uVar1 = *(undefined *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195));
  iVar3 = 0x40;
  do {
    iVar3 = iVar3 + -1;
    *(undefined *)(param_1 + 0x198 + iVar3) = uVar1;
  } while (iVar3 != 0);
  iVar3 = 2;
  puVar2 = (undefined4 *)(param_1 + 0x1e0);
  do {
    puVar2 = puVar2 + -1;
    iVar3 = iVar3 + -1;
    *puVar2 = 0;
  } while (iVar3 != 0);
  return in_lr;
}

