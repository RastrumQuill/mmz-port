// sub_0806C490 at 0x0806C490 (thumb)

undefined4 sub_0806C490(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(ushort *)(param_1 + 0x90) & 0x40) == 0) {
    if (*(char *)(param_1 + 0xc5) == '\x01') {
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 1;
    }
    if (((*(ushort *)(param_1 + 0x90) & 1) != 0) && (*(int *)(param_1 + 0xc0) == 0)) {
      iVar1 = sub_08015A64(0,param_1,&DAT_082b0ec8);
      *(int *)(param_1 + 0xc0) = iVar1;
      if (iVar1 != 0) {
        sub_0800561C(param_1 + 0x74,&DAT_082b0e90);
        *(undefined *)(param_1 + 0xd) = 2;
        *(undefined *)(param_1 + 0xe) = 1;
      }
    }
    iVar1 = sub_08048BE8(param_1);
    if (iVar1 != 0) {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 1;
      if ((*(int *)(param_1 + 0xc0) != 0) && (iVar1 = sub_08015D94(), iVar1 != 0)) {
        *(int *)(param_1 + 0xc0) = 0;
        sub_0800561C(param_1 + 0x74,&DAT_082b0e58);
      }
    }
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b0e3c + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
    sub_0806C2A4(param_1);
  }
  return in_lr;
}

