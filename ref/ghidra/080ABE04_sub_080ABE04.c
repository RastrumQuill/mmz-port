// sub_080ABE04 at 0x080ABE04 (thumb)

undefined4 sub_080ABE04(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 in_lr;
  
  if (((*(char *)(param_1 + 0xd) != '\x03') && ((*(ushort *)(param_1 + 0x90) & 0x2000) != 0)) &&
     (DAT_02022874 != '\0')) {
    *(undefined *)(param_1 + 0xd) = 3;
    cVar1 = *(char *)(param_1 + 0x10);
    if (cVar1 != '\0') {
      cVar1 = '\x05';
    }
    *(char *)(param_1 + 0xf) = cVar1;
    uVar2 = sub_080AC164(param_1);
    sub_080BC808(uVar2);
  }
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b66c8 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

