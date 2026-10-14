// sub_080CED2C at 0x080CED2C (thumb)

undefined4 sub_080CED2C(int param_1)

{
  undefined *puVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if ((*(byte *)(param_1 + 0x10) & 2) == 0) {
      sub_080127E4(param_1,0x8300);
    }
    else {
      sub_080127E4(param_1,0x8100);
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08006DE4(param_1 + 0x74,&DAT_083499b8,param_1 + 0x54,0);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
      puVar1 = &DAT_083499f0;
    }
    else {
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
      puVar1 = &DAT_083499e8;
    }
    *(undefined **)(param_1 + 0x30) = puVar1;
    *(undefined2 *)(param_1 + 0x26) = 1;
    *(undefined4 *)(param_1 + 0x98) = 0x80cecd5;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080128D4(param_1);
  return in_lr;
}

