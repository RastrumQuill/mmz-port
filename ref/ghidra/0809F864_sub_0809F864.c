// sub_0809F864 at 0x0809F864 (thumb)

undefined4 sub_0809F864(int param_1)

{
  undefined *puVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0809C930(param_1,0);
    if ((*(byte *)(param_1 + 0x10) & 2) == 0) {
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
      puVar1 = &DAT_082b5758;
    }
    else {
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x18;
      puVar1 = &DAT_082b5760;
    }
    *(undefined **)(param_1 + 0x28) = puVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_0809C980(param_1);
  return in_lr;
}

