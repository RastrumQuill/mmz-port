// sub_080560DC at 0x080560DC (thumb)

undefined4 sub_080560DC(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0x10);
  if (((cVar1 == '\0') || (cVar1 == '\x02')) || (cVar1 == '\x04')) {
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082afa80 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082afa28 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082afa54 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    uVar2 = *(uint *)(*(int *)(param_1 + 0x20) + 0xbc);
    if ((uVar2 & 0x100) == 0) {
      if ((uVar2 & 0x200) == 0) {
        sub_080C8A98(param_1,*(undefined4 *)(&DAT_082afa80 + (uint)*(byte *)(param_1 + 0xd) * 4));
        sub_080C8A98(param_1,*(undefined4 *)(&DAT_082afa28 + (uint)*(byte *)(param_1 + 0xd) * 4));
        sub_080C8A98(param_1,*(undefined4 *)(&DAT_082afa54 + (uint)*(byte *)(param_1 + 0xd) * 4));
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      sub_080561A8(param_1);
    }
  }
  return in_lr;
}

