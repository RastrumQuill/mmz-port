// sub_080B0D60 at 0x080B0D60 (thumb)

undefined4 sub_080B0D60(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 4) == 0) {
    iVar2 = *(int *)(param_1 + 0x2c);
    *(undefined *)(iVar2 + 0x12) = 0x3c;
    *(undefined *)(iVar2 + 0xc2) = 1;
    bVar1 = *(byte *)(param_1 + 0x23) & 0xf0;
    if (((bVar1 == 0x10) || (bVar1 == 0x20)) || (bVar1 == 0x30)) {
      *(undefined *)(iVar2 + 0xc2) = 0xf;
    }
    if (*(int *)(iVar2 + 0x2c) != 0) {
      *(undefined *)(*(int *)(iVar2 + 0x2c) + 0x12) = 0x3c;
      *(undefined *)(*(int *)(iVar2 + 0x2c) + 0xc2) = *(undefined *)(iVar2 + 0xc2);
    }
  }
  return in_lr;
}

