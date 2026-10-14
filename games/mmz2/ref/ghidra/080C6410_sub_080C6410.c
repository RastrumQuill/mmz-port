// sub_080C6410 at 0x080C6410 (thumb)

undefined4 sub_080C6410(int param_1)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
LAB_080c6440:
    sub_080128D4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) goto LAB_080c64ba;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x40;
    if (*(byte *)(param_1 + 0x13) < 0x10) {
      *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) + 1;
    }
    iVar2 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (iVar2 + -0x2800 <= *(int *)(param_1 + 0x58)) goto LAB_080c64ba;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) goto LAB_080c64ba;
      sub_080127E4(param_1,0x8d00);
      *(undefined *)(param_1 + 0x12) = 0;
      *(undefined *)(param_1 + 0x13) = 4;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      goto LAB_080c6440;
    }
    if (bVar1 != 2) goto LAB_080c64ba;
    sub_080128D4(param_1);
    if (*(byte *)(param_1 + 0x13) < 0x10) {
      *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) + 1;
    }
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) goto LAB_080c64ba;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0xc0;
    uVar4 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
    if (uVar4 < 0x1000) goto LAB_080c64ba;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
LAB_080c64ba:
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  cVar3 = *(char *)(param_1 + 0x12);
  uVar4 = (uint)*(byte *)(param_1 + 0x13) << 0x18;
  if (*(byte *)(param_1 + 0x13) < 7) {
    cVar3 = cVar3 + '\x1f';
  }
  *(char *)(param_1 + 0x12) = cVar3;
  *(uint *)(param_1 + 100) =
       *(int *)(param_1 + 0x54) +
       (uVar4 >> 0x19) * (int)(short)(&DAT_080ef450)[*(byte *)(param_1 + 0x12) + 0x40 & 0xff];
  *(uint *)(param_1 + 0x68) =
       *(int *)(param_1 + 0x58) -
       (uVar4 >> 0x1a) * (int)(short)(&DAT_080ef450)[(*(byte *)(param_1 + 0x12) & 0x7f) * 2];
  return in_lr;
}

