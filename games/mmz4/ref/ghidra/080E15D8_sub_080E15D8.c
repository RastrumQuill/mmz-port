// sub_080E15D8 at 0x080E15D8 (thumb)

undefined4 sub_080E15D8(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  uVar2 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar2 & 0x7fffffff;
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x54) + *(int *)(&DAT_08865500 + (uint)*(byte *)(param_1 + 0x11) * 8);
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x58) + *(int *)(&DAT_08865504 + (uint)*(byte *)(param_1 + 0x11) * 8);
  if (*(byte *)(param_1 + 0x11) < 2) {
    *(undefined4 *)(param_1 + 0x5c) =
         *(undefined4 *)(&DAT_08865530 + (uint)*(byte *)(param_1 + 0x11) * 8);
    iVar3 = *(int *)(&DAT_08865534 + (uint)*(byte *)(param_1 + 0x11) * 8);
  }
  else {
    iVar4 = (uint)*(byte *)(param_1 + 0x11) * 8;
    iVar3 = ((uVar1 * 2 >> 0x11 & 0xff) + 0x100) * *(int *)(&DAT_08865530 + iVar4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar3 >> 8;
    iVar3 = ((uVar2 * 0x80 >> 0x17) + 0x180) * *(int *)(&DAT_08865534 + iVar4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    iVar3 = iVar3 >> 8;
  }
  *(int *)(param_1 + 0x60) = iVar3;
  if ((*(char *)(param_1 + 0x11) == '\x01') &&
     (*(int *)(param_1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54))) {
    iVar3 = *(int *)(param_1 + 0x5c) * -0x100;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar3 >> 8;
  }
  return in_lr;
}

