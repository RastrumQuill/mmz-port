// sub_080F66AC at 0x080F66AC (thumb)

undefined4 sub_080F66AC(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    iVar1 = *(int *)(param_1 + 0x54);
    iVar3 = 0x800;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x54);
    iVar3 = -0x800;
  }
  *(int *)(param_1 + 0x54) = iVar1 + iVar3;
  uVar2 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
  if (0x2000 < uVar2) {
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  sub_0801CFF0(param_1);
  return in_lr;
}

