// sub_08095EB4 at 0x08095EB4 (thumb)

undefined4 sub_08095EB4(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  sub_08088120();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c,*(undefined *)(param_1 + 0x10));
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(char *)(param_1 + 0x44) = *(char *)(param_1 + 0x7c);
  if (*(char *)(param_1 + 0x7c) == '\0') {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  if (*(char *)(param_1 + 0x11) == '\0') {
    iVar2 = *(int *)(param_1 + 0x4c) + -0x800;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x4c) + 0x800;
  }
  *(int *)(param_1 + 0x4c) = iVar2;
  *(undefined4 *)(param_1 + 0x58) = 0x40;
  *(undefined *)(param_1 + 0x12) = 0x21;
  *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) | 0xc;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  sub_08095F84(param_1);
  return in_lr;
}

