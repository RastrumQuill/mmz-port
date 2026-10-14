// sub_080DA4F8 at 0x080DA4F8 (thumb)

undefined4 sub_080DA4F8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (((*(byte *)(iVar2 + 0xc) < 2) && (*(char *)(iVar2 + 0xd) == '\x06')) &&
     ((byte)(*(char *)(iVar2 + 0xe) - 4U) < 2)) {
    sub_0801CFF0(param_1);
    uVar1 = *(undefined4 *)(iVar2 + 0x58);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar2 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = uVar1;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
    sub_080DA548(param_1);
  }
  return in_lr;
}

