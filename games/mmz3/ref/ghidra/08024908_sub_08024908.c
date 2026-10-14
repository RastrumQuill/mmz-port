// sub_08024908 at 0x08024908 (thumb)

undefined8 sub_08024908(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 1) == '\0') {
    uVar4 = (uint)DAT_020301a0;
    bVar1 = (&DAT_0835a370)[uVar4];
    if (bVar1 == 0) goto LAB_080249cc;
    if (bVar1 != 2) {
      if (bVar1 < 3) {
        if (bVar1 == 1) {
          uVar3 = 1 << (&DAT_0835a382)[uVar4];
          if ((int)(*(byte *)(DAT_0203734c + 0xcb) & uVar3) >> (&DAT_0835a382)[uVar4] != 0)
          goto LAB_080249d4;
          *(byte *)(DAT_0203734c + 0xcb) = *(byte *)(DAT_0203734c + 0xcb) | (byte)uVar3;
        }
      }
      else if (bVar1 == 3) {
        uVar3 = 1 << (&DAT_0835a382)[uVar4];
        if ((int)(*(byte *)(DAT_0203734c + 0xcd) & uVar3) >> (&DAT_0835a382)[uVar4] != 0)
        goto LAB_080249d4;
        *(byte *)(DAT_0203734c + 0xcd) = *(byte *)(DAT_0203734c + 0xcd) | (byte)uVar3;
      }
LAB_080249b6:
      sub_080EA2C8(*(undefined2 *)(&DAT_0835a394 + (uint)DAT_020301a0 * 2),0);
      *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
      goto LAB_080249cc;
    }
    uVar3 = 1 << (&DAT_0835a382)[uVar4];
    if ((int)(*(byte *)(DAT_0203734c + 0xcc) & uVar3) >> (&DAT_0835a382)[uVar4] == 0) {
      *(byte *)(DAT_0203734c + 0xcc) = *(byte *)(DAT_0203734c + 0xcc) | (byte)uVar3;
      goto LAB_080249b6;
    }
  }
  else {
LAB_080249cc:
    if (DAT_02030c1a != 0) {
      uVar2 = 1;
      goto LAB_080249e6;
    }
  }
LAB_080249d4:
  uVar2 = 0;
LAB_080249e6:
  return CONCAT44(in_lr,uVar2);
}

