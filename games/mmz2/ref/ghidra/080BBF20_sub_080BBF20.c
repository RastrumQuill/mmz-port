// sub_080BBF20 at 0x080BBF20 (thumb)

undefined4 sub_080BBF20(int param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(*(int *)(param_1 + 0x28) + 10) >> 4;
  uVar4 = (uint)*(byte *)(param_1 + 0x11);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_08012580(param_1);
  if ((bVar1 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(char *)(param_1 + 0x4c) = (char)(bVar1 & 1);
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((bVar1 & 1) << 4);
  sub_080127E4(param_1,*(undefined2 *)(&DAT_0834732a + uVar4 * 2));
  if ((bVar1 & 1) != 0) {
    uVar4 = 2 - uVar4;
  }
  uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
  *(uint *)(param_1 + 0x5c) = (uVar4 - 1) * 0x100 + (uVar3 * 2 >> 0x11 & 0x1ff) + -0x100;
  uVar4 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar4 & 0x7fffffff;
  *(uint *)(param_1 + 0x60) = -0x200 - (uVar4 * 2 >> 0x11 & 0x1ff);
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  sub_080BBB04(param_1);
  return in_lr;
}

