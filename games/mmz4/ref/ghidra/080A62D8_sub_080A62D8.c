// sub_080A62D8 at 0x080A62D8 (thumb)

undefined4 sub_080A62D8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0x8a08);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(uint *)(param_1 + 0x70) & 0xffff00) == 0x10200) {
    sub_080CA778(param_1 + 0x54,0);
    sub_08002B10(0x159);
    sub_08005784(param_1 + 0x74,&DAT_0885efe8);
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    sub_0801CF00(param_1,0x8a00);
    *(undefined *)(param_1 + 0x12) = 0x78;
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

