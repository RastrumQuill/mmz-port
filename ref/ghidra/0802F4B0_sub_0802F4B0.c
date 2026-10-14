// sub_0802F4B0 at 0x0802F4B0 (thumb)

undefined4 sub_0802F4B0(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(undefined *)(param_1 + 0x13) = 3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    *(undefined *)(param_1 + 0xc3) = 1;
    sub_08029778(param_1,0xc);
    *(undefined *)(param_1 + 0x12) = 0xb;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 2:
    cVar1 = *(char *)(param_1 + 0x12);
    if (cVar1 == '\v') {
      sub_080785C8(*(undefined4 *)(param_1 + 0x24),9);
    }
    else if (cVar1 == '\x05') {
      sub_080785C8(*(undefined4 *)(param_1 + 0x24),10);
    }
    else if (cVar1 == '\x01') {
      sub_080785C8(*(undefined4 *)(param_1 + 0x24),3);
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      *(undefined *)(param_1 + 0xc3) = 0;
      local_18 = *(int *)(param_1 + 0x4c) + -0x2800;
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        local_18 = *(int *)(param_1 + 0x4c) + 0x2800;
      }
      local_14 = *(int *)(param_1 + 0x50) + -0x1000;
      uVar2 = *(byte *)(param_1 + 0x13) - 1 & 0xff;
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        cVar1 = (&DAT_082ad2dc)[uVar2];
      }
      else {
        cVar1 = -0x80 - (&DAT_082ad2dc)[uVar2];
      }
      sub_08001EAC(0x88);
      sub_08078690(param_1,&local_18,cVar1,*(undefined4 *)(&DAT_082ad2d0 + uVar2 * 4),uVar2);
    }
    sub_080297C0(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x13) + -1;
      *(char *)(param_1 + 0x13) = cVar1;
      if (cVar1 == '\0') {
        *(undefined *)(param_1 + 0xe) = 5;
      }
      else {
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
    }
    break;
  case 3:
    *(undefined *)(param_1 + 0x12) = 0xc;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 4:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      *(undefined *)(param_1 + 0xe) = 1;
    }
    break;
  case 5:
    *(undefined *)(param_1 + 0x12) = 0x12;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 6:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      *(undefined *)(param_1 + 0xd) = 0xb;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

