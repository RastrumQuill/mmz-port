// sub_080660C8 at 0x080660C8 (thumb)

undefined4 sub_080660C8(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (((*(uint *)(param_1 + 0x8c) & 0x200) == 0) ||
     ((*(char *)(param_1 + 0xd) == '\b' && (iVar2 = sub_08063614(param_1), iVar2 == 0)))) {
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_083624e4 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_08066CD0(param_1);
    cVar1 = *(char *)(param_1 + 0xd);
    if ((cVar1 == '\b') ||
       (((cVar1 == '\x05' || (cVar1 == '\a')) || (iVar2 = sub_08063614(param_1), iVar2 == 0)))) {
      sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08362508 + (uint)*(byte *)(param_1 + 0xd) * 4));
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08066154(param_1);
  }
  return in_lr;
}

