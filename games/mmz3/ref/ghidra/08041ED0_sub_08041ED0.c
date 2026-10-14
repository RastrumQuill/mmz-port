// sub_08041ED0 at 0x08041ED0 (thumb)

undefined4 sub_08041ED0(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_0800471C(0x6b);
        sub_08007390(param_1 + 0x74,&DAT_0835e68c);
        if (*(byte *)(DAT_02030160 + 1) < 5) {
          iVar2 = *(int *)(param_1 + 0x54) + -0x2500;
          if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
            iVar2 = *(int *)(param_1 + 0x54) + 0x2500;
          }
          sub_0809ED18(iVar2,*(int *)(param_1 + 0x58) + -0xd00,*(byte *)(param_1 + 10) >> 4 & 1,0);
        }
        else {
          iVar2 = *(int *)(param_1 + 0x54) + -0x4c00;
          if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
            iVar2 = *(int *)(param_1 + 0x54) + 0x4c00;
          }
          sub_0809ED18(iVar2,*(int *)(param_1 + 0x58) + -0xc00,*(byte *)(param_1 + 10) >> 4 & 1,1);
        }
        sub_08017700(param_1,0xa415);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      sub_080177F4(param_1);
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 0xf;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    if (*(byte *)(DAT_02030160 + 1) < 5) {
      sub_08007390(param_1 + 0x74,&DAT_0835e74c);
      sub_08017700(param_1,0xa414);
    }
    else {
      sub_08007390(param_1 + 0x74,&DAT_0835e794);
      sub_08017700(param_1,0xa417);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

