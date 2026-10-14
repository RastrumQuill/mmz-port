// sub_080B7440 at 0x080B7440 (thumb)

undefined4 sub_080B7440(int param_1)

{
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x73) == '\x03') || (*(char *)(param_1 + 0x12) == '\0')) {
    if (1 < *(byte *)(param_1 + 0xe)) {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      if (*(char *)(param_1 + 0xb4) == '\0') {
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
        return in_lr;
      }
      *(char *)(param_1 + 0xb4) = '\0';
      return in_lr;
    }
    sub_0801CF00(param_1,*(undefined2 *)
                          (&DAT_08860aa8 +
                          (uint)*(byte *)(param_1 + 0xb4) * 2 + (uint)*(byte *)(param_1 + 0xe) * 4))
    ;
    *(undefined *)(param_1 + 0x12) = 0x30;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (((*(char *)(param_1 + 0xe) == '\x01') && (*(char *)(param_1 + 0x12) != '\0')) &&
     (sub_0801FE64(2,param_1 + 0x54), (*(byte *)(param_1 + 0x12) & 1) == 0)) {
    sub_080B7558(param_1);
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  return in_lr;
}

