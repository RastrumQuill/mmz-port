// sub_0810C198 at 0x0810C198 (thumb)

undefined4 sub_0810C198(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x28) + 0xdd1) == '\0') {
    if (*(char *)(*(int *)(param_1 + 0x28) + 3) == '\x03') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      sub_08128884(param_1,*(undefined4 *)(&DAT_08869a78 + (uint)*(byte *)(param_1 + 0x10) * 4));
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088695c0)[*(byte *)(param_1 + 9)] + 8);
    sub_0810C1F4(param_1);
  }
  return in_lr;
}

