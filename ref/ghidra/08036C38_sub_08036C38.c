// sub_08036C38 at 0x08036C38 (thumb)

undefined4 sub_08036C38(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if ((((*(ushort *)(param_1 + 0x90) & 0x40) == 0) && (*(short *)(param_1 + 0x8c) != 0)) ||
     (uVar2 = (uint)DAT_02022b64, (DAT_02022b64 & 0x10) != 0)) {
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082ad8c8 + (uint)*(byte *)(param_1 + 0x10) * 4));
    sub_08038AA0(param_1);
  }
  else {
    uVar1 = *(uint *)(param_1 + 0xd4);
    if (uVar1 != 0) {
      *(undefined *)(uVar1 + 0xd) = 2;
      *(uint *)(param_1 + 0xd4) = uVar2 & 0x10;
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082acbf8 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    if (DAT_02022b60 == 0x10) {
      *(undefined *)(param_1 + 0xd) = 1;
    }
    else {
      *(char *)(param_1 + 0xd) = (char)(uVar2 & 0x10);
    }
    sub_08038678(param_1);
  }
  return in_lr;
}

