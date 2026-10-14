// sub_08078778 at 0x08078778 (thumb)

undefined4 sub_08078778(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  undefined local_30 [4];
  int local_2c;
  undefined4 local_28;
  byte *local_24;
  undefined4 uStack_4;
  
  bVar1 = *(byte *)(param_1 + 0xc5);
  uVar3 = bVar1 + 1 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08078ED4(param_1,0);
    *(undefined4 *)(param_1 + 100) = 400;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined *)(param_1 + 0x12) = 8;
    *(undefined *)(param_1 + 0x13) = 0xff;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                (&DAT_08859dac)[*(ushort *)(&DAT_08859db4 + (uint)*(byte *)(param_1 + 0xc4) * 2)]));
  sub_08078E20(param_1);
  if (*(int *)(param_1 + 100) != 0) {
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
  }
  sub_080025D8(0x84);
  uStack_4 = in_lr;
  if ((*(char *)(param_1 + 0x12) != '\0') &&
     (iVar2 = sub_08128954(*(undefined4 *)(param_1 + 100),0x30), iVar2 == 0)) {
    sub_08128B5C(local_30,&DAT_081292e5,3);
    iVar5 = 0;
    iVar6 = (uint)bVar1 * 2;
    iVar2 = *(int *)(param_1 + 0xcc);
    local_24 = (byte *)(iVar2 + 0xb4);
    do {
      if ((((int)(uint)*local_24 >> (uint)(byte)(&DAT_08859dfc)[iVar5 + iVar6] & 1U) == 0) ||
         (((int)(uint)(*local_24 & *(byte *)(iVar2 + 0xb5)) >>
           (uint)(byte)(&DAT_08859dfc)[iVar5 + iVar6] & 1U) != 0)) {
        local_30[iVar5] = 0;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 2);
    if (*(byte *)(param_1 + 0x13) != 0xff) {
      local_30[*(byte *)(param_1 + 0x13)] = 0;
    }
    iVar2 = sub_08079198(local_30,3);
    if (iVar2 == -1) {
      iVar2 = 2;
    }
    if (iVar2 < 2) {
      pbVar4 = (byte *)(*(int *)(param_1 + 0xcc) + 0xbb);
      *pbVar4 = (byte)(1 << (&DAT_08859dfc)[iVar2 + iVar6]) | *pbVar4;
    }
    else {
      local_2c = *(int *)(param_1 + 0x54) + (uVar3 * 2 + -1) * 0x1400;
      local_28 = *(undefined4 *)(param_1 + 0x58);
      sub_080E8520(param_1,&local_2c,0,uVar3);
      *(undefined4 *)(param_1 + 0x68) = 0x10;
    }
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x13) = (char)iVar2;
  }
  if ((*(int *)(param_1 + 0x68) != 0) &&
     (iVar2 = *(int *)(param_1 + 0x68) + -1, *(int *)(param_1 + 0x68) = iVar2, iVar2 == 0)) {
    local_2c = *(int *)(param_1 + 0x54) + (uVar3 * 2 + -1) * 0x800;
    local_28 = *(undefined4 *)(param_1 + 0x58);
    sub_080CCEF8(&local_2c,0);
  }
  if (*(int *)(param_1 + 100) == 0) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return uStack_4;
}

