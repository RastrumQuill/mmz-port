// sub_080828D0 at 0x080828D0 (thumb)

undefined4 sub_080828D0(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if ((*(ushort *)(undefined4 *)(param_1 + 0x90) & 1) != 0) {
    *(undefined2 *)(param_1 + 0x8c) = 0x14;
  }
  if ((*(char *)(param_1 + 0xb8) == '\0') && (1 < *(byte *)(*(int *)(param_1 + 0x20) + 0xc))) {
    *(char *)(param_1 + 0xb8) = '\x01';
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  }
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b2b84 + (uint)*(byte *)(param_1 + 0xd) * 4));
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b2b9c + (uint)*(byte *)(param_1 + 0xd) * 4));
  if (((*(uint *)(param_1 + 0x90) & 0x10001) == 0) && ((*(byte *)(param_1 + 0x94) & 2) == 0)) {
    cVar1 = (&DAT_02022fe0)[*(byte *)(param_1 + 9)];
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | cVar1 << 4;
    *(char *)(param_1 + 0x1e) = cVar1;
  }
  else {
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | 0xd0;
    *(undefined *)(param_1 + 0x1e) = 0xd;
  }
  return in_lr;
}

