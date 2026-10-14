// sub_08096FA8 at 0x08096FA8 (thumb)

undefined4 sub_08096FA8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x11) == '\x01') {
    sub_0800DEB4(param_1,*(undefined4 *)(param_1 + 0x20));
  }
  else {
    sub_0800DEB4(param_1,*(undefined4 *)(param_1 + 0x20));
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c,7);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  iVar1 = 0;
  do {
    sub_08096E28(param_1,(uint)(iVar1 << 0x1d) >> 0x18);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 8);
  *(undefined *)(param_1 + 0x12) = 4;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  sub_08096E9C(param_1);
  return in_lr;
}

