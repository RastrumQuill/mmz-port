// sub_0802B8AC at 0x0802B8AC (thumb)

undefined4 sub_0802B8AC(int param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x10) == '\0') &&
     ((((*(ushort *)(param_1 + 0x90) & 0x40) != 0 || (*(short *)(param_1 + 0x8c) == 0)) &&
      ((DAT_02022b64 & 0x10) == 0)))) {
    if (-1 < *(short *)(param_1 + 0xd8)) {
      sub_08001EE8();
    }
    if (-1 < *(short *)(param_1 + 0xda)) {
      sub_08001EE8();
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082acbf8 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    uVar1 = *(ushort *)(param_1 + 0x90) & 0x1000;
    if (uVar1 != 0) {
      uVar1 = 1;
    }
    *(char *)(param_1 + 0xd) = (char)uVar1;
    sub_0802B994(param_1);
  }
  else {
    if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
      if (*(int *)(param_1 + 0xdc) == 0) {
        iVar2 = sub_08015A64(3,param_1,&DAT_082acf98);
        *(int *)(param_1 + 0xdc) = iVar2;
        if (iVar2 != 0) {
          *(undefined *)(param_1 + 0xd) = 0x11;
          *(undefined *)(param_1 + 0xe) = 0;
        }
      }
    }
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082acef4 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080C8A98(param_1,*(undefined4 *)(&UNK_082acf40 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  return in_lr;
}

