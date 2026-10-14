// sub_080CA8FC at 0x080CA8FC (thumb)

undefined4 sub_080CA8FC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836c548 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    iVar1 = *(int *)(param_1 + 0x28);
    if (*(byte *)(iVar1 + 0xc) < 2) {
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(iVar1 + 0x3c);
      *(undefined *)(param_1 + 0x4e) = *(undefined *)(iVar1 + 0x4e);
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      sub_080CA958(param_1);
    }
  }
  return in_lr;
}

