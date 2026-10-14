// sub_080C53B4 at 0x080C53B4 (thumb)

undefined4 sub_080C53B4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08012580(param_1);
  sub_080127D0(param_1);
  sub_08002638(&DAT_08432f44,(DAT_0202e5ca - 0x210) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_08432f50,(DAT_0202e3ca - 6) * 0x20 + 0x200);
  uVar4 = 0;
  do {
    iVar1 = sub_08006BB8(param_1);
    if (iVar1 != 0) {
      *(undefined *)(iVar1 + 0x25) = 0x1e;
      *(undefined *)(iVar1 + 9) = 5;
      *(undefined4 *)(iVar1 + 0x14) = 0x80c22d1;
      *(undefined2 *)(iVar1 + 0x20) = 0;
      *(undefined *)(iVar1 + 0x22) = 0;
      *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x10;
      *(undefined *)(iVar1 + 0x1d) = *(undefined *)(iVar1 + 0x1c);
      *(undefined *)(iVar1 + 0x10) = 0x1d;
      *(char *)(iVar1 + 0x11) = (char)uVar4;
      uVar2 = sub_08009774(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(iVar1 + 0x54) = uVar2;
      *(int *)(iVar1 + 0x58) = *(int *)(param_1 + 0x58) + -1;
      *(int *)(iVar1 + 0x28) = param_1;
    }
    uVar3 = uVar4 * 0x10000 + 0x10000;
    uVar4 = uVar3 >> 0x10;
  } while ((int)uVar3 >> 0x10 < 9);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080C22E8(param_1);
  return in_lr;
}

