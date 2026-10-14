// sub_0805F5FC at 0x0805F5FC (thumb)

undefined4 sub_0805F5FC(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08001EAC(0x85);
    *(undefined *)(param_1 + 0x12) = 0x40;
    *(undefined4 *)(param_1 + 0x5c) =
         *(undefined4 *)(&DAT_082b0404 + (uint)*(byte *)(param_1 + 0x10) * 4);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (*(int *)(param_1 + 0xbc) == 0) {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + (char)*(undefined4 *)(param_1 + 0x5c);
  }
  *(undefined *)(param_1 + 0x1f) = *(undefined *)(param_1 + 0x12);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

