// sub_080AC374 at 0x080AC374 (thumb)

undefined4 sub_080AC374(int param_1)

{
  undefined4 in_lr;
  
  if (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) {
    if ((*(char *)(param_1 + 0xb6) != '\0') && (*(char *)(param_1 + 0xb4) != '\0')) {
      *(undefined *)(param_1 + 0xd) = *(undefined *)(param_1 + 0xb5);
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
      *(char *)(param_1 + 0xb4) = '\0';
      *(char *)(param_1 + 0xb6) = '\0';
    }
    sub_08128884(param_1,*(undefined4 *)(&DAT_0885f7dc + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else if (*(char *)(param_1 + 0xb8) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080AC6FC(param_1);
  }
  return in_lr;
}

