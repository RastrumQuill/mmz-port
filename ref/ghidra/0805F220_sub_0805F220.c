// sub_0805F220 at 0x0805F220 (thumb)

undefined4 sub_0805F220(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_082b0414)[*(byte *)(param_1 + 0x10)];
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  *(undefined4 *)(param_1 + 0xb0) = 0x805f48d;
  if (*(byte *)(param_1 + 0x10) < 4) {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (*(char *)(param_1 + 0x10) == '\x04') {
    sub_080033F0(param_1 + 0x6c,2);
  }
  else {
    sub_080033F0(param_1 + 0x6c,0);
  }
  *(undefined4 *)(param_1 + 0xbc) = 0;
  iVar1 = sub_08048BE8(param_1);
  if (iVar1 != 0) {
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b03dc + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b03f0 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  sub_0805F2D0(param_1);
  return in_lr;
}

