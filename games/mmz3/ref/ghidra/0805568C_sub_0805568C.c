// sub_0805568C at 0x0805568C (thumb)

undefined4 sub_0805568C(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) != 0) || (*(short *)(param_1 + 0xa4) == 0)) &&
     (uVar2 = DAT_020301a8 & 8, (DAT_020301a8 & 8) == 0)) {
    sub_080040A8(0x5c,0x280);
    sub_080041E4(0x5c);
    sub_08004230(0x5c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0835e0e8 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xe) = 1;
    *(uint *)(param_1 + 0x8c) = uVar2;
    *(uint *)(param_1 + 0x90) = uVar2;
    *(char *)(param_1 + 0x94) = (char)uVar2;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_080557BC(param_1);
    return in_lr;
  }
  sub_08057780(param_1);
  if (*(char *)(param_1 + 0xd) != '!') {
    iVar3 = *(byte *)(param_1 + 0xa4) - 0x10;
    *(undefined *)(param_1 + 0xdd) = (char)iVar3;
    if (iVar3 * 0x1000000 < 0) {
      *(undefined *)(param_1 + 0xdd) = 0;
    }
  }
  if ((((*(uint *)(param_1 + 0x8c) & 1) != 0) &&
      (((*(byte *)(param_1 + 0x97) & 0xf) != 0 || ((*(uint *)(param_1 + 0x8c) & 0xc000) != 0)))) &&
     ((cVar1 = *(char *)(param_1 + 0xd), 1 < (byte)(cVar1 - 5U) &&
      (((cVar1 != '\t' && (cVar1 != '\n')) && (cVar1 != '\v')))))) {
    *(undefined *)(param_1 + 0xd) = 0x21;
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xf) = 0x21;
  }
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08360330 + (uint)*(byte *)(param_1 + 0xd) * 4));
  pbVar4 = (byte *)(param_1 + 0xc5);
  sub_080040A8(*pbVar4 + 0x5c,0x280);
  sub_080041E4(*pbVar4 + 0x5c);
  sub_08004230(*pbVar4 + 0x5c);
  sub_080177F4(param_1);
  return in_lr;
}

