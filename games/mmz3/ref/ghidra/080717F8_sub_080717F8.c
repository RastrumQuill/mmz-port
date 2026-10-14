// sub_080717F8 at 0x080717F8 (thumb)

undefined4 sub_080717F8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if ((iVar1 == 0) || (*(byte *)(iVar1 + 0xc) < 2)) {
    if (*(char *)(param_1 + 0xe) == '\0') {
      sub_0800471C(0x34);
      if (iVar1 != 0) {
        if ((*(int *)(iVar1 + 0x28) == 0) &&
           (*(int *)(iVar1 + 0x58) - *(int *)(param_1 + 0x58) < 0x2800)) {
          *(int *)(iVar1 + 0x28) = param_1;
          sub_08017700(param_1,0x2200);
        }
        else {
          iVar1 = 0;
          *(undefined4 *)(param_1 + 0x2c) = 0;
        }
      }
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x140;
    if (*(int *)(param_1 + 0x54) < 0x268000) {
      *(undefined4 *)(param_1 + 0x54) = 0x268000;
    }
    if (0x275000 < *(int *)(param_1 + 0x54)) {
      *(undefined4 *)(param_1 + 0x54) = 0x275000;
    }
    sub_080177F4(param_1);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(param_1 + 0x54);
      *(int *)(iVar1 + 0x58) = *(int *)(param_1 + 0x58) + 0x2200;
    }
    if (*(int *)(param_1 + 0x58) < 0x1a000) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
      if (iVar1 != 0) {
        *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfc;
        *(undefined4 *)(iVar1 + 0x8c) = 0;
        *(undefined4 *)(iVar1 + 0x90) = 0;
        *(undefined *)(iVar1 + 0x94) = 0;
        *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfb;
        *(undefined4 *)(iVar1 + 0xc) = 3;
        *(undefined4 *)(iVar1 + 0x14) =
             *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(iVar1 + 9) * 4) + 0xc);
      }
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

