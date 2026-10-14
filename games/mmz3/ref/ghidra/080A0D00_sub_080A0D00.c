// sub_080A0D00 at 0x080A0D00 (thumb)

undefined4 sub_080A0D00(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_0836795c);
    sub_08017700(param_1,0x3704);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080177F4(param_1);
  iVar1 = *(int *)(param_1 + 0x58) + -0x700;
  *(int *)(param_1 + 0x58) = iVar1;
  if (iVar1 < *(int *)(param_1 + 0xb8) + -0xc000) {
    if (*(char *)(param_1 + 0x12) == '\x02') {
      sub_0807A208(uVar2,*(int *)(param_1 + 0x54) +
                         (uint)*(byte *)(param_1 + 0x13) * 0x7600 + -0x3b00);
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

