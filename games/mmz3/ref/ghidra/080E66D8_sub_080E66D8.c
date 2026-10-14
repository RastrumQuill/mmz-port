// sub_080E66D8 at 0x080E66D8 (thumb)

undefined4 sub_080E66D8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e764)[*(byte *)(param_1 + 9)] + 4);
  sub_0801749C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if (*(char *)(iVar2 + 0x11) == '\0') {
    sub_08017700(param_1,*(undefined2 *)(&DAT_0836e850 + (uint)*(byte *)(param_1 + 0x11) * 2));
    sub_08017BCC(param_1,5);
  }
  else if (*(char *)(iVar2 + 0x11) == '\x01') {
    sub_08017700(param_1,*(undefined2 *)(&DAT_0836e858 + (uint)*(byte *)(param_1 + 0x11) * 2));
    sub_08017BCC(param_1,(&DAT_0836e864)[*(byte *)(param_1 + 0x11)]);
  }
  else {
    sub_08017700(param_1,*(undefined2 *)(&DAT_0836e86a + (uint)*(byte *)(param_1 + 0x11) * 2));
    sub_08017BCC(param_1,5);
  }
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
  uVar1 = *(undefined4 *)(iVar2 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  *(undefined *)(param_1 + 0x12) = 0;
  return in_lr;
}

