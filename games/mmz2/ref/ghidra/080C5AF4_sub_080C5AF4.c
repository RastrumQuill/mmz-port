// sub_080C5AF4 at 0x080C5AF4 (thumb)

undefined4 sub_080C5AF4(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08012580(param_1);
  *(undefined *)(param_1 + 0x25) = 8;
  if (*(char *)(param_1 + 0x11) != '\0') {
    DAT_0202e6aa = 0x310;
    DAT_0202e4aa = 8;
  }
  sub_08002638(&DAT_08433804,(DAT_0202e6aa - 0x300) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_08433810,(DAT_0202e4aa - 6) * 0x20 + 0x200);
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0x10;
  uVar3 = 0;
  do {
    iVar1 = *(int *)(param_1 + 0x60) + 0x10;
    *(int *)(param_1 + 0x60) = iVar1;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - iVar1;
    uVar2 = uVar3 * 0x10000 + 0x10000;
    uVar3 = uVar2 >> 0x10;
  } while ((int)uVar2 >> 0x10 < 0x60);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080C22E8(param_1);
  return in_lr;
}

