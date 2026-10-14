// sub_08039008 at 0x08039008 (thumb)

undefined4 sub_08039008(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0xb4);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sVar1 = CONCAT11(*(undefined *)(iVar3 + 0x1e),*(undefined *)(iVar3 + 0x70));
    if (sVar1 == 0x1b00) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      if (1 < *(byte *)(param_1 + 0x12)) {
        sub_080177F4(param_1);
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
        sub_080073A0(param_1 + 0x74,
                     *(undefined4 *)
                      (*(char *)(param_1 + 0x71) * 4 +
                      *(int *)(&DAT_0835ca10 + (uint)*(byte *)(param_1 + 0x10) * 4)),
                     *(undefined *)(param_1 + 0xc1),*(undefined *)(param_1 + 0xc0),
                     *(undefined *)(param_1 + 0xc2),0xffffffff);
        *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
        return in_lr;
      }
      *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) + 1;
      return in_lr;
    }
    if (sVar1 == 0x1b01) {
      if (*(char *)(param_1 + 0x10) == '\x16') {
        sub_08017700(param_1,0x6401);
      }
      else {
        sub_08017700(param_1,0x6403);
        if ((*(char *)(iVar3 + 0xc2) == '\x01') && (*(char *)(iVar3 + 0x13a) == '\0')) {
          sub_0803CA84(iVar3,param_1 + 0x54,0);
          sub_0803CA84(iVar3,param_1 + 0x54,1);
        }
      }
      sub_080177F4(param_1);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar2 = *(undefined4 *)((&DAT_0835b5d0)[*(byte *)(param_1 + 9)] + 0xc);
  }
  else {
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    uVar2 = *(undefined4 *)((&DAT_0835b5d0)[*(byte *)(param_1 + 9)] + 8);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  return in_lr;
}

