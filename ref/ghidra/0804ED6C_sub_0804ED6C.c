// sub_0804ED6C at 0x0804ED6C (thumb)

undefined4 sub_0804ED6C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 7;
  sub_080055FC(param_1 + 0x74,&DAT_082af290,param_1 + 0x4c,0x10);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0x804f391;
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x50);
  *(undefined *)(param_1 + 0xd) = (&DAT_082af300)[*(byte *)(param_1 + 0x10)];
  if (*(byte *)(param_1 + 0x10) == 2) {
    iVar1 = sub_08048BE8(param_1);
    if (iVar1 != 0) {
      sub_0804F934(param_1);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x20) = 0;
    iVar1 = sub_08048BE8(param_1);
    if (iVar1 != 0) {
      if (*(char *)(param_1 + 0x10) == '\0') {
        sub_0804F584(param_1);
      }
      else {
        sub_0804F6CC(param_1);
      }
    }
  }
  sub_0804EE1C(param_1);
  return in_lr;
}

