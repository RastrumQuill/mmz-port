// sub_080456B4 at 0x080456B4 (thumb)

undefined4 sub_080456B4(int param_1)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x24);
  if ((iVar3 != 0) &&
     (*(undefined2 *)(param_1 + 0x8c) = *(undefined2 *)(iVar3 + 0x8c),
     (*(ushort *)(iVar3 + 0x90) & 0x40) != 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082acbf8 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xe) = 1;
    if (((DAT_02022b64 & 1) != 0) && ((DAT_02022b6e & 1) == 0)) {
      DAT_02022b64 = DAT_02022b64 & 0xfffe | 0x20;
    }
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_08045874(param_1);
    return in_lr;
  }
  sub_08046A74(param_1);
  psVar2 = (short *)(param_1 + 0xd0);
  sVar1 = *psVar2;
  if ((*psVar2 != 0) && (*psVar2 = sVar1 + -1, (short)(sVar1 + -1) == 0)) {
    sub_08001EE8((int)*(short *)(param_1 + 0xd2));
    *(short *)(param_1 + 0xd2) = -1;
  }
  if (8 < *(byte *)(param_1 + 0xd)) {
    *(int *)(param_1 + 0x50) =
         *(int *)(param_1 + 0xe4) + (short)(&DAT_080c8e24)[*(byte *)(param_1 + 0xde)] * 0x10;
  }
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082ae89c + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

