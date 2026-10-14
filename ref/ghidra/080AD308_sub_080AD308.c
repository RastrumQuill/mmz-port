// sub_080AD308 at 0x080AD308 (thumb)

undefined4 sub_080AD308(int param_1)

{
  undefined2 uVar1;
  undefined4 in_lr;
  
  if (((*(char *)(param_1 + 0xd) != '\x03') && ((*(ushort *)(param_1 + 0x90) & 0x2000) != 0)) &&
     (DAT_02022874 != '\0')) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 1;
    uVar1 = sub_080AD558(param_1);
    *(undefined2 *)(param_1 + 0xc4) = uVar1;
    sub_080BC808(*(undefined2 *)(param_1 + 0xc4));
  }
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b6790 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

