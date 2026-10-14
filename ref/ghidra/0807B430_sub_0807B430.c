// sub_0807B430 at 0x0807B430 (thumb)

undefined4 sub_0807B430(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  int local_10;
  int local_c;
  
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  cVar1 = *(char *)(param_1 + 0x12) + '\x01';
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\x06') {
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    if (*(char *)(param_1 + 0x10) != '\0') {
      local_c = *(undefined4 *)(param_1 + 0x50);
      if (*(char *)(param_1 + 0x11) == '\0') {
        local_10 = *(int *)(param_1 + 0x4c) + -0x800;
      }
      else {
        local_10 = *(int *)(param_1 + 0x4c) + 0x800;
      }
      cVar1 = sub_080079CC(local_10,*(int *)(param_1 + 0x50) + -0x800);
      if (cVar1 == 'A') {
        local_c = *(int *)(param_1 + 0x50);
      }
      else if (*(char *)(param_1 + 0x13) == '\0') {
        local_c = sub_08008360(local_10,*(undefined4 *)(param_1 + 0x50));
      }
      else {
        local_c = sub_08008360(local_10,*(undefined4 *)(param_1 + 0x50));
        local_c = local_c + -0x900;
      }
      sub_0807B2EC(&local_10,*(char *)(param_1 + 0x10) + -1,*(undefined *)(param_1 + 0x11),
                   *(undefined *)(param_1 + 0x13));
    }
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

