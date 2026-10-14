// sub_0805CAC0 at 0x0805CAC0 (thumb)

undefined4 sub_0805CAC0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa91a);
    sub_08006E08(param_1 + 0x74,&DAT_0833cd0c);
    *(undefined *)(*(int *)(param_1 + 0x28) + 0x11) = 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

