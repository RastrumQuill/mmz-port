// sub_08075C70 at 0x08075C70 (thumb)

undefined4 sub_08075C70(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined *)(param_1 + 0xb9) = 0;
  }
  if (*(char *)(param_1 + 0x10) == '\x03') {
    *(undefined *)(param_1 + 0xb9) = 1;
    *(undefined *)(param_1 + 0x10) = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_083639b0)[*(byte *)(param_1 + 0x10)];
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801749C(param_1);
  *(undefined4 *)(param_1 + 0xb4) = 0;
  bVar1 = *(byte *)(param_1 + 0x10);
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        sub_08075904(param_1,*(undefined *)(param_1 + 0xb9));
        if (((DAT_02002443 & 8) == 0) || ((DAT_02030104 & 0x40) != 0)) {
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
          uVar2 = 4;
        }
        else {
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
          uVar2 = 8;
        }
        sub_0800736C(param_1 + 0x74,&DAT_08363900,param_1 + 0x54,uVar2);
        *(int *)(param_1 + 0xa0) = param_1;
        *(undefined4 *)(param_1 + 0x98) = 0;
        *(undefined *)(param_1 + 0xb8) = 0;
        *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x54);
      }
      goto LAB_08075d84;
    }
    if (bVar1 != 2) goto LAB_08075d84;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_0800736C(param_1 + 0x74,&DAT_08363900,param_1 + 0x54,2);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x8075acd;
LAB_08075d84:
  sub_08075D98(param_1);
  return in_lr;
}

