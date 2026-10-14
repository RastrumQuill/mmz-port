// sub_080D1484 at 0x080D1484 (thumb)

undefined4 sub_080D1484(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  sub_08002638(&DAT_08433804,(DAT_0202e6aa - 0x300) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_08433810,(DAT_0202e4aa - 6) * 0x20 + 0x200);
  sub_08012580(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x8d00);
  sub_080128D4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0x10;
  iVar2 = 0x5f;
  do {
    iVar1 = *(int *)(param_1 + 0x60) + 0x10;
    *(int *)(param_1 + 0x60) = iVar1;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - iVar1;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080D146C(param_1);
  return in_lr;
}

