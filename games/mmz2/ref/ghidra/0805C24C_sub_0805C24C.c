// sub_0805C24C at 0x0805C24C (thumb)

undefined4 sub_0805C24C(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa913);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    sub_08006E08(param_1 + 0x74,&DAT_0833cd0c);
    *(undefined *)(param_1 + 0xbe) = 0;
    iVar1 = *(int *)(param_1 + 200);
    if (iVar1 != 0) {
      *(undefined *)(iVar1 + 0x11) = 1;
      *(int *)(param_1 + 200) = 0;
    }
    uVar2 = 0xfffffc00;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar2 = 0x400;
    }
    iVar1 = *(int *)(param_1 + 0xd0);
    if (((*(uint *)(iVar1 + 0x8c) & 0x200) == 0) && (*(short *)(iVar1 + 0xa4) != 0)) {
      sub_08022EA8(iVar1,0,uVar2,0xfffffc00,0,0x40,0x24,0);
    }
    sub_08015518(8,param_1 + 0x54);
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 10;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

