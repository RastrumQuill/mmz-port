// sub_080279A8 at 0x080279A8 (thumb)

undefined4 sub_080279A8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 1;
    sub_08025C54(param_1,*(undefined2 *)
                          (&DAT_082ab348 + ((uint)*(byte *)(param_1 + 0x10) * 2 + 1) * 2));
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  }
  return in_lr;
}

