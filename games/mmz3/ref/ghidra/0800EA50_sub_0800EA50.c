// sub_0800EA50 at 0x0800EA50 (thumb)

undefined4 sub_0800EA50(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(int *)(param_1 + 0x38) < 0x691) {
      if (*(int *)(param_1 + 0x34) < 0x780) {
        *(undefined4 *)(param_1 + 0x44) = 0xe0;
        *(undefined4 *)(param_1 + 0x48) = 0xe0;
        *(undefined4 *)(param_1 + 0x4c) = 0xd2;
        *(undefined4 *)(param_1 + 0x50) = 0x3c;
        if ((DAT_02030105 & 0x10) != 0) {
          *(undefined4 *)(param_1 + 0x4c) = 0x672;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x44) = 0x100;
        *(undefined4 *)(param_1 + 0x48) = 0x100;
        *(undefined4 *)(param_1 + 0x4c) = 0x780;
        *(undefined4 *)(param_1 + 0x50) = 0;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x44) = 0xc0;
      *(undefined4 *)(param_1 + 0x48) = 0xc0;
      *(undefined4 *)(param_1 + 0x4c) = 0x3c;
      *(undefined4 *)(param_1 + 0x50) = 0x1e0;
    }
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0x78000;
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (DAT_0202f4a4 != '\0') {
    iVar1 = *(int *)(param_1 + 0x68) + 4;
    *(int *)(param_1 + 0x68) = iVar1;
    if (0x700 < iVar1) {
      *(undefined4 *)(param_1 + 0x68) = 0x700;
    }
    iVar1 = *(int *)(param_1 + 0x6c) - *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x6c) = iVar1;
    iVar2 = *(int *)(param_1 + 0x70) + *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x70) = iVar2;
    *(int *)(param_1 + 0x4c) = iVar1 >> 8;
    *(int *)(param_1 + 0x50) = iVar2 >> 8;
  }
  return in_lr;
}

