// sub_0802CA30 at 0x0802CA30 (thumb)

undefined4 sub_0802CA30(int param_1)

{
  undefined4 in_lr;
  
  if ((((byte)(*(char *)(param_1 + 0xb4) - 0x20U) < 2) || (*(char *)(param_1 + 0xb5) == ' ')) ||
     (*(char *)(param_1 + 0xb5) == '!')) {
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835ad10 + (uint)*(byte *)(param_1 + 0xe) * 4));
  }
  else {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 2;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  *(undefined *)(param_1 + 0x122) = 0;
  return in_lr;
}

