// sub_080CC6D0 at 0x080CC6D0 (thumb)

undefined4 sub_080CC6D0(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined **)(param_1 + 0x30) = &DAT_0836c7a4;
    *(undefined2 *)(param_1 + 0x26) = 0x801;
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 100);
    sub_08007390(param_1 + 0x74,&DAT_0836c78c);
    sub_080CC1DC(param_1,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),
                 *(undefined4 *)(param_1 + 0xbc),*(undefined4 *)(param_1 + 0xb8));
    sub_08017700(param_1,0x3900);
    sub_080177F4(param_1);
    *(undefined *)(param_1 + 0x12) = 0xd8;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

