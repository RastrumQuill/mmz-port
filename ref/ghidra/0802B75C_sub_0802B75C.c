// sub_0802B75C at 0x0802B75C (thumb)

undefined4 sub_0802B75C(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082acbf8 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_082acf94)[*(byte *)(param_1 + 0x10)];
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_08029654(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_08029874(param_1,&DAT_082acdf8,0x20);
    *(undefined4 *)(param_1 + 0xb0) = 0x802b9ad;
    uVar1 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = uVar1;
    sub_080014E8(&DAT_084e008c,(DAT_02022f8e - 0x300) * 0x20 + 0x10000);
    sub_0800179C(&DAT_084e0098,(DAT_02022fe7 - 3) * 0x20 + 0x200);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x4c);
  uVar1 = sub_0800869C(uVar3,*(undefined4 *)(param_1 + 0x50));
  iVar2 = sub_08008BC0(uVar3,uVar1);
  *(int *)(param_1 + 0xc0) = iVar2;
  iVar2 = sub_080089EC(uVar3,uVar1);
  *(int *)(param_1 + 0xc4) = iVar2;
  *(int *)(param_1 + 200) = *(int *)(param_1 + 0xc0) + iVar2 >> 1;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined *)(param_1 + 0xd2) = 0xff;
  *(undefined *)(param_1 + 0xd4) = 0xff;
  *(undefined *)(param_1 + 0xd3) = 0;
  *(undefined *)(param_1 + 0xd5) = 0;
  *(undefined *)(param_1 + 0xd6) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined2 *)(param_1 + 0xd8) = 0xffff;
  *(undefined2 *)(param_1 + 0xda) = 0xffff;
  sub_0802B8AC(param_1);
  return in_lr;
}

