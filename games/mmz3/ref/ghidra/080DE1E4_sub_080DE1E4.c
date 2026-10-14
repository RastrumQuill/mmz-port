// sub_080DE1E4 at 0x080DE1E4 (thumb)

undefined4 sub_080DE1E4(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  
  sub_080177F4();
  if (DAT_0202f4a4 != '\0') {
    if (*(char *)(param_1 + 0xd) == '\0') {
      sub_0801ACF8(1,param_1 + 0x54);
      sub_08017700(param_1,0x9a00);
      *(undefined *)(param_1 + 0x12) = 10;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    if (*(int *)(param_1 + 0x5c) < 0x100) {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 8;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) {
      DAT_0202f4a4 = '\x02';
    }
    uVar2 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
    if (0x4000 < uVar2) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      sub_080DE284(param_1);
    }
  }
  return in_lr;
}

