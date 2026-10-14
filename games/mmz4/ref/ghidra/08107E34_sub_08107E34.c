// sub_08107E34 at 0x08107E34 (thumb)

undefined4 sub_08107E34(int param_1)

{
  undefined2 uVar1;
  undefined4 in_lr;
  
  if (((byte)(*(char *)(param_1 + 0x10) - 7U) < 2) &&
     (*(char *)(DAT_0202dbf0 + 0xbc + (uint)(*(char *)(param_1 + 0x10) == '\b')) != -1)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08868f54)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  else {
    if ((DAT_0202e8b4 & 4) != 0) {
      if (*(char *)(param_1 + 0x10) == '\x03') {
        *(undefined *)(param_1 + 0x10) = 0;
      }
      if (*(char *)(param_1 + 0x10) == '\x04') {
        *(undefined *)(param_1 + 0x10) = 1;
      }
    }
    uVar1 = *(undefined2 *)(&DAT_08868f70 + (uint)*(byte *)(param_1 + 0x10) * 2);
    sub_0801CC9C(param_1);
    sub_0801CF00(param_1,uVar1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 7;
    sub_08005760(param_1 + 0x74,&DAT_08868f84,param_1 + 0x54,0x40);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0x8108291;
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0xb8) = 0;
    if (*(byte *)(param_1 + 0x11) < 2) {
      *(undefined4 *)(param_1 + 0x60) = 0xfffffc00;
    }
    else {
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    *(undefined *)(param_1 + 0x12) = 0xf0;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08868f54)[*(byte *)(param_1 + 9)] + 4);
    sub_08107F58(param_1);
  }
  return in_lr;
}

