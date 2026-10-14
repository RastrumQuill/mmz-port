// sub_08040334 at 0x08040334 (thumb)

undefined4 sub_08040334(int param_1)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if ((((*(ushort *)(uint *)(param_1 + 0x90) & 0x40) != 0) || (*(short *)(param_1 + 0x8c) == 0)) &&
     (uVar4 = (uint)DAT_02022b64, (DAT_02022b64 & 0x10) == 0)) {
    sub_08001904(0x2d,0x280);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082acbf8 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    uVar2 = (undefined)(uVar4 & 0x10);
    *(undefined *)(param_1 + 0xd) = uVar2;
    *(undefined *)(param_1 + 0xe) = 1;
    *(uint *)(param_1 + 0x90) = uVar4 & 0x10;
    *(undefined *)(param_1 + 0x94) = uVar2;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_0804043C(param_1);
    return in_lr;
  }
  sub_08042208(param_1);
  if (*(char *)(param_1 + 0xd) != '!') {
    iVar3 = *(byte *)(param_1 + 0x8c) - 0x10;
    *(undefined *)(param_1 + 0xe1) = (char)iVar3;
    if (iVar3 * 0x1000000 < 0) {
      *(undefined *)(param_1 + 0xe1) = 0;
    }
  }
  if ((((*(ushort *)(param_1 + 0x90) & 1) != 0) &&
      (((*(byte *)(param_1 + 0x97) & 0xf) != 0 || ((*(ushort *)(param_1 + 0x90) & 0xc00) != 0)))) &&
     ((cVar1 = *(char *)(param_1 + 0xd), 1 < (byte)(cVar1 - 5U) &&
      (((cVar1 != '\t' && (cVar1 != '\n')) && (cVar1 != '\v')))))) {
    *(undefined *)(param_1 + 0xd) = 0x21;
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xf) = 0x21;
  }
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082ae414 + (uint)*(byte *)(param_1 + 0xd) * 4));
  sub_08001904(*(byte *)(param_1 + 0xc9) + 0x2d,0x280);
  return in_lr;
}

