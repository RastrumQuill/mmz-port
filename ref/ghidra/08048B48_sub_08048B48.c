// sub_08048B48 at 0x08048B48 (thumb)

undefined4 sub_08048B48(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = (uint)*(byte *)(param_1 + 9) * 4;
  sub_080033DC(param_1 + 0x6c,*(undefined4 *)(&DAT_085a4000 + iVar1));
  sub_08002110(param_1 + 0x2c,*(undefined4 *)(&DAT_08566000 + iVar1),param_1 + 0x4c);
  *(undefined2 *)(param_1 + 0x42) = *(undefined2 *)(param_1 + 0x1c);
  *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | *(char *)(param_1 + 0x1e) << 4;
  *(byte *)(param_1 + 0x44) = *(byte *)(param_1 + 10) >> 4 & 1;
  *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 10) >> 5 & 1;
  *(undefined *)(param_1 + 0x1f) = 0;
  *(undefined2 *)(param_1 + 0x48) = 0x100;
  *(undefined2 *)(param_1 + 0x4a) = 0x100;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x48;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 3;
  return in_lr;
}

