// sub_080A94E0 at 0x080A94E0 (thumb)

undefined4 sub_080A94E0(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    if (*(char *)(param_1 + 0xb7) == '\0') {
      sub_080A9CD8(param_1);
      if (*(int *)(param_1 + 0xc0) == 0) {
        if (*(char *)(param_1 + 0xb6) == '\x01') {
          sub_08128884(param_1,*(undefined4 *)(&DAT_0885f41c + (uint)*(byte *)(param_1 + 0xd) * 4));
        }
      }
      else {
        sub_080A9D60(param_1);
        sub_080A9CB0(param_1);
      }
      if ((*(char *)(param_1 + 0xb6) == '\0') && (cVar1 = sub_080A9884(param_1), cVar1 == '\x01')) {
        *(char *)(param_1 + 0xb6) = '\x01';
        *(undefined *)(param_1 + 0xd) = 4;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
    else {
      sub_08128884(param_1,*(undefined4 *)(&DAT_0885f430 + (uint)*(byte *)(param_1 + 0xd) * 4));
    }
    sub_0801CFF0(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080A959C(param_1);
  }
  return in_lr;
}

