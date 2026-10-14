// sub_080E1F30 at 0x080E1F30 (thumb)

undefined4 sub_080E1F30(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar1 = sub_080BF7B4(param_1 + 0x54,0);
    *(undefined4 *)(param_1 + 0x2c) = uVar1;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (1 < *(byte *)(*(int *)(param_1 + 0x2c) + 0xc)) {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  return in_lr;
}

