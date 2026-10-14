// sub_080E65D8 at 0x080E65D8 (thumb)

undefined4 sub_080E65D8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x28) + 0x64ac);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e764)[*(byte *)(param_1 + 9)] + 4);
  sub_0801749C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if (*(char *)(param_1 + 0x11) == '\0') {
    sub_08017700(param_1,*(undefined2 *)(&DAT_0836e850 + (uint)*(byte *)(iVar1 + 0xc3) * 2));
    sub_08017BCC(param_1,5);
  }
  else if (*(char *)(param_1 + 0x11) == '\x01') {
    sub_08017700(param_1,*(undefined2 *)(&DAT_0836e858 + (uint)*(byte *)(iVar1 + 0xc4) * 2));
    sub_08017BCC(param_1,(&DAT_0836e864)[*(byte *)(iVar1 + 0xc4)]);
  }
  else {
    sub_08017700(param_1,*(undefined2 *)(&DAT_0836e86a + (uint)*(byte *)(iVar1 + 0xc5) * 2));
    sub_08017BCC(param_1,5);
  }
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
  *(undefined4 *)(param_1 + 0x54) = 0x9c00;
  *(uint *)(param_1 + 0x58) = (uint)(byte)(&DAT_0836e87a)[*(byte *)(param_1 + 0x11)] << 8;
  *(undefined *)(param_1 + 0x79) = 0;
  return in_lr;
}

