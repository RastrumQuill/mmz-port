// sub_080C9AF8 at 0x080C9AF8 (thumb)

undefined4 sub_080C9AF8(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  cVar1 = sub_080C99C4();
  if (cVar1 == '\0') {
    sub_080C9960(param_1);
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836c3e0 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836c3ec + (uint)*(byte *)(param_1 + 0xd) * 4));
    iVar2 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar2;
    if (0x700 < iVar2) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar2 = sub_08009BE4(*(undefined4 *)(param_1 + 0x54));
    if (iVar2 < 0) {
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar2;
    }
  }
  return in_lr;
}

