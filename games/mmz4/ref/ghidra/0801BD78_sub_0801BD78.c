// sub_0801BD78 at 0x0801BD78 (thumb)

undefined4 sub_0801BD78(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar2 = (uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14;
    uVar1 = *(uint *)(param_1 + 100);
    (&DAT_02000a04)[uVar2] = (ushort)uVar1 | 0x45;
    *(undefined4 *)(&DAT_02000a0c + uVar2 * 2) = 0;
    sub_081284E4(&DAT_08b4d778,(uVar1 & 0x1f00) * 8 + 0x6000000,0x200);
    *(undefined2 *)(param_1 + 0x68) = 0;
    *(undefined2 *)(param_1 + 0x6a) = 0;
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(undefined2 *)(param_1 + 0x12) = 0;
    DAT_02000a40 = 0x3b44;
    DAT_02000a42 = 0x1000;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_08128884(param_1,*(undefined4 *)(&DAT_08837c4c + (uint)DAT_0202dad5 * 4));
  if (((DAT_0202e918 & 8) == 0) && ((DAT_0202e922 & 1) == 0)) {
    *(int *)(DAT_0202dbf0 + 0x1bc) =
         *(int *)(DAT_0202dbf0 + 0x1bc) + (int)*(short *)(param_1 + 0x6a);
  }
  return in_lr;
}

