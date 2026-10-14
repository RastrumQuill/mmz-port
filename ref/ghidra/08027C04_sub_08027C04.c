// sub_08027C04 at 0x08027C04 (thumb)

undefined4 sub_08027C04(int param_1)

{
  undefined4 in_lr;
  
  if ((byte)(*(char *)(param_1 + 0x73) - 3U) < 2) {
    *(undefined *)(param_1 + 0xd) = 1;
    sub_08025C54(param_1,*(undefined2 *)
                          (&DAT_082ab348 + ((uint)*(byte *)(param_1 + 0x10) * 2 + 1) * 2));
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  }
  return in_lr;
}

