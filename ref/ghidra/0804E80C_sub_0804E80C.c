// sub_0804E80C at 0x0804E80C (thumb)

undefined4 sub_0804E80C(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 in_lr;
  undefined4 local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080489E4(param_1);
    sub_0800561C(param_1 + 0x74,&DAT_082af1a8);
    *(int *)(param_1 + 0x4c) = DAT_02022c7c + 0x97ff;
    *(undefined4 *)(param_1 + 0x54) = 0xfffffd00;
    sub_080033F0(param_1 + 0x6c,2);
    *(undefined *)(param_1 + 0x12) = 0x1a;
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined *)(param_1 + 0x44) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  piVar2 = (int *)(param_1 + 0xc0);
  *piVar2 = *piVar2 - *(int *)(param_1 + 0x54);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0x12) = 0x1a;
    local_14 = *(undefined4 *)(param_1 + 0x4c);
    local_10 = *(int *)(param_1 + 0x50) + 0x800;
    sub_08077304(&local_14);
  }
  if (0x1dfff < *piVar2) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

