// sub_080D0408 at 0x080D0408 (thumb)

undefined4 sub_080D0408(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 4);
  sub_0801CF00(param_1,0x680d);
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  if (*(char *)(param_1 + 0x10) == '\x01') {
    *(undefined4 *)(param_1 + 0x5c) = 0xfffffec0;
    iVar1 = *(int *)(param_1 + 0x54);
    iVar2 = -0x800;
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = 0x140;
    iVar1 = *(int *)(param_1 + 0x54);
    iVar2 = 0x800;
  }
  *(int *)(param_1 + 0x54) = iVar1 + iVar2;
  *(undefined *)(param_1 + 0xb4) = 1;
  *(undefined *)(param_1 + 0xb5) = 1;
  *(undefined *)(param_1 + 0x12) = 0x14;
  *(undefined *)(param_1 + 0xb6) = 0;
  sub_080D04A4(param_1);
  return in_lr;
}

