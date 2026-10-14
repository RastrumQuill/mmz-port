// sub_08041A70 at 0x08041A70 (thumb)

undefined4 sub_08041A70(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_08007390(param_1 + 0x74,&DAT_0835e6bc);
        sub_080BA04C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        uVar2 = 0x280;
        *(undefined4 *)(param_1 + 0x5c) = 0x280;
        if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
          uVar2 = 0xfffffd80;
        }
        *(undefined4 *)(param_1 + 0x5c) = uVar2;
        *(undefined4 *)(param_1 + 0x60) = 0xfffffd00;
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x2000;
        sub_08017700(param_1,0xa40e);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x54) = iVar3;
      if (0xc000 < (*(int *)(param_1 + 0xbc) - iVar3) + 0x6000U) {
        *(int *)(param_1 + 0x54) = iVar3 - *(int *)(param_1 + 0x5c);
      }
      iVar3 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar3;
      if (0x700 < iVar3) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
      iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x58) = iVar3;
      if ((*(int *)(param_1 + 0xc0) + -0x800) - iVar3 < 0) {
        sub_08017700(param_1,0xa400);
        sub_080177F4(param_1);
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xc0);
        *(undefined *)(param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      sub_080177F4(param_1);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_0800471C(0x40);
    sub_08007390(param_1 + 0x74,&DAT_0835e71c);
    sub_08017700(param_1,0xa40d);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

