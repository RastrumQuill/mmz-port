// sub_0807BD00 at 0x0807BD00 (thumb)

undefined4 sub_0807BD00(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0x11) == '\0') {
      sub_080127E4(param_1,*(byte *)(param_1 + 0x10) + 0x5020);
    }
    else {
      sub_080127E4(param_1,*(byte *)(param_1 + 0x10) + 0x5030);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

