// sub_080EB59C at 0x080EB59C (thumb)

undefined4 sub_080EB59C(int param_1)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 in_lr;
  
  pcVar4 = (char *)(param_1 + 0xbf);
  if ((*pcVar4 == '\0') &&
     (sVar1 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x3000),
     sVar1 == 0)) {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined **)(param_1 + 0x30) = &DAT_08866210;
    *(undefined2 *)(param_1 + 0x26) = 0xf;
    *pcVar4 = *pcVar4 + '\x01';
  }
  if (((*(uint *)(param_1 + 0x8c) & 0x200) == 0) &&
     (iVar3 = *(int *)(param_1 + 0xc0) + -1, *(int *)(param_1 + 0xc0) = iVar3, iVar3 != 0)) {
    sub_0801CFF0(param_1);
    iVar3 = *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
    if (-0x200 < iVar3) {
      *(int *)(param_1 + 0x60) = iVar3 + -4;
    }
    uVar2 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x1200);
    if ((uVar2 & 0xf) == 0xf) {
      uVar2 = 0;
    }
    if ((uVar2 & 0x8000) != 0) {
      uVar2 = 0;
    }
    if (uVar2 == 0) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080EB680(param_1);
    return in_lr;
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  sub_080EB680(param_1);
  return in_lr;
}

