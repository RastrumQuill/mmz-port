// sub_080E4670 at 0x080E4670 (thumb)

undefined4 sub_080E4670(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    iVar2 = param_1 + 0x54;
    sub_080E4558(iVar2,1,*(byte *)(param_1 + 10) >> 4 & 1);
    sub_080E4558(iVar2,2,*(byte *)(param_1 + 10) >> 4 & 1);
    sub_080E4558(iVar2,3,*(byte *)(param_1 + 10) >> 4 & 1);
  }
  if (*(byte *)(param_1 + 0x11) < 2) {
    *(undefined *)(param_1 + 0x25) = 0x18;
  }
  *(undefined4 *)(param_1 + 0x5c) =
       *(undefined4 *)(&DAT_08865870 + (uint)*(byte *)(param_1 + 0x11) * 4);
  *(undefined4 *)(param_1 + 0x60) = 0xffffff00;
  if (*(byte *)(param_1 + 0x11) < 2) {
    *(undefined4 *)(param_1 + 0x60) = 0xfffffe00;
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar2 = *(int *)(param_1 + 0x5c) * -0x100;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar2 >> 8;
  }
  sub_0801CF00(param_1,*(undefined2 *)(&DAT_08865868 + (uint)*(byte *)(param_1 + 0x11) * 2));
  uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar1 & 0x7fffffff;
  *(byte *)(param_1 + 0x12) = ((byte)(uVar1 * 2 >> 0x11) & 0x1f) + 0x14;
  *(undefined *)(param_1 + 0xd) = 0;
  return in_lr;
}

