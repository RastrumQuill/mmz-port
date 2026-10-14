// sub_080BC5A0 at 0x080BC5A0 (thumb)

undefined4 sub_080BC5A0(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x13) == '\0') {
    if (*(char *)(param_1 + 0x10) == '\0') {
      if (3 < *(byte *)(param_1 + 0x12)) {
        return in_lr;
      }
      sub_08005784(param_1 + 0x74,
                   *(int *)(&DAT_088613a4 + (uint)*(byte *)(param_1 + 0x10) * 4) +
                   (uint)*(byte *)(param_1 + 0x12) * 0x18);
      sub_0801CF00(param_1,*(undefined2 *)
                            (&DAT_08861254 +
                            (uint)*(byte *)(param_1 + 0x12) * 2 +
                            (uint)*(byte *)(param_1 + 0x10) * 8));
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
      cVar1 = '\x1e';
    }
    else {
      if (2 < *(byte *)(param_1 + 0x12)) {
        return in_lr;
      }
      sub_08005784(param_1 + 0x74,
                   *(int *)(&DAT_088613a4 + (uint)*(byte *)(param_1 + 0x10) * 4) +
                   (uint)*(byte *)(param_1 + 0x12) * 0x18);
      sub_0801CF00(param_1,*(undefined2 *)
                            (&DAT_08861254 +
                            (uint)*(byte *)(param_1 + 0x12) * 2 +
                            (uint)*(byte *)(param_1 + 0x10) * 8));
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
      cVar1 = '\x1e';
    }
  }
  else {
    cVar1 = *(char *)(param_1 + 0x13) + -1;
  }
  *(char *)(param_1 + 0x13) = cVar1;
  return in_lr;
}

