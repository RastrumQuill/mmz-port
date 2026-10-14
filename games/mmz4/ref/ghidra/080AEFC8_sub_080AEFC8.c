// sub_080AEFC8 at 0x080AEFC8 (thumb)

undefined4 sub_080AEFC8(int param_1)

{
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x11) == '\0') && ((*(uint *)(param_1 + 0x8c) & 0x200) != 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080AF050(param_1);
  }
  else {
    sub_080AF404(param_1);
    if (*(int *)(param_1 + 0xc0) == 0) {
      if (*(char *)(param_1 + 0xb6) == '\x01') {
        sub_08128884(param_1,*(undefined4 *)(&DAT_0885fc04 + (uint)*(byte *)(param_1 + 0xd) * 4));
      }
      else {
        sub_080AF4A8(param_1);
      }
      sub_0801CFF0(param_1);
    }
    else {
      sub_080AF458(param_1);
      sub_0801D1F4(param_1);
    }
  }
  return in_lr;
}

