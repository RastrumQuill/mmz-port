// sub_0804879C at 0x0804879C (thumb)

undefined4 sub_0804879C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa50d);
    sub_08006E08(param_1 + 0x74,&DAT_0833ad0c);
    *(undefined *)(*(int *)(param_1 + 0xcc) + 0x11) = 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0x11;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

