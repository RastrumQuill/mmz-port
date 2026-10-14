// sub_08067858 at 0x08067858 (thumb)

undefined4 sub_08067858(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_080033F0(param_1 + 0x6c,1);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0x30;
    local_10 = *(int *)(param_1 + 0x50) + 0x800;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_14 = *(int *)(param_1 + 0x4c) + -0x1000;
      sub_08076710(&local_14,0x180,0xef);
      local_10 = *(int *)(param_1 + 0x50) + -0x500;
      sub_08076710(&local_14,0x180,0x10);
    }
    else {
      local_14 = *(int *)(param_1 + 0x4c) + 0x1000;
      sub_08076710(&local_14,0x180,0x90);
      local_10 = *(int *)(param_1 + 0x50) + -0x500;
      sub_08076710(&local_14,0x180,0x70);
    }
    sub_08001EAC(0xd);
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

