// sub_080DEBA4 at 0x080DEBA4 (thumb)

undefined4 sub_080DEBA4(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if ((((*(uint *)(iVar4 + 0x8c) & 0x200) == 0) && (*(short *)(iVar4 + 0xa4) != 0)) &&
     (*(byte *)(iVar4 + 0xc) < 3)) {
    if (*(int *)(iVar4 + 0xec) == 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      if (*(int *)(iVar4 + 0xec) < 1) {
        if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != -0x3aff) {
          sub_0801CF00(param_1);
        }
      }
      else if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != -0x3afe) {
        sub_0801CF00(param_1);
      }
      sub_0801CFF0(param_1);
      bVar1 = *(byte *)(iVar4 + 10) >> 4;
      uVar3 = bVar1 & 1;
      if ((bVar1 & 1) == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar1;
      *(char *)(param_1 + 0x4c) = (char)uVar3;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
      if ((*(byte *)(iVar4 + 10) & 0x10) == 0) {
        iVar2 = *(int *)(iVar4 + 0x54) +
                (int)*(short *)(&DAT_08865234 + (uint)*(byte *)(iVar4 + 0x174) * 2);
      }
      else {
        iVar2 = *(int *)(iVar4 + 0x54) -
                (int)*(short *)(&DAT_08865234 + (uint)*(byte *)(iVar4 + 0x174) * 2);
      }
      *(int *)(param_1 + 0x54) = iVar2;
      *(int *)(param_1 + 0x58) =
           *(int *)(iVar4 + 0x58) +
           (int)*(short *)(&DAT_08865240 + (uint)*(byte *)(iVar4 + 0x174) * 2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
    sub_080DE904(param_1);
  }
  return in_lr;
}

