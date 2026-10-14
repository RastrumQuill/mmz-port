// sub_080167A4 at 0x080167A4 (thumb)

undefined4 sub_080167A4(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08002B10(0x74);
    uVar1 = sub_080F7DEC(&DAT_088335e0,0,0);
    *(undefined4 *)(param_1 + 0x68) = uVar1;
    uVar1 = sub_080F7DEC(&DAT_088335e8,0,0);
    *(undefined4 *)(param_1 + 0x6c) = uVar1;
    uVar1 = sub_080F7DEC(&DAT_088335f0,0,0);
    *(undefined4 *)(param_1 + 0x70) = uVar1;
    uVar1 = sub_080F4CF8(&DAT_088335f8,2,0);
    *(undefined4 *)(param_1 + 0x74) = uVar1;
    uVar1 = sub_080F4CF8(&DAT_08833600,2,0);
    *(undefined4 *)(param_1 + 0x78) = uVar1;
    uVar1 = sub_080F4CF8(&DAT_08833608,2,0);
    *(undefined4 *)(param_1 + 0x7c) = uVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

