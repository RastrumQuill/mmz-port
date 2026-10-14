// sub_080249EC at 0x080249EC (thumb)

undefined8 sub_080249EC(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(DAT_0203734c + 0xce) != '\x01') {
    if (*(char *)(param_1 + 1) == '\0') {
      uVar3 = *(uint *)(&DAT_0835a3b8 + (uint)DAT_020301a0 * 4);
      if ((uVar3 != 0xff) && (4 < *(uint *)(param_1 + 0x10))) {
        uVar2 = 1 << (uVar3 & 0xff);
        if ((int)(*(ushort *)(DAT_0203734c + 200) & uVar2) >> (uVar3 & 0xff) != 0)
        goto LAB_08024a54;
        *(ushort *)(DAT_0203734c + 200) = *(ushort *)(DAT_0203734c + 200) | (ushort)uVar2;
        sub_080EA2C8(*(undefined2 *)(&DAT_0835a400 + (uint)DAT_020301a0 * 2),0);
        *(undefined4 *)(param_1 + 0xc) = 1;
      }
      *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
    }
    if (DAT_02030c1a != 0) {
      uVar1 = 1;
      goto LAB_08024a72;
    }
  }
LAB_08024a54:
  uVar1 = 0;
LAB_08024a72:
  return CONCAT44(in_lr,uVar1);
}

