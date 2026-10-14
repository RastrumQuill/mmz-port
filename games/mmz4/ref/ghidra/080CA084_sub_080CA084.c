// sub_080CA084 at 0x080CA084 (thumb)

undefined4 sub_080CA084(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(char *)(iVar1 + 0xe) == '\0') {
    *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfc;
    *(undefined4 *)(iVar1 + 0x8c) = 0;
    *(undefined4 *)(iVar1 + 0x90) = 0;
    *(undefined *)(iVar1 + 0x94) = 0;
    *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfb;
    *(undefined4 *)(iVar1 + 0xc) = 3;
    *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(iVar1 + 9)] + 0xc);
  }
  else {
    *(undefined *)(iVar1 + 0xb5) = 0;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  return in_lr;
}

