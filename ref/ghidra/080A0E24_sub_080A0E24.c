// sub_080A0E24 at 0x080A0E24 (thumb)

undefined4 sub_080A0E24(int param_1)

{
  undefined2 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    sub_08001EE8((int)*(short *)(param_1 + 200));
    *(short *)(param_1 + 200) = -1;
  }
  sub_0809C980(param_1);
  if ((*(ushort *)(param_1 + 0x90) & 4) != 0) {
    if ((DAT_02022b62 & 0x40) != 0) {
      if ((int)(DAT_02022af2 - 1) < 0) {
        return in_lr;
      }
      if ((DAT_02022b60 == 0xd) && ((int)(DAT_02022af2 - 2) < 0)) {
        return in_lr;
      }
      uVar1 = sub_08001EAC(0x53);
      *(undefined2 *)(param_1 + 200) = uVar1;
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined4 *)(param_1 + 0x58) = 0xfffffe00;
      DAT_02022af2 = DAT_02022af2 - 1;
    }
    if (((DAT_02022b62 & 0x80) != 0) && (DAT_02022af2 + 1 < 6)) {
      uVar1 = sub_08001EAC(0x53);
      *(undefined2 *)(param_1 + 200) = uVar1;
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined4 *)(param_1 + 0x58) = 0x200;
      DAT_02022af2 = DAT_02022af2 + 1;
    }
  }
  return in_lr;
}

