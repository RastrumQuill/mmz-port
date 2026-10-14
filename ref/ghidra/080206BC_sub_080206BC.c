// sub_080206BC at 0x080206BC (thumb)

undefined4 sub_080206BC(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xf) = 1;
  uVar1 = (uint)*(char *)(param_1 + 299);
  if (*(char *)(param_1 + 0x115) == -0x69) {
    sub_08018BE8(param_1,0x96);
  }
  else {
    if (*(char *)(param_1 + 0x115) != -0x67) {
      if (uVar1 == 0) {
        uVar1 = 0xffffffff;
        if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
          uVar1 = 1;
        }
        sub_08018BE8(param_1,0x96);
      }
      else if (-((int)~uVar1 >> 0x1f) == (*(byte *)(param_1 + 10) >> 4 & 1)) {
        sub_08018BE8(param_1,0x98);
      }
      else {
        sub_08018BE8(param_1,0x96);
      }
      goto LAB_0802074c;
    }
    sub_08018BE8(param_1,0x98);
  }
  if ((uVar1 == 0) && (uVar1 = 0xffffffff, (*(byte *)(param_1 + 10) & 0x10) == 0)) {
    uVar1 = 1;
  }
LAB_0802074c:
  *(bool *)(param_1 + 0x117) = 0 < (int)uVar1;
  if ((*(byte *)(param_1 + 0x17a) & 8) == 0) {
    *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + uVar1 * 0x100;
    sub_0801A0A4(param_1 + 0x4c,param_1 + 0xc4,*(undefined4 *)(param_1 + 0x108),
                 *(byte *)(param_1 + 10) >> 4 & 1,1,1);
  }
  sub_08001EAC(0xc);
  sub_080207AC(param_1);
  return in_lr;
}

