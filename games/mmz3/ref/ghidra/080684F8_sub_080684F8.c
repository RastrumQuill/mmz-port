// sub_080684F8 at 0x080684F8 (thumb)

undefined4 sub_080684F8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017700(param_1,0x800);
    *(undefined *)(param_1 + 0xb9) = 0;
    sub_08007390(param_1 + 0x74,&DAT_08362864);
    iVar1 = *(int *)(param_1 + 0xbc);
    if (iVar1 != 0) {
      *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfe;
      iVar1 = *(int *)(param_1 + 0xbc);
      *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfc;
      *(undefined4 *)(iVar1 + 0xc) = 3;
      *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(iVar1 + 9)] + 0xc);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080177F4(param_1);
  if ((uint)((*(int *)(DAT_0202f5c0 + 0x54) + 0x6000) - *(int *)(param_1 + 0x54)) < 0xc000) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

