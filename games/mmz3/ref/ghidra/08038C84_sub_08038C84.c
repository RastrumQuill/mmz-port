// sub_08038C84 at 0x08038C84 (thumb)

undefined4 sub_08038C84(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0xb4);
  if (*(char *)(iVar2 + 0xd) == '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
    if (*(char *)(param_1 + 0xe) == '\0') {
      if (CONCAT11(*(undefined *)(iVar2 + 0x1e),*(undefined *)(iVar2 + 0x70)) != 0x1800) {
        if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) == 0x6100) {
          sub_08017700(param_1,0x6101);
        }
        else {
          sub_08017700(param_1,0x6103);
        }
        sub_080177F4(param_1);
        sub_08007390(param_1 + 0x74,&DAT_0835c724);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
        return in_lr;
      }
      sub_080177F4(param_1);
      bVar3 = *(byte *)(param_1 + 0x12) >> 2;
      if (2 < bVar3) {
        bVar3 = 2;
      }
      sub_080073A0(param_1 + 0x74,
                   **(undefined4 **)(&DAT_0835ca10 + (uint)*(byte *)(param_1 + 0x10) * 4),
                   *(undefined *)(param_1 + 0xc1),*(undefined *)(param_1 + 0xc0),
                   *(undefined *)(param_1 + 0xc2),bVar3 + 1);
      return in_lr;
    }
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    uVar1 = *(undefined4 *)((&DAT_0835b5d0)[*(byte *)(param_1 + 9)] + 8);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar1 = *(undefined4 *)((&DAT_0835b5d0)[*(byte *)(param_1 + 9)] + 0xc);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  return in_lr;
}

