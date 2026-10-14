// sub_0805F46C at 0x0805F46C (thumb)

undefined4 sub_0805F46C(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  cVar1 = *(char *)(param_1 + 0x12) + '\x01';
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\x14') {
    local_14 = *(int *)(param_1 + 0x54);
    local_10 = *(int *)(param_1 + 0x58);
    iVar2 = sub_080FE10C((*(int *)(DAT_0202f5c0 + 0x54) - local_14) * 0x100 >> 0x10,
                         ((*(int *)(DAT_0202f5c0 + 0x58) - local_10) + -0x1800) * 0x100 >> 0x10);
    uVar3 = (uint)(iVar2 << 0x10) >> 0x18;
    if (0x80 < uVar3) {
      if (uVar3 < 0xc1) {
        uVar3 = 0x80;
      }
      else {
        uVar3 = 0;
      }
    }
    sub_0800471C(0xfc);
    sub_080AF76C(&local_14,0x300,uVar3);
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    sub_08060784(param_1,3,2,1);
    *(undefined2 *)(param_1 + 0xe) = 5;
  }
  return in_lr;
}

