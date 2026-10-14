// sub_08048CAC at 0x08048CAC (thumb)

undefined4 sub_08048CAC(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(ushort *)(param_1 + 0x90) & 0x40) == 0) {
    if ((*(int *)(param_1 + 0x50) - *(int *)(DAT_0202286c + 0x50)) + 0x3000U < 0x6000) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar1 = *(int *)(param_1 + 0x4c);
        iVar2 = *(int *)(DAT_0202286c + 0x4c);
      }
      else {
        iVar1 = *(int *)(DAT_0202286c + 0x4c);
        iVar2 = *(int *)(param_1 + 0x4c);
      }
      *(int *)(param_1 + 0xc0) = iVar1 - iVar2;
    }
    else {
      *(undefined4 *)(param_1 + 0xc0) = 0xffffffff;
    }
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082aebfc + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082aec14 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    if (*(char *)(param_1 + 0x10) == '\x01') {
      (&DAT_02022ad4)[*(uint *)(&DAT_082aeca4 + (uint)*(byte *)(param_1 + 0x11) * 4) >> 3] =
           '\x01' << (*(uint *)(&DAT_082aeca4 + (uint)*(byte *)(param_1 + 0x11) * 4) & 7) |
           (&DAT_02022ad4)[*(uint *)(&DAT_082aeca4 + (uint)*(byte *)(param_1 + 0x11) * 4) >> 3];
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08048D84(param_1);
  }
  return in_lr;
}

