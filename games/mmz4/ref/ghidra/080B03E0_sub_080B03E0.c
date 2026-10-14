// sub_080B03E0 at 0x080B03E0 (thumb)

undefined4 sub_080B03E0(int param_1)

{
  undefined uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if ((DAT_0202cac0 & 0xf) == 0) {
      sub_0801CF00(param_1,0xb201);
      uVar1 = 7;
    }
    else {
      sub_0801CF00(param_1,0xb20b);
      uVar1 = 1;
    }
    *(undefined *)(param_1 + 0xb6) = uVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0x72) == '\x01') {
    if (*(char *)(param_1 + 0x71) == '\x04') {
      sub_08005784(param_1 + 0x74,&DAT_0885fd88);
      *(undefined *)(param_1 + 0x11) = 1;
    }
    if (*(char *)(param_1 + 0x71) == '\t') {
      sub_08005784(param_1 + 0x74,&DAT_0885fd58);
      *(undefined *)(param_1 + 0x11) = 0;
    }
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    sub_08005784(param_1 + 0x74,&DAT_0885fe30);
    sub_08002B10(0xe8);
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

