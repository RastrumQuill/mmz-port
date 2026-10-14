// sub_0802E654 at 0x0802E654 (thumb)

undefined4 sub_0802E654(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_080343B0(param_1,0xffffe000,0xffffee00,*(byte *)(param_1 + 10) >> 4 & 1);
  if (iVar1 == 0) {
    *(undefined *)(param_1 + 0xec) = 0;
  }
  else {
    if (*(short *)(param_1 + 0xe8) == 0x100) {
      sub_080177CC(param_1,0x900,(short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72));
    }
    else {
      sub_08017700(param_1,0x900);
    }
    *(undefined *)(param_1 + 0x129) = 2;
    *(undefined *)(param_1 + 0xed) = 1;
    sub_0802E6DC(param_1);
  }
  return in_lr;
}

