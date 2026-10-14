// sub_080A786C at 0x080A786C (thumb)

undefined4 sub_080A786C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0809C930(param_1,2);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_0800561C(param_1 + 0x74,
               &DAT_082b616c + (uint)(byte)(&DAT_082b6268)[*(byte *)(param_1 + 0x12)] * 0x1c);
  *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0x50);
  *(int *)(param_1 + 0xbc) =
       *(int *)(param_1 + 0x50) - *(int *)(&DAT_082b6234 + (uint)*(byte *)(param_1 + 0x12) * 4);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  sub_0809C980(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

