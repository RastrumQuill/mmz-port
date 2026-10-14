// sub_0802512C at 0x0802512C (thumb)

undefined4 sub_0802512C(int param_1)

{
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0x176) < 3) {
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0xf) = 0x10;
      sub_0801E9FC(param_1,*(undefined *)(param_1 + 0x180));
    }
  }
  else {
    *(undefined *)(param_1 + 0xf) = 0x10;
  }
  sub_080251C0(param_1);
  return in_lr;
}

