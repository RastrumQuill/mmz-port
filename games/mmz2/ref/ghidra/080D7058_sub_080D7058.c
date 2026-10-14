// sub_080D7058 at 0x080D7058 (thumb)

undefined4 sub_080D7058(int param_1)

{
  undefined uVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  sub_080378B4(*(undefined4 *)(param_1 + 0x28),param_1 + 0xbc,0);
  if (*(byte *)(param_1 + 0xc) < 2) {
    if (*(byte *)(param_1 + 0xc) == 1) {
      sub_080EF118(param_1,*(undefined4 *)(&DAT_0834b3ec + (uint)*(byte *)(param_1 + 0xd) * 4));
      uVar3 = (uint)*(byte *)(param_1 + 0x12);
      if (*(byte *)(param_1 + 0xd) < 5) {
        uVar3 = uVar3 + 1 + ((int)(uVar3 + 1) >> 4) * -0x10;
        *(char *)(param_1 + 0x12) = (char)uVar3;
      }
      iVar2 = *(int *)(param_1 + 0xb4) + (short)(&DAT_080ef450)[uVar3 * 0x10 & 0xff] * 0x14;
      *(int *)(param_1 + 0x54) = iVar2;
      *(int *)(param_1 + 0x54) = iVar2 + *(int *)(param_1 + 0xbc);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + *(int *)(param_1 + 0xc0);
      iVar2 = 2;
      if (0x7f < (uVar3 * 0x10 + 0x40 & 0xff)) {
        iVar2 = 3;
      }
      *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | (byte)(iVar2 << 2);
    }
    else {
      iVar2 = 2;
    }
    if (*(byte *)(param_1 + 0xd) < 5) {
      uVar1 = sub_080BED50(param_1,*(undefined *)(param_1 + 0x13),iVar2);
      *(undefined *)(param_1 + 0x13) = uVar1;
    }
    sub_08012A14(param_1);
  }
  return in_lr;
}

