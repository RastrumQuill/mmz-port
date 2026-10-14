// sub_080AF8B8 at 0x080AF8B8 (thumb)

undefined4 sub_080AF8B8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0809C930(param_1,0);
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

