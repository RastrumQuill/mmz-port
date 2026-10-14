// sub_080575CC at 0x080575CC (thumb)

undefined4 sub_080575CC(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) != 0) {
    if (*(char *)(param_1 + 0xe) != '\0') {
      *(undefined *)(param_1 + 0xe) = 0;
      sub_080040A8(99,0x280);
      sub_0800471C(0x39);
      *(undefined *)(param_1 + 0x12) = 0xff;
      *(undefined *)(param_1 + 0x13) = 0;
    }
    sub_080177F4(param_1);
    sub_080041E4(99);
    bVar1 = *(byte *)(param_1 + 0x12) & 7;
    if (bVar1 == 3) {
      sub_080C0FC4(param_1,2,*(undefined *)(param_1 + 0x13));
      *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\f';
    }
    else if (bVar1 == 7) {
      uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar2 & 0x7fffffff;
      sub_080C0FC4(param_1,2,uVar2 * 2 >> 0x11 & 0xff);
    }
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 4) != 0) {
      sub_08004230(99);
      *(undefined *)(param_1 + 0xd) = 4;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

