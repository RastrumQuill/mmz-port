// sub_080DC06C at 0x080DC06C (thumb)

undefined4 sub_080DC06C(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  sub_080128D4();
  uVar1 = sub_080EF330(*(undefined *)(iVar2 + 4),5);
  *(uint *)(param_1 + 0x54) = (((uVar1 & 0xff) * 3 + 3) * 8 + 4) * 0x100;
  if (*(byte *)(iVar2 + 4) < 10) {
    uVar1 = sub_080EF2B8(*(byte *)(iVar2 + 4),5);
    iVar2 = (uVar1 & 0xff) * 3 + 4;
  }
  else {
    uVar1 = sub_080EF2B8(*(undefined *)(iVar2 + 4),5);
    iVar2 = (uVar1 & 0xff) * 3 + 6;
  }
  *(int *)(param_1 + 0x58) = (iVar2 * 8 + 4) * 0x100;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x10000;
  return in_lr;
}

