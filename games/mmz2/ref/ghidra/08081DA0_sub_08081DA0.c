// sub_08081DA0 at 0x08081DA0 (thumb)

undefined4 sub_08081DA0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = DAT_0202e130;
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08081F98(param_1,0x10);
    sub_080127E4(param_1,0x6605);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if ((*(uint *)(param_1 + 0x8c) & 0x800) == 0) {
    if ((*(char *)(param_1 + 0x12) != '\0') && (iVar1 != 0)) {
      sub_08022EA8(iVar1,0,(uint)*(byte *)(param_1 + 0xbf) * 0x400 + -0x200,0xfffffa80,0,0x40,0x24,0
                  );
      *(undefined *)(param_1 + 0x12) = 0;
    }
  }
  else if (iVar1 != 0) {
    *(int *)(iVar1 + 0x54) = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 100);
    *(int *)(iVar1 + 0x58) = (*(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x68)) + -0xd00;
    if (*(char *)(param_1 + 0x71) == '\x01') {
      *(undefined *)(param_1 + 0xb5) = 0;
      sub_08081F98(param_1,0);
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
    }
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xb5) = 0;
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

