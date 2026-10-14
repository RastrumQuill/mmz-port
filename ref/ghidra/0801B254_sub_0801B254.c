// sub_0801B254 at 0x0801B254 (thumb)

undefined4 sub_0801B254(int param_1)

{
  undefined uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 0x12e) = 0;
  sub_0801B29C(param_1);
  uVar1 = *(undefined *)((uint)*(byte *)(param_1 + 0x12e) + param_1 + 0x130);
  iVar3 = 0x40;
  do {
    iVar3 = iVar3 + -1;
    *(undefined *)(param_1 + 0x130 + iVar3) = uVar1;
  } while (iVar3 != 0);
  iVar3 = 2;
  puVar2 = (undefined4 *)(param_1 + 0x178);
  do {
    puVar2 = puVar2 + -1;
    iVar3 = iVar3 + -1;
    *puVar2 = 0;
  } while (iVar3 != 0);
  return in_lr;
}

