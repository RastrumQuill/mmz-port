// sub_0806DFBC at 0x0806DFBC (thumb)

undefined4 sub_0806DFBC(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,*(undefined2 *)(&DAT_0833ea08 + (uint)*(byte *)(param_1 + 0xb5) * 2));
    sub_08006E08(param_1 + 0x74,&DAT_0833e86c);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  return in_lr;
}

