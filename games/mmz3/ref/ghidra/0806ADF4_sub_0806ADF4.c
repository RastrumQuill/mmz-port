// sub_0806ADF4 at 0x0806ADF4 (thumb)

undefined4 sub_0806ADF4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x10;
    *(undefined *)(param_1 + 0x1d) = *(undefined *)(*(int *)(param_1 + 0x28) + 0x1c);
    sub_08017700(param_1,0x900);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    sub_08007390(param_1 + 0x74,&DAT_08362bf8);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x02';
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0xb8) + *(int *)(*(int *)(param_1 + 0x28) + 0x58) +
       (int)(short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x12)];
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xb4) + *(int *)(*(int *)(param_1 + 0x28) + 0x54);
  sub_080177F4(param_1);
  return in_lr;
}

