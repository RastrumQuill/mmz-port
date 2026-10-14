// sub_080A2D18 at 0x080A2D18 (thumb)

undefined4 sub_080A2D18(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_08007390(param_1 + 0x74,&DAT_08367c24);
        *(undefined *)(param_1 + 0x12) = 0xff;
        *(undefined *)(param_1 + 0x13) = 0;
        sub_080175BC(param_1);
        sub_080177CC(param_1,0x4606,3,1);
        *(undefined4 *)(param_1 + 0x5c) = 0x20;
        uVar2 = 0x20;
        if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
          uVar2 = 0xffffffe0;
        }
        *(undefined4 *)(param_1 + 0x5c) = uVar2;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) goto LAB_080a2e42;
      bVar1 = *(char *)(param_1 + 0x13) + 1;
      *(byte *)(param_1 + 0x13) = bVar1;
      if ((bVar1 & 2) == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xfe;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 1;
      }
      *(byte *)(param_1 + 10) = bVar1;
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -4;
      *(ushort *)(param_1 + 0x50) = (ushort)*(byte *)(param_1 + 0x12);
      *(ushort *)(param_1 + 0x52) = (ushort)*(byte *)(param_1 + 0x12);
      if (*(byte *)(param_1 + 0x12) < 8) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
        *(undefined4 *)(param_1 + 0x8c) = 0;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined *)(param_1 + 0x94) = 0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
        *(undefined4 *)(param_1 + 0xc) = 3;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 0xc);
      }
      sub_080177F4(param_1);
      goto LAB_080a2e42;
    }
    if (bVar1 != 0) goto LAB_080a2e42;
    sub_08007390(param_1 + 0x74,&DAT_08367c6c);
    sub_08017700(param_1,0x4606);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
LAB_080a2e42:
  if ((*(uint *)(param_1 + 0x8c) & 4) != 0) {
    sub_080A2920();
    sub_080A2968(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(uint *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

