// sub_080EC008 at 0x080EC008 (thumb)

undefined4 sub_080EC008(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x28) + 0xc) == '\x04') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080EC330(param_1);
  }
  else {
    sub_08128884(param_1,*(undefined4 *)(&DAT_08866270 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  return in_lr;
}

