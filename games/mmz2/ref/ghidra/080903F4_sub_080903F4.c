// sub_080903F4 at 0x080903F4 (thumb)

undefined4 sub_080903F4(int param_1)

{
  undefined uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar2 = *(uint *)(param_1 + 0x8c);
    if ((uVar2 & 0x10000) == 0) {
      *(undefined *)(param_1 + 0xd) = 0;
    }
    else {
      if ((uVar2 & 0x8000) == 0) {
        uVar1 = 1;
      }
      else {
        uVar1 = 2;
      }
      *(undefined *)(param_1 + 0xd) = uVar1;
      *(undefined *)(param_1 + 0xd) = 1;
    }
    *(uint *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080EF118(param_1,*(undefined4 *)(&DAT_08342244 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

