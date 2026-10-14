// sub_0811EBC0 at 0x0811EBC0 (thumb)

undefined4 sub_0811EBC0(int param_1)

{
  undefined uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((DAT_02000764 & 1) == 0) {
    if ((DAT_02000766 & 0x40) == 0) {
      if ((DAT_02000766 & 0x80) != 0) {
        uVar1 = sub_08128954(*(byte *)(param_1 + 0xdce) + 1,3);
        *(undefined *)(param_1 + 0xdce) = uVar1;
        sub_08002B10(1);
      }
    }
    else {
      uVar1 = sub_08128954(*(byte *)(param_1 + 0xdce) + 2,3);
      *(undefined *)(param_1 + 0xdce) = uVar1;
      sub_08002B10(1);
    }
    sub_0810D214(&DAT_0886af56,0x11,7);
    if (*(char *)(param_1 + 0xdce) == '\0') {
      iVar2 = 0x15c;
    }
    else {
      if (*(char *)(param_1 + 0xdce) != '\x01') {
        sub_0810D214(&DAT_0886b010,1,0x12);
        return in_lr;
      }
      iVar2 = 0x15e;
    }
    sub_0810D214(&DAT_0886a17c + *(ushort *)((int)&DAT_08869ac0 + iVar2),1,0x12);
  }
  else {
    sub_08002B10(2);
    *(char *)(param_1 + 2) = *(char *)(param_1 + 0xdce) + '\x01';
    *(undefined *)(param_1 + 3) = 0;
    *(undefined *)(param_1 + 0xdcf) = 0;
  }
  return in_lr;
}

