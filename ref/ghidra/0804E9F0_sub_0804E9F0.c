// sub_0804E9F0 at 0x0804E9F0 (thumb)

undefined4 sub_0804E9F0(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  undefined4 local_14;
  undefined4 local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080033F0(param_1 + 0x6c,1);
    *(undefined *)(param_1 + 0x12) = 0x18;
    local_14 = *(undefined4 *)(param_1 + 0x4c);
    local_10 = *(undefined4 *)(param_1 + 0x50);
    sub_080773A0(&local_14);
    sub_08001EAC(0x8b);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    local_14 = *(undefined4 *)(param_1 + 0x4c);
    local_10 = *(undefined4 *)(param_1 + 0x50);
    sub_080773A0(&local_14);
    sub_08001EAC(0x8b);
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

