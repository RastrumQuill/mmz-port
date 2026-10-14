// sub_080375C4 at 0x080375C4 (thumb)

undefined4 sub_080375C4(int param_1)

{
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 0x18c) & 0x43) == 0) {
    if (*(char *)(param_1 + 0x1fc) == '\x03') {
      sub_08006E80(param_1 + 0x74,*(undefined4 *)(param_1 + 0xd4),4);
    }
    else if (*(char *)(param_1 + 0x1fc) == '\b') {
      sub_08006E80(param_1 + 0x74,*(undefined4 *)(param_1 + 0xd4),0x10);
    }
    else {
      sub_08006E08(param_1 + 0x74,*(undefined4 *)(param_1 + 0xd4));
    }
  }
  else {
    sub_08006E08(param_1 + 0x74,&DAT_08334864);
  }
  return in_lr;
}

