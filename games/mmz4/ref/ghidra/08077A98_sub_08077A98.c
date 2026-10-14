// sub_08077A98 at 0x08077A98 (thumb)

undefined4 sub_08077A98(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08078ED4(param_1,0);
    iVar3 = (uint)*(byte *)(param_1 + 0xc5) * 2 + -1;
    *(int *)(param_1 + 0x5c) = iVar3 * 0x200;
    iVar1 = sub_08078F40(param_1);
    *(int *)(param_1 + 100) = iVar1 + iVar3 * 0x2800;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                (&DAT_08859dac)[*(ushort *)(&DAT_08859db4 + (uint)*(byte *)(param_1 + 0xc4) * 2)]));
  sub_08078E5C(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  uVar2 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
  if (0x2800 < uVar2) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

