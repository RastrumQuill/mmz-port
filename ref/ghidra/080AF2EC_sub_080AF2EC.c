// sub_080AF2EC at 0x080AF2EC (thumb)

undefined4 sub_080AF2EC(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(undefined *)(param_1 + 0x13) = 0;
  }
  sub_0809C980(param_1);
  bVar2 = *(char *)(param_1 + 0x13) + 1;
  *(byte *)(param_1 + 0x13) = bVar2;
  if (*(byte *)(param_1 + 0x12) < bVar2) {
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | 0xd0;
    *(undefined *)(param_1 + 0x1e) = 0xd;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  else {
    cVar1 = (&DAT_02023120)[*(byte *)(param_1 + 9)];
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | cVar1 << 4;
    *(char *)(param_1 + 0x1e) = cVar1;
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    uVar4 = DAT_02022890 * 0x343fd + 0x269ec3;
    uVar5 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar5 & 0x7fffffff;
    sub_0809B018(param_1,(uVar4 * 2 >> 0x11 & 0xff) + 0x100,((uVar5 * 2 >> 0x11 & 3) + 8) * -0x40,8)
    ;
    uVar4 = DAT_02022890 * 0x343fd + 0x269ec3;
    uVar5 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar5 & 0x7fffffff;
    sub_0809B018(param_1,-0x100 - (uVar4 * 2 >> 0x11 & 0xff),((uVar5 * 2 >> 0x11 & 3) + 8) * -0x40,8
                );
    uVar4 = DAT_02022890 * 0x343fd + 0x269ec3;
    uVar5 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar5 & 0x7fffffff;
    sub_0809B018(param_1,(uVar4 * 2 >> 0x11 & 0xff) + 0x100,((uVar5 * 2 >> 0x11 & 3) + 8) * -0x40,9)
    ;
    uVar4 = DAT_02022890 * 0x343fd + 0x269ec3;
    uVar5 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar5 & 0x7fffffff;
    sub_0809B018(param_1,-0x100 - (uVar4 * 2 >> 0x11 & 0xff),((uVar5 * 2 >> 0x11 & 3) + 8) * -0x40,9
                );
    if (*(char *)(param_1 + 0x10) == '\0') {
      sub_08001EAC(0xac);
      uVar3 = sub_0806F530(0,*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50) + -0x1000,1);
      *(undefined4 *)(param_1 + 0x24) = uVar3;
      uVar3 = sub_0806F530(uVar3,*(int *)(param_1 + 0x4c) + 0x6000,
                           *(int *)(param_1 + 0x50) + -0x1000,0);
      *(undefined4 *)(param_1 + 0x20) = uVar3;
      *(undefined4 *)(param_1 + 0xc) = 2;
      uVar3 = *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = 3;
      uVar3 = *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    }
    *(undefined4 *)(param_1 + 0x14) = uVar3;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  }
  return in_lr;
}

