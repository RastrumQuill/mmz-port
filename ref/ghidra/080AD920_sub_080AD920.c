// sub_080AD920 at 0x080AD920 (thumb)

undefined4 sub_080AD920(int param_1)

{
  undefined2 uVar1;
  undefined4 in_lr;
  
  if (((*(char *)(param_1 + 0xd) != '\x03') && ((*(ushort *)(param_1 + 0x90) & 0x2000) != 0)) &&
     (DAT_02022874 != '\0')) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 1;
    uVar1 = sub_080ADBA4(param_1);
    sub_080BC808(uVar1);
  }
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b67d0 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

