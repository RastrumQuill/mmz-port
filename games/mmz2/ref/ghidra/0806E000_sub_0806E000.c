// sub_0806E000 at 0x0806E000 (thumb)

undefined4 sub_0806E000(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,*(undefined2 *)
                          (&DAT_0833ea0e +
                          ((uint)*(byte *)(param_1 + 0xb5) * 3 + (uint)*(byte *)(param_1 + 0xb6)) *
                          2));
    *(char *)(param_1 + 0xb8) =
         (&DAT_0833ea20)[(uint)*(byte *)(param_1 + 0xb5) * 3 + (uint)*(byte *)(param_1 + 0xb6)] +
         *(char *)(param_1 + 0xb8);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xb5) = *(undefined *)(param_1 + 0xb6);
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

