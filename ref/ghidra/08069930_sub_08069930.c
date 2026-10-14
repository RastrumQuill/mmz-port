// sub_08069930 at 0x08069930 (thumb)

undefined4 sub_08069930(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(byte *)(*(int *)(param_1 + 0xc4) + 0xc) < 2) {
    if (*(byte *)(param_1 + 0xd) != 0) {
      cVar1 = *(char *)(*(int *)(param_1 + 0xc4) + 0xdc);
      if (cVar1 != '\0') {
        if (*(char *)(param_1 + 0x11) != '\0') goto LAB_08069974;
        if ((2 < *(byte *)(param_1 + 0xd)) && (cVar1 == '\x01')) {
          *(undefined *)(param_1 + 0xd) = 2;
          *(undefined *)(param_1 + 0xe) = 1;
        }
      }
      cVar1 = *(char *)(*(int *)(param_1 + 0xc4) + 0xdd);
      if (cVar1 != '\0') {
        if (*(char *)(param_1 + 0x11) == '\0') goto LAB_08069974;
        if ((2 < *(byte *)(param_1 + 0xd)) && (cVar1 == '\x01')) {
          *(undefined *)(param_1 + 0xd) = 2;
          *(undefined *)(param_1 + 0xe) = 1;
        }
      }
    }
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b0d28 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
LAB_08069974:
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xe) = 1;
    sub_080699C0(param_1);
  }
  return in_lr;
}

