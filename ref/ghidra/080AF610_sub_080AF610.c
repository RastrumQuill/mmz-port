// sub_080AF610 at 0x080AF610 (thumb)

undefined4 sub_080AF610(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0809C930(param_1,0);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_080055FC(param_1 + 0x74,&DAT_082b6944,param_1 + 0x4c,0);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0x80af579;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined **)(param_1 + 0x28) = &DAT_082b6960;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_0809C980(param_1);
  return in_lr;
}

