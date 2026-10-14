// sub_080650C4 at 0x080650C4 (thumb)

undefined4 sub_080650C4(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xad10);
    uVar1 = sub_080AAA70(param_1,0,0);
    *(undefined4 *)(param_1 + 0x28) = uVar1;
    sub_080032EC(0xd8);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if ((*(int *)(param_1 + 0x28) != 0) && (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc))) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0x18;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

