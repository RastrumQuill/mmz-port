// sub_080DA3F0 at 0x080DA3F0 (thumb)

undefined4 sub_080DA3F0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  int local_28;
  int local_24;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (*(byte *)(iVar3 + 0xc) < 2) {
    uVar4 = *(byte *)(param_1 + 0x12) + 1;
    *(char *)(param_1 + 0x12) = (char)uVar4;
    if ((*(byte *)(iVar3 + 0xb6) & 2) != 0) {
      if ((*(int *)(iVar3 + 0x58) + 0xa800 < *(int *)(iVar3 + 0xbc) + 0x13fff) &&
         (*(int *)(iVar3 + 0xb8) + -0x1000 <= *(int *)(iVar3 + 0x58))) {
        iVar2 = (uint)*(byte *)(param_1 + 0x11) * 2;
        local_28 = *(int *)(iVar3 + 0x54) + (iVar2 + -1) * 0x3400;
        *(int *)(param_1 + 0x54) = local_28;
        if ((uVar4 & 7) == 0) {
          local_24 = sub_08008534(local_28,*(undefined4 *)(param_1 + 0x58));
          iVar1 = (*(int *)(iVar3 + 0xbc) + 0x13fff) - (*(int *)(iVar3 + 0xb8) + -0x1000);
          if (iVar1 < 1) {
            iVar1 = 1;
          }
          iVar3 = local_24 - *(int *)(iVar3 + 0x58);
          if (iVar3 < 0) {
            iVar3 = 0;
          }
          else if (iVar1 < iVar3) {
            iVar3 = iVar1;
          }
          iVar3 = FUN_081288bc(iVar3 << 9);
          sub_080DA5A0(&local_28,(iVar2 + -1) * (0x300 - iVar3),
                       uVar4 + (uVar4 * 0x1000000 >> 0x1b & 1) & 0xff);
        }
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
    sub_080DA548(param_1);
  }
  return in_lr;
}

