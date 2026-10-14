// sub_080A1A3C at 0x080A1A3C (thumb)

undefined4 sub_080A1A3C(int param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  uVar1 = *(ushort *)(param_1 + 0x90);
  if ((uVar1 & 0x40) == 0) {
    iVar3 = *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c);
    if (iVar3 < 0) {
      iVar3 = *(int *)(param_1 + 0x4c) - *(int *)(DAT_0202286c + 0x4c);
    }
    if (iVar3 < 0x2d001) {
      uVar2 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c);
      if (uVar2 < 0x4001) {
        if (*(char *)(param_1 + 0x13) == '\0') {
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
          *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x48;
          *(undefined **)(param_1 + 0x28) = &DAT_082b5a04;
          *(undefined *)(param_1 + 0x13) = 1;
        }
      }
      else if (*(char *)(param_1 + 0x13) != '\0') {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
        *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0x87;
        *(byte *)(param_1 + 0x13) = (byte)uVar1 & 0x40;
      }
      sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b59c0 + (uint)*(byte *)(param_1 + 0xd) * 4));
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xd) = 0;
    sub_080A1B14(param_1);
  }
  return in_lr;
}

