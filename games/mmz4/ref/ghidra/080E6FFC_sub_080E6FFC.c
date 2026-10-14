// sub_080E6FFC at 0x080E6FFC (thumb)

undefined4 sub_080E6FFC(int param_1)

{
  undefined uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  uVar2 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  if (*(byte *)(param_1 + 0x11) == 0) {
    sub_0801CF00(param_1,0xa001);
    uVar1 = 2;
  }
  else {
    if (*(byte *)(param_1 + 0x11) < 4) {
      sub_0801CF00(param_1,*(undefined2 *)(&DAT_08865b7c + (*(byte *)(param_1 + 0x11) - 1) * 2));
    }
    else {
      sub_0801CF00(param_1,*(undefined2 *)(&DAT_08865b7c + (*(byte *)(param_1 + 0x11) - 4) * 2));
    }
    uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    iVar4 = *(int *)(&DAT_08865b84 + (*(byte *)(param_1 + 0x11) - 1) * 4) *
            ((uVar3 * 0x80 >> 0x17) + 0x80);
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar4 >> 8;
    uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar3 & 0x7fffffff;
    iVar5 = ((uVar3 * 2 >> 0x11 & 0xff) + 0x400) * -0x100;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    *(int *)(param_1 + 0x60) = iVar5 >> 8;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      iVar4 = (iVar4 >> 8) * -0x100;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xff;
      }
      *(int *)(param_1 + 0x5c) = iVar4 >> 8;
    }
    uVar1 = 1;
  }
  *(undefined *)(param_1 + 0xd) = uVar1;
  return in_lr;
}

