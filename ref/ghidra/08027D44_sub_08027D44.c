// sub_08027D44 at 0x08027D44 (thumb)

undefined4 sub_08027D44(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x20) + 0xbf) == (&DAT_082ab3c0)[*(byte *)(param_1 + 0x10)]) {
    *(undefined *)(param_1 + 0xd) = 1;
    sub_08025C54(param_1,*(undefined2 *)
                          (&DAT_082ab348 + ((uint)*(byte *)(param_1 + 0x10) * 2 + 1) * 2));
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  }
  return in_lr;
}

