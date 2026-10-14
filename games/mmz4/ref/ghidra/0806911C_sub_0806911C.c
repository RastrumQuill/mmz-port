// sub_0806911C at 0x0806911C (thumb)

undefined4 sub_0806911C(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  uVar2 = *(undefined4 *)(param_1 + 0xb4);
  uVar3 = *(undefined4 *)(param_1 + 0xb8);
  uVar1 = *(undefined4 *)(param_1 + 0xbc);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(byte *)(*(int *)(param_1 + 0xc0) + 10) = *(byte *)(*(int *)(param_1 + 0xc0) + 10) & 0xfe;
    sub_0801CF00(uVar2,0x5700);
    sub_0801CF00(uVar3,0x5701);
    sub_0801CF00(uVar1,0x5705);
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(uVar2);
  sub_0801CFF0(uVar3);
  sub_0801CFF0(uVar1);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  if (((DAT_0202e918 & 8) == 0) && (*(char *)(param_1 + 0x12) == '\0')) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

