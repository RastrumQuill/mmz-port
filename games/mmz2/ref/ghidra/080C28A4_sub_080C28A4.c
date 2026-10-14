// sub_080C28A4 at 0x080C28A4 (thumb)

undefined4 sub_080C28A4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08012580(param_1);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x54);
  sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  uVar1 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  *(undefined *)(param_1 + 0x12) = 0;
  if (*(char *)(param_1 + 0x11) == '\0') {
    sub_08002638(&DAT_084331ec,(DAT_0202e60e - 0x210) * 0x20 + 0x10000);
    sub_08002AEC(&DAT_084331f8,(DAT_0202e40e - 4) * 0x20 + 0x200);
    sub_08002638(&DAT_08433200,(DAT_0202e610 - 0x200) * 0x20 + 0x10000);
    sub_08002AEC(&DAT_0843320c,(DAT_0202e410 - 5) * 0x20 + 0x200);
    *(int *)(param_1 + 0x28) = param_1;
    iVar2 = sub_08006BF0(param_1);
    if (iVar2 != 0) {
      *(undefined *)(iVar2 + 0x25) = 0x1e;
      *(undefined *)(iVar2 + 9) = 5;
      *(undefined4 *)(iVar2 + 0x14) = 0x80c22d1;
      *(undefined2 *)(iVar2 + 0x20) = 0;
      *(undefined *)(iVar2 + 0x22) = 0;
      *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
      *(undefined *)(iVar2 + 0x1d) = *(undefined *)(iVar2 + 0x1c);
      *(undefined *)(iVar2 + 0x10) = *(undefined *)(param_1 + 0x10);
      *(undefined *)(iVar2 + 0x11) = 1;
      *(undefined4 *)(iVar2 + 0x54) = *(undefined4 *)(param_1 + 0x54);
      *(undefined4 *)(iVar2 + 0x58) = *(undefined4 *)(param_1 + 0x58);
      *(int *)(iVar2 + 0x28) = param_1;
    }
    iVar2 = sub_08006BF0(iVar2);
    if (iVar2 != 0) {
      *(undefined *)(iVar2 + 0x25) = 0x1e;
      *(undefined *)(iVar2 + 9) = 5;
      *(undefined4 *)(iVar2 + 0x14) = 0x80c22d1;
      *(undefined2 *)(iVar2 + 0x20) = 0;
      *(undefined *)(iVar2 + 0x22) = 0;
      *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
      *(undefined *)(iVar2 + 0x1d) = *(undefined *)(iVar2 + 0x1c);
      *(undefined *)(iVar2 + 0x10) = *(undefined *)(param_1 + 0x10);
      *(undefined *)(iVar2 + 0x11) = 2;
      *(undefined4 *)(iVar2 + 0x54) = *(undefined4 *)(param_1 + 0x54);
      *(undefined4 *)(iVar2 + 0x58) = *(undefined4 *)(param_1 + 0x58);
      *(int *)(iVar2 + 0x28) = param_1;
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080C22E8(param_1);
  return in_lr;
}

