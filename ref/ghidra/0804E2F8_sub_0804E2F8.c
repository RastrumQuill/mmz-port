// sub_0804E2F8 at 0x0804E2F8 (thumb)

undefined4 sub_0804E2F8(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_080055FC(param_1 + 0x74,&DAT_082af1c4,param_1 + 0x4c,4);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0x804e791;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_082af234)[*(byte *)(param_1 + 0x10)];
  if ((*(byte *)(param_1 + 0x10) < 2) || (*(byte *)(param_1 + 0x10) == 4)) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    iVar2 = sub_08048BE8(param_1);
    if (iVar2 != 0) {
      sub_080C8A98(param_1,*(undefined4 *)(&DAT_082af1fc + (uint)*(byte *)(param_1 + 0xd) * 4));
      sub_080C8A98(param_1,*(undefined4 *)(&DAT_082af218 + (uint)*(byte *)(param_1 + 0xd) * 4));
    }
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    iVar2 = *(int *)(DAT_0202286c + 0x4c);
    iVar3 = iVar2 - *(int *)(param_1 + 0x4c);
    *(bool *)(param_1 + 0x44) = 0 < iVar3;
    if (iVar2 == *(int *)(param_1 + 0x4c) || iVar3 < 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
  }
  *(undefined4 *)(param_1 + 0xc4) = 0;
  sub_0804E3E4(param_1);
  return in_lr;
}

