// sub_0802CC84 at 0x0802CC84 (thumb)

undefined4 sub_0802CC84(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  int local_2c;
  int local_28;
  int local_24;
  
  if ((*(ushort *)(param_1 + 0x90) & 0x100) != 0) {
    iVar7 = *(int *)(*(int *)(param_1 + 0x88) + 0x40);
    bVar2 = *(byte *)(param_1 + 10) >> 4;
    iVar5 = *(int *)(iVar7 + 0x4c) + -0x2c0 + (bVar2 & 1) * 0x580;
    *(int *)(iVar7 + 0x4c) = iVar5;
    if ((bVar2 & 1) == 0) {
      iVar5 = sub_08008120(iVar5 + -0x1000,*(int *)(param_1 + 0x50) + -0x400);
      if (iVar5 < 1) goto LAB_0802cd0c;
    }
    else {
      iVar5 = sub_08007EE0(iVar5 + 0x1000,*(int *)(param_1 + 0x50) + -0x400);
      if (-1 < iVar5) goto LAB_0802cd0c;
    }
    *(int *)(iVar7 + 0x4c) = *(int *)(iVar7 + 0x4c) + iVar5;
  }
LAB_0802cd0c:
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_0800561C(param_1 + 0x74,&DAT_082acebc);
    bVar1 = *(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c);
    *(bool *)(param_1 + 0x44) = bVar1;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    sub_08029778(param_1,1);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    sub_080297C0(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    break;
  case 2:
    sub_080596B8(param_1,4,8);
    *(uint *)(param_1 + 0xcc) = *(uint *)(param_1 + 0xcc) | 8;
    sub_08029778(param_1,2);
    *(undefined4 *)(param_1 + 0x54) = 0xfffffd40;
    uVar6 = 0xfffffd40;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar6 = 0x2c0;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar6;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    bVar2 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar2;
    if ((bVar2 & 3) == 0) {
      local_2c = *(int *)(param_1 + 0x4c) + 0x2800;
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        local_2c = *(int *)(param_1 + 0x4c) + -0x2800;
      }
      uVar4 = DAT_02022890 * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar4 & 0x7fffffff;
      local_28 = *(int *)(param_1 + 0x50) + ((uVar4 * 2 >> 0x11 & 3) - 4) * -0x100;
      sub_0808827C(3,&local_2c);
    }
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    cVar3 = sub_0802B6E8(param_1);
    if (cVar3 == '\x01') {
      sub_0800561C(param_1 + 0x74,&DAT_082ace84);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    sub_080297C0(param_1);
    break;
  case 4:
    *(uint *)(param_1 + 0xcc) = *(uint *)(param_1 + 0xcc) & 0xfffffff7;
    local_24 = param_1 + 0x4c;
    iVar5 = 4;
    do {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar7 = sub_08008BC0(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
      }
      else {
        iVar7 = sub_080089EC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
      }
      uVar4 = DAT_02022890 * 0x343fd + 0x269ec3;
      local_2c = iVar7 + -0x400 + (uVar4 * 2 >> 0x11 & 7) * 0x100;
      iVar8 = *(int *)(DAT_0202286c + 0x50);
      uVar4 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar4 & 0x7fffffff;
      local_28 = iVar8;
      iVar7 = sub_080C8CB0(uVar4 * 2 >> 0x11,0x30);
      local_28 = iVar8 + iVar7 * -0x100;
      sub_0808827C(3,&local_2c);
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    sub_0801412C(6,local_24);
    sub_08001EAC(0x24);
    sub_08029778(param_1,1);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    sub_080297C0(param_1);
  }
  return in_lr;
}

