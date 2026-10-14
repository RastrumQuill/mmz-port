// sub_0807BC3C at 0x0807BC3C (thumb)

undefined4 sub_0807BC3C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0x11) == '\0') {
      sub_080127E4(param_1,*(byte *)(param_1 + 0x10) + 0x5018);
    }
    else {
      sub_080127E4(param_1,*(byte *)(param_1 + 0x10) + 0x5028);
    }
    sub_08006E08(param_1 + 0x74,&DAT_083402c8);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0x10;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

