// sub_0803CCB8 at 0x0803CCB8 (thumb)

undefined4 sub_0803CCB8(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  sub_080177F4();
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar2;
    iVar3 = sub_0800A104(iVar2,*(undefined4 *)(param_1 + 0x58));
    iVar2 = iVar3 - *(int *)(param_1 + 0x58);
    if (iVar2 < 0) {
      iVar2 = *(int *)(param_1 + 0x58) - iVar3;
    }
    if (iVar2 < 0xf01) {
      *(int *)(param_1 + 0x58) = iVar3;
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      if (cVar1 != -1) {
        uVar4 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
        if (uVar4 < 0x3001) {
          return in_lr;
        }
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((&DAT_0835b5d0)[*(byte *)(param_1 + 9)] + 8);
        sub_0803CD60(param_1);
        return in_lr;
      }
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0835b5d0)[*(byte *)(param_1 + 9)] + 8);
  sub_0803CD60(param_1);
  return in_lr;
}

