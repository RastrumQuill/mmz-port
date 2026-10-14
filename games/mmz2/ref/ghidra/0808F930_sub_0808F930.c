// sub_0808F930 at 0x0808F930 (thumb)

undefined4 sub_0808F930(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xbc) = 0xc;
    *(undefined *)(param_1 + 0xbd) = 0xc;
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if ((*(byte *)(param_1 + 0x12) < 0xc) &&
     (bVar1 = *(byte *)(param_1 + 0x13), *(byte *)(param_1 + 0x13) = bVar1 + 1, 0x20 < bVar1)) {
    sub_0808FBB4(param_1,0,*(undefined *)(param_1 + 0x12));
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
    *(undefined *)(param_1 + 0x13) = 0;
  }
  if (*(char *)(param_1 + 0xbd) == '\0') {
    if (*(char *)(param_1 + 0xbc) == '\0') {
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 5;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

