// sub_080CE0B4 at 0x080CE0B4 (thumb)

undefined4 sub_080CE0B4(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836caa0 + (uint)*(byte *)(param_1 + 0xd) * 4));
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836cab0 + (uint)*(byte *)(param_1 + 0xd) * 4));
  if (*(byte *)(iVar2 + 0xc) < 2) {
    if (*(int *)(DAT_0202f5c0 + 0x58) < *(int *)(param_1 + 0x58) + 0x700) {
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
      *(undefined **)(param_1 + 0x30) = &DAT_0836cadc;
      *(undefined2 *)(param_1 + 0x26) = 0xa001;
    }
    else {
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
    }
  }
  else {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    uVar1 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
    if (0x4000 < uVar1) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    }
  }
  return in_lr;
}

