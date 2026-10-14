// sub_080AA7E8 at 0x080AA7E8 (thumb)

undefined4 sub_080AA7E8(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if ((1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) ||
     (*(char *)(*(int *)(param_1 + 0x28) + 0xd) == '\x1f')) {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc)
    ;
    return in_lr;
  }
  sub_080128D4(param_1);
  if ((*(byte *)(param_1 + 0x12) & 7) != 0) goto LAB_080aa880;
  uVar2 = (uint)*(byte *)(param_1 + 0x13);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if ((*(byte *)(param_1 + 0x13) & 1) != 0) goto LAB_080aa844;
LAB_080aa862:
    sub_080AA508(param_1,1,uVar2 * 0x8000000 + 0x28000000 >> 0x18);
    sub_080032EC(0x38);
  }
  else {
    if ((uVar2 + 1 & 1) == 0) goto LAB_080aa862;
LAB_080aa844:
    sub_080AA508(param_1,1,uVar2 * -8 - 0x28 & 0xff);
    sub_080032EC(0x38);
  }
  *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
LAB_080aa880:
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
    sub_080AA58C(param_1);
  }
  return in_lr;
}

