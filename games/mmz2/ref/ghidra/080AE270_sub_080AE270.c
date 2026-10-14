// sub_080AE270 at 0x080AE270 (thumb)

undefined4 sub_080AE270(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  puVar3 = (undefined4 *)(param_1 + 0x74);
  if (*(char *)(iVar2 + 0xc) != '\0') {
    sub_08012580(param_1);
    *(undefined *)(param_1 + 0x25) = 0x12;
    sub_08012CA4(param_1,0xc);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    iVar1 = 1;
    do {
      *puVar3 = *(undefined4 *)(iVar2 + 0x54);
      puVar3[1] = *(undefined4 *)(iVar2 + 0x58);
      puVar3 = puVar3 + 2;
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
    *(undefined *)(param_1 + 0x12) = 2;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
    sub_080AE2D8(param_1);
  }
  return in_lr;
}

