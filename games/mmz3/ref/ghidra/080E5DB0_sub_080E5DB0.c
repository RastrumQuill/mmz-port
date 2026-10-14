// sub_080E5DB0 at 0x080E5DB0 (thumb)

undefined4 sub_080E5DB0(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  sub_0801749C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  pcVar2 = (char *)(iVar1 + 0xdcc);
  *(char *)(param_1 + 0x12) = *pcVar2;
  if (*(char *)(param_1 + 0x10) == *pcVar2) {
    sub_08017700(param_1,*(undefined2 *)(&DAT_0836e7ce + (uint)*(byte *)(param_1 + 0x10) * 4));
  }
  else {
    sub_08017700(param_1,*(undefined2 *)(&DAT_0836e7cc + (uint)*(byte *)(param_1 + 0x10) * 4));
  }
  *(uint *)(param_1 + 0x54) = (uint)(byte)(&DAT_0836e7e8)[*(byte *)(param_1 + 0x10)] << 8;
  *(uint *)(param_1 + 0x58) = (uint)(byte)"8Ph8Phx"[*(byte *)(param_1 + 0x10)] << 8;
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e764)[*(byte *)(param_1 + 9)] + 4);
  sub_080E5E70(param_1);
  return in_lr;
}

